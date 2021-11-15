
(cl:in-package :asdf)

(defsystem "gopher_unity-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :gopher_unity-msg
)
  :components ((:file "_package")
    (:file "PositionService" :depends-on ("_package_PositionService"))
    (:file "_package_PositionService" :depends-on ("_package"))
  ))