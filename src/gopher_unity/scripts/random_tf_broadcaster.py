#!/usr/bin/env python
import roslib; roslib.load_manifest('unity_slam')
import rospy
import tf
import tf.msg
import geometry_msgs.msg
import unity_slam.msg
import math

PREFIX = 'freight/'

class Mover:
    def mover_callback(self, data):
        #t = geometry_msgs.msg.TransformStamped()
        #t.header.frame_id = "{}base_link".format(PREFIX)
        #t.header.stamp = rospy.Time.now()
        #t.child_frame_id = "{}chassis_link".format(PREFIX)
        #t.transform.translation.x = data.pos_x
        #t.transform.translation.y = data.pos_y
        #t.transform.translation.z = data.pos_z

        #t.transform.rotation.x = data.rot_x
        #t.transform.rotation.y = data.rot_y
        #t.transform.rotation.z = data.rot_z
        #t.transform.rotation.w = data.rot_w

        #tfm = tf.msg.tfMessage([t])
        br = tf.TransformBroadcaster()
        br.sendTransform((data.pos_x, data.pos_y, data.pos_z),
                        (data.rot_x, data.rot_y, data.rot_z, data.rot_w),
                        rospy.Time.now(),
                        "freight/chassis_link",
                        "freight/base_link")
        ## self.pub_tf.publish(tfm)
        print(data)

    def __init__(self):
        ## self.pub_tf = rospy.Publisher("/tf", tf.msg.tfMessage, queue_size = 2)
        self.pub_pr = rospy.Publisher("/pr", unity_slam.msg.PosRot, queue_size = 2)

        rospy.Subscriber('pr', unity_slam.msg.PosRot, self.mover_callback)

        rospy.spin()



if __name__ == '__main__':
    rospy.init_node('random_tf_broadcaster')
    mover = Mover()


