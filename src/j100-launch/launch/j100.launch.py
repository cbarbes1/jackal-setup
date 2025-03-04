from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node
import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess
import os
import get_package_share_directory
import LaunchConfiguration as LC

def generate_launch_description():
    
    
    return LaunchDescription([
        DeclareLaunchArgument('namespace', default_value='j100_0164'),
        # Below starts the essential drivers for the camera and pan_tilt
        DeclareLaunchArgument('camera_type', default_value='blackfly_s'),
        DeclareLaunchArgument('serial', default_value='21440311'),
        DeclareLaunchArgument('serial_port', default_value="/dev/ttyACM0"),
        DeclareLaunchArgument('frame_id', default_value="laser"),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
              os.path.join(
                get_package_share_directory('spinnaker_camera_driver'), 
                'launch', 'features', 'driver_node.launch.py')),
            launch_arguments={
                'camera_type': LC('camera_type'),
                'serial': LC('serial'),
            }.items()
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
              os.path.join(
                get_package_share_directory('hal_flir_d46'), 
                'launch', 'features', 'flir_d46.launch.py')),
        ),

        # start lidar
        Node(
            package='urg_node',
            executable='urg_node_driver',
            name='urg_node',
            namespace=(LC('namespace')),
            output='both',
            
        ),
        Node(
            package='pan_tilt_control',
            executable='pan_tilt_joy',
            name='pan_tilt_node',
            namespace=(LC('namespace')),
            output='both',
        ),
        Node(
            package='video_stream',
            executable='gstream',
            name='stream_node',
        ),

    ])