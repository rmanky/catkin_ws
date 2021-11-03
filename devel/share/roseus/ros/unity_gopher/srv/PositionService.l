;; Auto-generated. Do not edit!


(when (boundp 'unity_gopher::PositionService)
  (if (not (find-package "UNITY_GOPHER"))
    (make-package "UNITY_GOPHER"))
  (shadow 'PositionService (find-package "UNITY_GOPHER")))
(unless (find-package "UNITY_GOPHER::POSITIONSERVICE")
  (make-package "UNITY_GOPHER::POSITIONSERVICE"))
(unless (find-package "UNITY_GOPHER::POSITIONSERVICEREQUEST")
  (make-package "UNITY_GOPHER::POSITIONSERVICEREQUEST"))
(unless (find-package "UNITY_GOPHER::POSITIONSERVICERESPONSE")
  (make-package "UNITY_GOPHER::POSITIONSERVICERESPONSE"))

(in-package "ROS")





(defclass unity_gopher::PositionServiceRequest
  :super ros::object
  :slots (_input ))

(defmethod unity_gopher::PositionServiceRequest
  (:init
   (&key
    ((:input __input) (instance unity_gopher::PosRot :init))
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
    ;; unity_gopher/PosRot _input
    (send _input :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; unity_gopher/PosRot _input
       (send _input :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; unity_gopher/PosRot _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;;
   self)
  )

(defclass unity_gopher::PositionServiceResponse
  :super ros::object
  :slots (_output ))

(defmethod unity_gopher::PositionServiceResponse
  (:init
   (&key
    ((:output __output) (instance unity_gopher::PosRot :init))
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
    ;; unity_gopher/PosRot _output
    (send _output :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; unity_gopher/PosRot _output
       (send _output :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; unity_gopher/PosRot _output
     (send _output :deserialize buf ptr-) (incf ptr- (send _output :serialization-length))
   ;;
   self)
  )

(defclass unity_gopher::PositionService
  :super ros::object
  :slots ())

(setf (get unity_gopher::PositionService :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_gopher::PositionService :datatype-) "unity_gopher/PositionService")
(setf (get unity_gopher::PositionService :request) unity_gopher::PositionServiceRequest)
(setf (get unity_gopher::PositionService :response) unity_gopher::PositionServiceResponse)

(defmethod unity_gopher::PositionServiceRequest
  (:response () (instance unity_gopher::PositionServiceResponse :init)))

(setf (get unity_gopher::PositionServiceRequest :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_gopher::PositionServiceRequest :datatype-) "unity_gopher/PositionServiceRequest")
(setf (get unity_gopher::PositionServiceRequest :definition-)
      "PosRot input

================================================================================
MSG: unity_gopher/PosRot
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
MSG: unity_gopher/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")

(setf (get unity_gopher::PositionServiceResponse :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get unity_gopher::PositionServiceResponse :datatype-) "unity_gopher/PositionServiceResponse")
(setf (get unity_gopher::PositionServiceResponse :definition-)
      "PosRot input

================================================================================
MSG: unity_gopher/PosRot
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
MSG: unity_gopher/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")



(provide :unity_gopher/PositionService "5190f887b70decc2fafe0ae2939b233a")


