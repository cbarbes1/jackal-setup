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
