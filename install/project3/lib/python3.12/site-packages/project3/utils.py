import numpy as np
from sklearn.cluster import DBSCAN
from project3.kalman_filter import KalmanFilter

def polar_to_cartesian(ranges, angles):
    """Convert polar coordinates to Cartesian"""
    x = ranges * np.cos(angles)
    y = ranges * np.sin(angles)
    return np.column_stack((x, y))

def create_kalman_filter():
    """Initialize a Kalman filter for person tracking"""
    kf = KalmanFilter(dim_x=4, dim_z=2)
    kf.F = np.array([[1, 0, 1, 0],    # State transition matrix
                     [0, 1, 0, 1],
                     [0, 0, 1, 0],
                     [0, 0, 0, 1]])
    kf.H = np.array([[1, 0, 0, 0],     # Measurement function
                     [0, 1, 0, 0]])
    kf.P *= 1000.                       # Covariance matrix
    kf.R = np.eye(2) * 5               # Measurement uncertainty
    kf.Q = np.eye(4) * 0.1             # Process uncertainty
    return kf