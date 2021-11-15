# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "unity_gopher: 1 messages, 1 services")

set(MSG_I_FLAGS "-Iunity_gopher:/ros/catkin_ws/src/unity_gopher/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(unity_gopher_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_custom_target(_unity_gopher_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "unity_gopher" "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" ""
)

get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_custom_target(_unity_gopher_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "unity_gopher" "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" "unity_gopher/PosRot"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_gopher
)

### Generating Services
_generate_srv_cpp(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_gopher
)

### Generating Module File
_generate_module_cpp(unity_gopher
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_gopher
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(unity_gopher_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(unity_gopher_generate_messages unity_gopher_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_gopher_generate_messages_cpp _unity_gopher_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_gopher_generate_messages_cpp _unity_gopher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_gopher_gencpp)
add_dependencies(unity_gopher_gencpp unity_gopher_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_gopher_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_gopher
)

### Generating Services
_generate_srv_eus(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_gopher
)

### Generating Module File
_generate_module_eus(unity_gopher
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_gopher
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(unity_gopher_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(unity_gopher_generate_messages unity_gopher_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_gopher_generate_messages_eus _unity_gopher_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_gopher_generate_messages_eus _unity_gopher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_gopher_geneus)
add_dependencies(unity_gopher_geneus unity_gopher_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_gopher_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_gopher
)

### Generating Services
_generate_srv_lisp(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_gopher
)

### Generating Module File
_generate_module_lisp(unity_gopher
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_gopher
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(unity_gopher_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(unity_gopher_generate_messages unity_gopher_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_gopher_generate_messages_lisp _unity_gopher_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_gopher_generate_messages_lisp _unity_gopher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_gopher_genlisp)
add_dependencies(unity_gopher_genlisp unity_gopher_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_gopher_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_gopher
)

### Generating Services
_generate_srv_nodejs(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_gopher
)

### Generating Module File
_generate_module_nodejs(unity_gopher
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_gopher
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(unity_gopher_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(unity_gopher_generate_messages unity_gopher_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_gopher_generate_messages_nodejs _unity_gopher_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_gopher_generate_messages_nodejs _unity_gopher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_gopher_gennodejs)
add_dependencies(unity_gopher_gennodejs unity_gopher_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_gopher_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher
)

### Generating Services
_generate_srv_py(unity_gopher
  "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv"
  "${MSG_I_FLAGS}"
  "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher
)

### Generating Module File
_generate_module_py(unity_gopher
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(unity_gopher_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(unity_gopher_generate_messages unity_gopher_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/msg/PosRot.msg" NAME_WE)
add_dependencies(unity_gopher_generate_messages_py _unity_gopher_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/ros/catkin_ws/src/unity_gopher/srv/PositionService.srv" NAME_WE)
add_dependencies(unity_gopher_generate_messages_py _unity_gopher_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(unity_gopher_genpy)
add_dependencies(unity_gopher_genpy unity_gopher_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS unity_gopher_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_gopher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/unity_gopher
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(unity_gopher_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_gopher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/unity_gopher
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(unity_gopher_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_gopher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/unity_gopher
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(unity_gopher_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_gopher)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/unity_gopher
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(unity_gopher_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/unity_gopher
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(unity_gopher_generate_messages_py std_msgs_generate_messages_py)
endif()
