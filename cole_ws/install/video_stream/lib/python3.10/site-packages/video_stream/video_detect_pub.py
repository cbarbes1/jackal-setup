import cv2
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from ultralytics import YOLO

class VideoPub(Node):

    def __init__(self):
        super().__init__('video_pub')
        self.bridge = CvBridge()
        self.publisher = self.create_publisher(
                Image, 
                '/laptop/image_raw',
                10)
        timer_period = 0.01
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.model = YOLO("/home/cole/cole_ws/src/video_stream/resource/yolo11n.pt")
    def process_frame(self, frame):
        results = self.model(frame)
        
        rendered_frame = results[0].plot()
        ros_msg = self.bridge.cv2_to_imgmsg(rendered_frame, encoding="bgr8")
        return ros_msg
    def timer_callback(self):
        
        cap = cv2.VideoCapture(0)
        if not cap.isOpened():
            raise IOError("Cannot open webcam")

        ret, frame = cap.read()

        if ret:
            ros_img_msg = self.process_frame(frame)
            self.publisher.publish(ros_img_msg)
            self.get_logger().info("publishing image to /laptop/image_raw")
        else:
            self.get_logger().info("Failed to capture frame")

        cap.release()

def main(args=None):
    rclpy.init(args=args)
    video_publisher = VideoPub()

    rclpy.spin(video_publisher)

    video_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
