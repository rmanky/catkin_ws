# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;sensor_msgs;roscpp;rospy;std_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lteleop_twist_joy".split(';') if "-lteleop_twist_joy" != "" else []
PROJECT_NAME = "gopher_control"
PROJECT_SPACE_DIR = "/ros/catkin_ws/install"
PROJECT_VERSION = "0.0.0"
