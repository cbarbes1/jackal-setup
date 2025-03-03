"""
Author: Cole Barbes Devcom
Purpose: to allow controlling a pan tilt unit using a game controller stick 
Buttons X and O or 1 and 2 in the array will allow pan (X) or tilt (O)
"""
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from ptu_interfaces.action import SetPan, SetTilt
from sensor_msgs.msg import Joy

class PanTiltActionClient(Node):
    def __init__(self):
        """
        Initialize the action client and the subscriber for the joy topic, also set lock variables to true
        """
        super().__init__('pantilt_action_client')
        self._action_client_pan = ActionClient(self, SetPan, '/ptu/set_pan')
        self._action_client_tilt = ActionClient(self, SetTilt, '/ptu/set_tilt')
        self.joy_subscriber = self.create_subscription(
            Joy,
            '/j100_0164/joy_teleop/joy',
            self.listener_callback,
            10)
        self.joy_subscriber
        

        self.lock_pan = True
        self.lock_tilt = True

    def send_goal_pan(self, pan):
        """
        Set the pan goal for the action and set the feedback callback for this goal
        """
        goal_msg = SetPan.Goal()
        goal_msg.pan = pan
        self._action_client_pan.wait_for_server()

        self._send_goal_future = self._action_client_pan.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.add_on_set_parameters_callback(self.goal_response_callback)

    def send_goal_tilt(self, tilt):
        """
        Set the tilt goal for the action and set the feedback callback for this goal
        """
        goal_msg = SetTilt.Goal()
        goal_msg.tilt = tilt
        self._action_client_tilt.wait_for_server()

        self._send_goal_future = self._action_client_tilt.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.add_on_set_parameters_callback(self.goal_response_callback)
    
    def listener_callback(self, msg):
        """
        Event handler for the button actuation from the controller
        Set the lock variable depending on the status
        Set The goal depending on what is allowed by the lock
        """
        if msg.buttons[5] == 1:
            self.lock_pan = False
        elif msg.buttons[5] == 0:
            self.lock_pan = True

        if msg.buttons[5] == 1:
            self.lock_tilt = False
        elif msg.buttons[5] == 0:
            self.lock_tilt = True
       
        if not self.lock_pan:
            pan = msg.axes[3] * 1.5
            self.send_goal_pan(pan)

        if not self.lock_tilt:
            tilt = - msg.axes[4] * 0.4
            self.send_goal_tilt(tilt)

        
    
    def goal_response_callback(self, future):
        """
        Simply handle the callback from the response saying accept or reject
        """
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback_msg):
        """
        Print the feedback
        """
        feedback = feedback_msg.feedback
        self.get_logger().info('Recieved feedback: {0}'.format(feedback))



def main(args=None):
    rclpy.init(args=args)
    action_client = PanTiltActionClient()

    rclpy.spin(action_client)

    action_client.destroy_node()

    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
