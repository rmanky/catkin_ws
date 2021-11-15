
(cl:in-package :asdf)

(defsystem "gopher_unity-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "PosRot" :depends-on ("_package_PosRot"))
    (:file "_package_PosRot" :depends-on ("_package"))
    (:file "tfMessage" :depends-on ("_package_tfMessage"))
    (:file "_package_tfMessage" :depends-on ("_package"))
  ))