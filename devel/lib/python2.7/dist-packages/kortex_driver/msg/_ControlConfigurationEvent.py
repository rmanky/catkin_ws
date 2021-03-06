# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ControlConfigurationEvent.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ControlConfigurationEvent(genpy.Message):
  _md5sum = "5aa2a442ccb0c93e20aaef58c6149541"
  _type = "kortex_driver/ControlConfigurationEvent"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 UNSPECIFIED_CONTROL_CONFIGURATION_EVENT = 0

uint32 ANGLE_UNIT_CHANGED = 1

uint32 GRAVITY_VECTOR_CHANGED = 2

uint32 JOINT_ADMITTANCE_CONFIGURATION_CHANGED = 4

uint32 NULL_ADMITTANCE_CONFIGURATION_CHANGED = 5

uint32 CARTESIAN_ADMITTANCE_CONFIGURATION_CHANGED = 6

uint32 JOINT_TORQUE_HYBRID_CONFIGURATION_CHANGED = 7

uint32 WRENCH_COMMAND_NORMAL_CONFIGURATION_CHANGED = 8

uint32 WRENCH_COMMAND_RESTRICTED_CONFIGURATION_CHANGED = 9

uint32 CONTROL_CONFIGURATION_FACTORY_RESTORED = 10

uint32 TOOL_CONFIGURATION_CHANGED = 11

uint32 PAYLOAD_CONFIGURATION_CHANGED = 12

uint32 CARTESIAN_REFERENCE_CHANGED = 13

uint32 CHANGE_CONTROL_MODE_FAILED = 14

uint32 JOINT_SPEED_SOFT_LIMITS_CHANGED = 16

uint32 TWIST_LINEAR_SOFT_LIMIT_CHANGED = 17

uint32 TWIST_ANGULAR_SOFT_LIMIT_CHANGED = 18

uint32 JOINT_ACCELERATION_SOFT_LIMITS_CHANGED = 19

uint32 DESIRED_TWIST_LINEAR_SPEED_CHANGED = 20

uint32 DESIRED_TWIST_ANGULAR_SPEED_CHANGED = 21

uint32 DESIRED_JOINT_SPEED_CHANGED = 22
"""
  # Pseudo-constants
  UNSPECIFIED_CONTROL_CONFIGURATION_EVENT = 0
  ANGLE_UNIT_CHANGED = 1
  GRAVITY_VECTOR_CHANGED = 2
  JOINT_ADMITTANCE_CONFIGURATION_CHANGED = 4
  NULL_ADMITTANCE_CONFIGURATION_CHANGED = 5
  CARTESIAN_ADMITTANCE_CONFIGURATION_CHANGED = 6
  JOINT_TORQUE_HYBRID_CONFIGURATION_CHANGED = 7
  WRENCH_COMMAND_NORMAL_CONFIGURATION_CHANGED = 8
  WRENCH_COMMAND_RESTRICTED_CONFIGURATION_CHANGED = 9
  CONTROL_CONFIGURATION_FACTORY_RESTORED = 10
  TOOL_CONFIGURATION_CHANGED = 11
  PAYLOAD_CONFIGURATION_CHANGED = 12
  CARTESIAN_REFERENCE_CHANGED = 13
  CHANGE_CONTROL_MODE_FAILED = 14
  JOINT_SPEED_SOFT_LIMITS_CHANGED = 16
  TWIST_LINEAR_SOFT_LIMIT_CHANGED = 17
  TWIST_ANGULAR_SOFT_LIMIT_CHANGED = 18
  JOINT_ACCELERATION_SOFT_LIMITS_CHANGED = 19
  DESIRED_TWIST_LINEAR_SPEED_CHANGED = 20
  DESIRED_TWIST_ANGULAR_SPEED_CHANGED = 21
  DESIRED_JOINT_SPEED_CHANGED = 22

  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ControlConfigurationEvent, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
