; Auto-generated. Do not edit!


(cl:in-package unity_gopher-srv)


;//! \htmlinclude PositionService-request.msg.html

(cl:defclass <PositionService-request> (roslisp-msg-protocol:ros-message)
  ((input
    :reader input
    :initarg :input
    :type unity_gopher-msg:PosRot
    :initform (cl:make-instance 'unity_gopher-msg:PosRot)))
)

(cl:defclass PositionService-request (<PositionService-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionService-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionService-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name unity_gopher-srv:<PositionService-request> is deprecated: use unity_gopher-srv:PositionService-request instead.")))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <PositionService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader unity_gopher-srv:input-val is deprecated.  Use unity_gopher-srv:input instead.")
  (input m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionService-request>) ostream)
  "Serializes a message object of type '<PositionService-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionService-request>) istream)
  "Deserializes a message object of type '<PositionService-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionService-request>)))
  "Returns string type for a service object of type '<PositionService-request>"
  "unity_gopher/PositionServiceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionService-request)))
  "Returns string type for a service object of type 'PositionService-request"
  "unity_gopher/PositionServiceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionService-request>)))
  "Returns md5sum for a message object of type '<PositionService-request>"
  "5190f887b70decc2fafe0ae2939b233a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionService-request)))
  "Returns md5sum for a message object of type 'PositionService-request"
  "5190f887b70decc2fafe0ae2939b233a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionService-request>)))
  "Returns full string definition for message of type '<PositionService-request>"
  (cl:format cl:nil "PosRot input~%~%================================================================================~%MSG: unity_gopher/PosRot~%float32 pos_x~%float32 pos_y~%float32 pos_z~%float32 rot_x~%float32 rot_y~%float32 rot_z~%float32 rot_w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionService-request)))
  "Returns full string definition for message of type 'PositionService-request"
  (cl:format cl:nil "PosRot input~%~%================================================================================~%MSG: unity_gopher/PosRot~%float32 pos_x~%float32 pos_y~%float32 pos_z~%float32 rot_x~%float32 rot_y~%float32 rot_z~%float32 rot_w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionService-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionService-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionService-request
    (cl:cons ':input (input msg))
))
;//! \htmlinclude PositionService-response.msg.html

(cl:defclass <PositionService-response> (roslisp-msg-protocol:ros-message)
  ((output
    :reader output
    :initarg :output
    :type unity_gopher-msg:PosRot
    :initform (cl:make-instance 'unity_gopher-msg:PosRot)))
)

(cl:defclass PositionService-response (<PositionService-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PositionService-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PositionService-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name unity_gopher-srv:<PositionService-response> is deprecated: use unity_gopher-srv:PositionService-response instead.")))

(cl:ensure-generic-function 'output-val :lambda-list '(m))
(cl:defmethod output-val ((m <PositionService-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader unity_gopher-srv:output-val is deprecated.  Use unity_gopher-srv:output instead.")
  (output m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PositionService-response>) ostream)
  "Serializes a message object of type '<PositionService-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'output) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PositionService-response>) istream)
  "Deserializes a message object of type '<PositionService-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'output) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PositionService-response>)))
  "Returns string type for a service object of type '<PositionService-response>"
  "unity_gopher/PositionServiceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionService-response)))
  "Returns string type for a service object of type 'PositionService-response"
  "unity_gopher/PositionServiceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PositionService-response>)))
  "Returns md5sum for a message object of type '<PositionService-response>"
  "5190f887b70decc2fafe0ae2939b233a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PositionService-response)))
  "Returns md5sum for a message object of type 'PositionService-response"
  "5190f887b70decc2fafe0ae2939b233a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PositionService-response>)))
  "Returns full string definition for message of type '<PositionService-response>"
  (cl:format cl:nil "PosRot output~%~%~%================================================================================~%MSG: unity_gopher/PosRot~%float32 pos_x~%float32 pos_y~%float32 pos_z~%float32 rot_x~%float32 rot_y~%float32 rot_z~%float32 rot_w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PositionService-response)))
  "Returns full string definition for message of type 'PositionService-response"
  (cl:format cl:nil "PosRot output~%~%~%================================================================================~%MSG: unity_gopher/PosRot~%float32 pos_x~%float32 pos_y~%float32 pos_z~%float32 rot_x~%float32 rot_y~%float32 rot_z~%float32 rot_w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PositionService-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'output))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PositionService-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PositionService-response
    (cl:cons ':output (output msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PositionService)))
  'PositionService-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PositionService)))
  'PositionService-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PositionService)))
  "Returns string type for a service object of type '<PositionService>"
  "unity_gopher/PositionService")