#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Point
from project3_interfaces.msg import PersonCandidates
import numpy as np
from .utils import polar_to_cartesian
from sklearn.cluster import DBSCAN

class LidarProcessor(Node):
    def __init__(self):
        super().__init__('lidar_processor')
        self.subscription = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10)
        self.publisher = self.create_publisher(
            PersonCandidates,
            '/person_candidates',
            10)
        
        # Parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                ('max_distance', 5.0),
                ('min_points', 5),
                ('eps', 0.2),
                ('min_samples', 3),
                ('person_width_min', 0.3),
                ('person_width_max', 0.8),
            ])
        
    def scan_callback(self, msg):
        # Filter out invalid measurements
        ranges = np.array(msg.ranges)
        valid_mask = (ranges > msg.range_min) & (ranges < msg.range_max)
        angles = np.linspace(msg.angle_min, msg.angle_max, len(ranges))
        
        # Convert to Cartesian coordinates
        points = polar_to_cartesian(ranges[valid_mask], angles[valid_mask])
        
        # Cluster points using DBSCAN
        clustering = DBSCAN(
            eps=self.get_parameter('eps').value,
            min_samples=self.get_parameter('min_samples').value).fit(points)
        
        # Process clusters
        candidates = []
        for label in set(clustering.labels_):
            if label == -1:  # Noise
                continue
                
            cluster_points = points[clustering.labels_ == label]
            
            # Filter by size (approximate person dimensions)
            width = np.max(cluster_points[:, 0]) - np.min(cluster_points[:, 0])
            depth = np.max(cluster_points[:, 1]) - np.min(cluster_points[:, 1])
            
            if (self.get_parameter('person_width_min').value < width < self.get_parameter('person_width_max').value and
                len(cluster_points) >= self.get_parameter('min_points').value):
                # Calculate centroid
                centroid = np.mean(cluster_points, axis=0)
                if np.linalg.norm(centroid) <= self.get_parameter('max_distance').value:
                    candidates.append(centroid)
        
        # Publish detected candidates
        output_msg = PersonCandidates()
        for candidate in candidates:
            point = Point()
            point.x = float(candidate[0])
            point.y = float(candidate[1])
            point.z = 0.0
            output_msg.positions.append(point)
        
        self.publisher.publish(output_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LidarProcessor()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()