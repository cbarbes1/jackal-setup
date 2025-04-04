from launch import LaunchDescription as ld
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    return ld([
        ComposableNodeContainer(
            name='a_buncha_nodes',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='ptu-control',
                    plugin='ptu_control::PtuNode',
                    name='ptu_node',
                    namespace='ptu',
                    # ..
                    extra_arguments=[{'use_intra_process_comms': True}],
                ),
            ]
        )
    ])