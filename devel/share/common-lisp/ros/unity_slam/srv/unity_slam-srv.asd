
(cl:in-package :asdf)

(defsystem "unity_slam-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :unity_slam-msg
)
  :components ((:file "_package")
    (:file "PositionService" :depends-on ("_package_PositionService"))
    (:file "_package_PositionService" :depends-on ("_package"))
  ))