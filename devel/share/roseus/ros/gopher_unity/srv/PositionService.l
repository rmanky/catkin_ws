;; Auto-generated. Do not edit!


(when (boundp 'gopher_unity::PositionService)
  (if (not (find-package "GOPHER_UNITY"))
    (make-package "GOPHER_UNITY"))
  (shadow 'PositionService (find-package "GOPHER_UNITY")))
(unless (find-package "GOPHER_UNITY::POSITIONSERVICE")
  (make-package "GOPHER_UNITY::POSITIONSERVICE"))
(unless (find-package "GOPHER_UNITY::POSITIONSERVICEREQUEST")
  (make-package "GOPHER_UNITY::POSITIONSERVICEREQUEST"))
(unless (find-package "GOPHER_UNITY::POSITIONSERVICERESPONSE")
  (make-package "GOPHER_UNITY::POSITIONSERVICERESPONSE"))

(in-package "ROS")





(defclass gopher_unity::PositionServiceRequest
  :super ros::object
  :slots (_input ))

(defmethod gopher_unity::PositionServiceRequest
  (:init
   (&key
    ((:input __input) (instance gopher_unity::PosRot :init))
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
    ;; gopher_unity/PosRot _input
    (send _input :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; gopher_unity/PosRot _input
       (send _input :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; gopher_unity/PosRot _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;;
   self)
  )

(defclass gopher_unity::PositionServiceResponse
  :super ros::object
  :slots (_output ))

(defmethod gopher_unity::PositionServiceResponse
  (:init
   (&key
    ((:output __output) (instance gopher_unity::PosRot :init))
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
    ;; gopher_unity/PosRot _output
    (send _output :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; gopher_unity/PosRot _output
       (send _output :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; gopher_unity/PosRot _output
     (send _output :deserialize buf ptr-) (incf ptr- (send _output :serialization-length))
   ;;
   self)
  )

(defclass gopher_unity::PositionService
  :super ros::object
  :slots ())

(setf (get gopher_unity::PositionService :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get gopher_unity::PositionService :datatype-) "gopher_unity/PositionService")
(setf (get gopher_unity::PositionService :request) gopher_unity::PositionServiceRequest)
(setf (get gopher_unity::PositionService :response) gopher_unity::PositionServiceResponse)

(defmethod gopher_unity::PositionServiceRequest
  (:response () (instance gopher_unity::PositionServiceResponse :init)))

(setf (get gopher_unity::PositionServiceRequest :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get gopher_unity::PositionServiceRequest :datatype-) "gopher_unity/PositionServiceRequest")
(setf (get gopher_unity::PositionServiceRequest :definition-)
      "PosRot input

================================================================================
MSG: gopher_unity/PosRot
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
MSG: gopher_unity/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")

(setf (get gopher_unity::PositionServiceResponse :md5sum-) "5190f887b70decc2fafe0ae2939b233a")
(setf (get gopher_unity::PositionServiceResponse :datatype-) "gopher_unity/PositionServiceResponse")
(setf (get gopher_unity::PositionServiceResponse :definition-)
      "PosRot input

================================================================================
MSG: gopher_unity/PosRot
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
MSG: gopher_unity/PosRot
float32 pos_x
float32 pos_y
float32 pos_z
float32 rot_x
float32 rot_y
float32 rot_z
float32 rot_w
")



(provide :gopher_unity/PositionService "5190f887b70decc2fafe0ae2939b233a")


