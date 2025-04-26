#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from project3_interfaces.msg import PersonCandidates, PersonTracks
from geometry_msgs.msg import Point
from .utils import create_kalman_filter
import numpy as np
from collections import defaultdict

class PersonTracker(Node):
    def __init__(self):
        super().__init__('person_tracker')
        self.subscription = self.create_subscription(
            PersonCandidates,
            '/person_candidates',
            self.candidates_callback,
            10)
        self.publisher = self.create_publisher(
            PersonTracks,
            '/person_tracks',
            10)
        
        # Tracking variables
        self.tracks = {}  # {track_id: {'kf': KalmanFilter, 'misses': int}}
        self.next_id = 0
        self.max_misses = 5
        
        # Parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                ('distance_threshold', 0.5),
            ])
    
    def candidates_callback(self, msg):
        current_time = self.get_clock().now().to_msg()
        
        # Predict existing tracks
        for track_id, track in list(self.tracks.items()):
            track['kf'].predict()
            track['last_position'] = Point(
                x=track['kf'].x[0],
                y=track['kf'].x[1],
                z=0.0)
            track['misses'] += 1
            
            # Remove stale tracks
            if track['misses'] > self.max_misses:
                del self.tracks[track_id]
        
        # Associate detections to tracks
        if msg.positions:
            detections = np.array([[p.x, p.y] for p in msg.positions])
            
            # Simple nearest neighbor association
            for detection in msg.positions:
                best_dist = self.get_parameter('distance_threshold').value
                best_track = None
                
                for track_id, track in self.tracks.items():
                    dist = np.linalg.norm([
                        detection.x - track['last_position'].x,
                        detection.y - track['last_position'].y])
                    
                    if dist < best_dist:
                        best_dist = dist
                        best_track = track_id
                
                if best_track is not None:
                    # Update existing track
                    self.tracks[best_track]['kf'].update([detection.x, detection.y])
                    self.tracks[best_track]['misses'] = 0
                    self.tracks[best_track]['last_position'] = detection
                else:
                    # Create new track
                    kf = create_kalman_filter()
                    kf.x = np.array([detection.x, detection.y, 0, 0])  # [x, y, vx, vy]
                    self.tracks[self.next_id] = {
                        'kf': kf,
                        'misses': 0,
                        'last_position': detection,
                        'first_seen': current_time}
                    self.next_id += 1
        
        # Publish current tracks
        output_msg = PersonTracks()
        for track_id, track in self.tracks.items():
            person = PersonTrack()
            person.id = track_id
            person.position = track['last_position']
            person.velocity = Point(
                x=float(track['kf'].x[2]),
                y=float(track['kf'].x[3]),
                z=0.0)
            person.first_seen = track['first_seen']
            output_msg.tracks.append(person)
        
        self.publisher.publish(output_msg)

def main(args=None):
    rclpy.init(args=args)
    node = PersonTracker()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()