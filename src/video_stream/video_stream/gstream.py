import gi
gi.require_version('Gst', '1.0')
gi.require_version('GstRtspServer', '1.0')
from gi.repository import Gst, GstRtspServer, GObject, GLib

# Initialize GStreamer
Gst.init(None)

class SensorFactory(GstRtspServer.RTSPMediaFactory):
    def __init__(self):
        super(SensorFactory, self).__init__()

    def do_create_element(self, url):
        # Define the GStreamer pipeline.
        # Replace "videotestsrc" with your video source as needed.
        pipeline_str = (
            "v4l2src device=/dev/video2 !"
            "video/x-raw,format=YUY2 !"
            "videoconvert ! "
            "x264enc tune=zerolatency bitrate=1000 speed-preset=ultrafast ! "
            "rtph264pay config-interval=1 name=pay0 pt=96"
        )

        return Gst.parse_launch(pipeline_str)

# Create the RTSP server and mount point
server = GstRtspServer.RTSPServer()
server.set_address('192.168.0.51')
factory = SensorFactory()
factory.set_shared(True)
mounts = server.get_mount_points()
mounts.add_factory("/test", factory)
server.attach(None)

print("RTSP server is running at rtsp://127.0.0.1:8554/test")
loop = GLib.MainLoop()
loop.run()
