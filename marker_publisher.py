#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from visualization_msgs.msg import Marker, MarkerArray
from project3_interfaces.msg import PersonTracks
from std_msgs.msg import ColorRGBA
from geometry_msgs.msg import Point
import random

class MarkerPublisher(Node):
    def __init__(self):
        super().__init__('marker_publisher')
        self.subscription = self.create_subscription(
            PersonTracks,
            '/person_tracks',
            self.tracks_callback,
            10)
        self.publisher = self.create_publisher(
            MarkerArray,
            '/person_markers',
            10)
        
        self.markers = {}  # {track_id: {'marker': Marker, 'path': list}}
        self.colors = {}
        
        # Parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                ('max_path_length', 50),
                ('marker_scale', 0.1),
            ])
    
    def tracks_callback(self, msg):
        marker_array = MarkerArray()
        current_time = self.get_clock().now()
        
        # Update existing markers and create new ones
        for track in msg.tracks:
            if track.id not in self.markers:
                # Create new marker
                marker = Marker()
                marker.header.stamp = current_time.to_msg()
                marker.header.frame_id = 'laser'
                marker.ns = 'people'
                marker.id = track.id
                marker.type = Marker.LINE_STRIP
                marker.action = Marker.ADD
                marker.scale.x = self.get_parameter('marker_scale').value
                
                # Assign a random color for this track
                color = ColorRGBA()
                color.r = random.random()
                color.g = random.random()
                color.b = random.random()
                color.a = 1.0
                marker.color = color
                
                self.colors[track.id] = color
                self.markers[track.id] = {
                    'marker': marker,
                    'path': []
                }
            
            # Update marker path
            point = Point(
                x=track.position.x,
                y=track.position.y,
                z=0.0)
            
            self.markers[track.id]['path'].append(point)
            
            # Limit path length
            max_length = self.get_parameter('max_path_length').value
            if len(self.markers[track.id]['path']) > max_length:
                self.markers[track.id]['path'] = self.markers[track.id]['path'][-max_length:]
            
            # Update marker
            marker = self.markers[track.id]['marker']
            marker.header.stamp = current_time.to_msg()
            marker.points = self.markers[track.id]['path']
            marker.colors = [self.colors[track.id]] * len(marker.points)
            
            marker_array.markers.append(marker)
        
        # Publish all markers
        self.publisher.publish(marker_array)