# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "unity_slam: 1 messages, 1 services")

set(MSG_I_FLAGS "-Iunity_slam:/ros/catkin_ws/src/unity_slam/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(unity_slam_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_custom_target(_unity_slam_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "unity_slam" "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" "unity_slam/PosRot"
)

get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_custom_target(_unity_slam_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "unity_slam" "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(unity_slam
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_slam
)

### Generating Services
_generate_srv_cpp(unity_slam
  "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_slam
)

### Generating Module File
_generate_module_cpp(unity_slam
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_slam
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(unity_slam_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(unity_slam_generate_messages unity_slam_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_slam_generate_messages_cpp _unity_slam_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_slam_generate_messages_cpp _unity_slam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_slam_gencpp)
add_dependencies(unity_slam_gencpp unity_slam_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_slam_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(unity_slam
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_slam
)

### Generating Services
_generate_srv_eus(unity_slam
  "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_slam
)

### Generating Module File
_generate_module_eus(unity_slam
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_slam
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(unity_slam_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(unity_slam_generate_messages unity_slam_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_slam_generate_messages_eus _unity_slam_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_slam_generate_messages_eus _unity_slam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_slam_geneus)
add_dependencies(unity_slam_geneus unity_slam_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_slam_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(unity_slam
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_slam
)

### Generating Services
_generate_srv_lisp(unity_slam
  "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_slam
)

### Generating Module File
_generate_module_lisp(unity_slam
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_slam
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(unity_slam_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(unity_slam_generate_messages unity_slam_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_slam_generate_messages_lisp _unity_slam_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_slam_generate_messages_lisp _unity_slam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_slam_genlisp)
add_dependencies(unity_slam_genlisp unity_slam_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_slam_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(unity_slam
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_slam
)

### Generating Services
_generate_srv_nodejs(unity_slam
  "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_slam
)

### Generating Module File
_generate_module_nodejs(unity_slam
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_slam
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(unity_slam_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(unity_slam_generate_messages unity_slam_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_slam_generate_messages_nodejs _unity_slam_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_slam_generate_messages_nodejs _unity_slam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_slam_gennodejs)
add_dependencies(unity_slam_gennodejs unity_slam_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_slam_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(unity_slam
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam
)

### Generating Services
_generate_srv_py(unity_slam
  "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam
)

### Generating Module File
_generate_module_py(unity_slam
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(unity_slam_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(unity_slam_generate_messages unity_slam_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_slam_generate_messages_py _unity_slam_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_slam/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_slam_generate_messages_py _unity_slam_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_slam_genpy)
add_dependencies(unity_slam_genpy unity_slam_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_slam_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_slam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_slam
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(unity_slam_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_slam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_slam
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(unity_slam_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_slam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_slam
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(unity_slam_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_slam)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_slam
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(unity_slam_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_slam
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(unity_slam_generate_messages_py std_msgs_generate_messages_py)
endif()
