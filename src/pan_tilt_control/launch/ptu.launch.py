from launch import LaunchDescription

from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os

from launch.substitutions import LaunchConfiguration,ThisLaunchFileDir

def generate_launch_description():

    # start ptu node
    ptu_node = Node(
        package='pan_tilt_control',
        executable='pan_tilt_joy',
        name='pan_tilt_node',
        output='both',
    )

    return LaunchDescription([
        ptu_node,
    ])