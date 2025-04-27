from setuptools import find_packages, setup

package_name = 'project3'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'numpy', 'scikit-learn', 'filterpy',],
    zip_safe=True,
    maintainer='sicou2',
    maintainer_email='sicou2@tamu.edu',
    description='CSCE452 Project 3',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'lidar_processor = project3.lidar_processor:main',
            'person_tracker = project3.person_tracker:main',
            'marker_publisher = project3.marker_publisher:main',
        ],
    },
)
