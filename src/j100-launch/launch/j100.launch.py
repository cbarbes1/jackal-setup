from launch import LaunchDescription

from ament_index_python.packages import get_package_share_directory
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os

from launch.substitutions import LaunchConfiguration,ThisLaunchFileDir

from launch_ros.descriptions import ComposableNode, ComposableNodeContainer
from launch_ros.actions import PushRosNamespace

def generate_launch_description():

    namespace_launch_arg = DeclareLaunchArgument('namespace', default_value='j100_0164')
    serial_port_launch_arg = DeclareLaunchArgument('serial_port', default_value="/dev/ttyACM0")
    lidar_launch_arg = DeclareLaunchArgument('frame_id', default_value="laser")
    #camera_type:=blackfly_s serial:="'21440311'"
    camera_type_launch_arg = DeclareLaunchArgument('camera_type', default_value="blackfly_s")
    serial_launch_arg = DeclareLaunchArgument('serial', default_value="'21440311'")

    tf_launch_ld = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
             get_package_share_directory('clearpath_manipulators_description'), 'launch'),
             '/description.launch.py'])
        )
    # launch desciption import from hal_flir_d46
    hal_flir_ld = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('hal_flir_d46'), 'launch'),
         '/flir_d46.launch.py'])
      )

    ptu_control_ld = IncludeLaunchDescription(
     PythonLaunchDescriptionSource([os.path.join(
        get_package_share_directory('pan_tilt_control'), 'launch'),
        '/ptu.launch.py'])
     )
    # start lidar
    lidar_node = Node(
        package='urg_node',
        executable='urg_node_driver',
        name='urg_node',
        #namespace=LaunchConfiguration('namespace'),
        output='both',
        parameters=[{
            'serial_port': LaunchConfiguration('serial_port'),
            'frame_id': LaunchConfiguration('frame_id')
        }],
    )

    # start camera driver 

    camera_launch_ld = IncludeLaunchDescription(
      PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('spinnaker_camera_driver'), 'launch'),
         '/driver_node.launch.py']),
        launch_arguments={
            'camera_type': LaunchConfiguration('camera_type'),
            'serial': LaunchConfiguration('serial'),
            'frame_rate': "30.0",
        }.items()
      )

    # start video stream 
    video_node = Node(
        package='web_video_server',
        executable='web_video_server',
        name='camera_node',
        namespace=LaunchConfiguration('namespace'),
        output='both',
        parameters=[{
            'address' : '192.168.131.5',
        }]
    )
    
    # return launch description
    return LaunchDescription([
        namespace_launch_arg,
        serial_port_launch_arg,
        camera_type_launch_arg,
        serial_launch_arg,
        lidar_launch_arg,
        hal_flir_ld,
        ptu_control_ld,
        camera_launch_ld,
        lidar_node,
        video_node,
    ])