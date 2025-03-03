# environment setup
```bash
cd scripts
./init-pantilt.bash
```

# Driver repositories
- Ptu interfaces: https://github.com/lapo5/ROS2-PTU-Interfaces 
- ptu driver: https://github.com/roncapat/ROS2-HAL-Flir-PTU-D46 
- lidar device driver: https://github.com/Hokuyo-aut/urg_node2 

# installing spinnaker camera driver
```bash 
sudo apt install ros-humble-spinnaker-camera-driver
```

# launch driver
```bash
ros2 launch spinnaker_camera_driver driver_node.launch.py camera_type:=blackfly_s serial:="'21440311'"
```
# hal flir d46 driver launch for the pan tilt
```bash
ros2 launch hal_flir_d46 flir_d46.launch.py

# custom controller driver launch

```bash
ros2 run pan_tilt_control pan_tilt_joy
```

# Lidar driver 
```bash
ros2 run urg_node urg_node_driver --ros-args -p serial_port:="/dev/ttyACM0" -p frame_id:="laser"
ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 base_link laser


# Video streaming over rtsp
Python bindings found for setting up rtsp stream 
gst-python used

# Complete Driver bringup 
To be completed.


