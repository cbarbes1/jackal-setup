# jackal-setup
Code and documentation for updating clearpath jackals to ros humble, setup devices, and ports to ros2 from ros1

Using ASCII to move flir ptu e46

```bash
echo "PP-2500 *" > /dev/ttyUSB0
```

Ros2 driver launch
```bash
ros2 launch hal_flir_d46 flir_d46.launch.py
```

# Progress

Equipment:
    - Blackfly_s camera attached to a pan tilt unit
    - Hokuyo one line lidar
    - Doodle radio for video transmission

Initial software progress:
    - Updated jackal computer to ubuntu 22.04
    - Installed ros2 humble
        - flashed mcu for microros to work properly with ros2
    - All jackal topics publishing properly
    - Ps4 controller used to the jackal
    - Ability to control the pan tilt using a controller currently 

What needs to be completed:
    - The hardware needs to be mounted on the jackal
    - Full power of devices from jackal testing and implementation
    - 