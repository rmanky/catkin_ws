;; Auto-generated. Do not edit!


(when (boundp 'unity_slam::PositionService)
  (if (not (find-package "UNITY_SLAM"))
    (make-package "UNITY_SLAM"))
  (shadow 'PositionService (find-package "UNITY_SLAM")))
(unless (find-package "UNITY_SLAM::POSITIONSERVICE")
  (make-package "UNITY_SLAM::POSITIONSERVICE"))
(unless (find-package "UNITY_SLAM::POSITIONSERVICEREQUEST")
  (make-package "UNITY_SLAM::POSITIONSERVICEREQUEST"))
(unless (find-package "UNITY_SLAM::POSITIONSERVICERESPONSE")
  (make-package "UNITY_SLAM::POSITIONSERVICERESPONSE"))

(in-package "ROS")





(defclass unity_slam::PositionServiceRequest
  :super ros::object
  :slots (_input ))

(defmethod unity_slam::PositionServiceRequest
  (:init
   (&key
    ((:input __input) (instance unity_slam::PosRot :init))
    )
   (send-super :init)
   (setq _input __input)
   self)
  (:input
   (&rest __input)
   (if (keywordp (car __input))
       (send* _input __input)
     (progn
       (if __input (setq _input (car __input)))
       _input)))
  (:serialization-length
   ()
   (+
    ;; unity_slam/PosRot _input
    (send _input :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; unity_slam/PosRot _input
       (send _input :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; unity_slam/PosRot _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;;
   self)
  )

(defclass unity_slam::PositionServiceResponse
  :super ros::object
  :slots (_output ))

(defmethod unity_slam::PositionServiceResponse
  (:init
   (&key
    ((:output __output) (instance unity_slam::PosRot :init))
    )
   (send-super :init)
   (setq _output __output)
   self)
  (:output
   (&rest __output)
   (if (keywordp (car __output))
       (send* _output __output)
     (progn
       (if __output (setq _output (car __output)))
       _output)))
  (:serialization-length
   ()
   (+
    ;; unity_slam/PosRot _output
    (send _output :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; unity_slam/PosRot _output
       (send _output :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; unity_slam/PosRot _output
     (send _output :deserialize buf ptr-) (incf ptr- (send _output :serialization-length))
   ;;
   self)
  )

(defclass unity_slam::PositionService
  :super ros::object
  :slots ())

(setf (get unity_slam::PositionService :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_slam::PositionService :datatype-) "unity_slam/PositionService")
(setf (get unity_slam::PositionService :request) unity_slam::PositionServiceRequest)
(setf (get unity_slam::PositionService :response) unity_slam::PositionServiceResponse)

(defmethod unity_slam::PositionServiceRequest
  (:response () (instance unity_slam::PositionServiceResponse :init)))

(setf (get unity_slam::PositionServiceRequest :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_slam::PositionServiceRequest :datatype-) "unity_slam/PositionServiceRequest")
(setf (get unity_slam::PositionServiceRequest :definition-)
      "PosRot input

================================================================================
MSG: unity_slam/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
---
PosRot output


================================================================================
MSG: unity_slam/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")

(setf (get unity_slam::PositionServiceResponse :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_slam::PositionServiceResponse :datatype-) "unity_slam/PositionServiceResponse")
(setf (get unity_slam::PositionServiceResponse :definition-)
      "PosRot input

================================================================================
MSG: unity_slam/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
---
PosRot output


================================================================================
MSG: unity_slam/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")



(provide :unity_slam/PositionService "5190f887b70decc2fafe0ae2939b233a")


