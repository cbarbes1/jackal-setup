from launch import LaunchDescription
from launch.actions import ExecuteProcess, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    use_rviz_arg = DeclareLaunchArgument(
        'use_rviz',
        default_value='false',
        description='Use rviz to show data from sensors and other hardware'
    )

    use_rviz = LaunchConfiguration('use_rviz')

    rviz_config = os.path.join(
        get_package_share_directory('sim_test'),
        'config',
        'husky.rviz'
    )

    gazebo_start = ExecuteProcess(
        cmd=['ign', 'gazebo', '-v', '4', 'src/sim_test/worlds/sim_world.sdf'],
        output='screen'
    )

    simulator_bridge_node = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        name='simulator_bridge_1',
        arguments=[
            '/keyboard/keypress@std_msgs/msg/Int32@ignition.msgs.Int32', 
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/front_laser/scan/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked', 
            '/world/sonoma/model/marble_husky_sensor_config_1/joint_state@sensor_msgs/msg/JointState@ignition.msgs.Model',
            '/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist',
            '/model/marble_husky_sensor_config_1/tf@ignition.msgs.Pose_V',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/front_laser/scan@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan'
        ]
    )

    simulator_bridge_node = Node(
        package='ros_ign_bridge',
        executable='parameter_bridge',
        name='simulator_bridge_2',
        arguments=[
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_front/image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_front/depth_image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_front/camera_info@sensor_msgs/msg/CameraInfo@ignition.msgs.CameraInfo',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_front/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_down/camera_info@sensor_msgs/msg/CameraInfo@ignition.msgs.CameraInfo',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_down/depth_image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_down/image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/camera_down/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked',

            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/planar_laser/scan@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/base_link/sensor/planar_laser/scan/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/tilt_gimbal_link/sensor/camera_pan_tilt/camera_info@sensor_msgs/msg/CameraInfo@ignition.msgs.CameraInfo',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/tilt_gimbal_link/sensor/camera_pan_tilt/depth_image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/tilt_gimbal_link/sensor/camera_pan_tilt/image@sensor_msgs/msg/Image@ignition.msgs.Image',
            '/world/sonoma/model/marble_husky_sensor_config_1/link/tilt_gimbal_link/sensor/camera_pan_tilt/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked'
        ]
    )
    
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
       # arguments=['d', rviz_config],
        condition=IfCondition(use_rviz)
    )
    
    return LaunchDescription([
        gazebo_start,
        simulator_bridge_node,
        use_rviz_arg,
        rviz_node,
    ])

