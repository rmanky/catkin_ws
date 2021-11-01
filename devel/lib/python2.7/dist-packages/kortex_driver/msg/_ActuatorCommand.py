# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ActuatorCommand.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ActuatorCommand(genpy.Message):
  _md5sum = "2d6d46bc48110c570d5a382cb600d4f7"
  _type = "kortex_driver/ActuatorCommand"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 command_id
uint32 flags
float32 position
float32 velocity
float32 torque_joint
float32 current_motor"""
  __slots__ = ['command_id','flags','position','velocity','torque_joint','current_motor']
  _slot_types = ['uint32','uint32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       command_id,flags,position,velocity,torque_joint,current_motor

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ActuatorCommand, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.command_id is None:
        self.command_id = 0
      if self.flags is None:
        self.flags = 0
      if self.position is None:
        self.position = 0.
      if self.velocity is None:
        self.velocity = 0.
      if self.torque_joint is None:
        self.torque_joint = 0.
      if self.current_motor is None:
        self.current_motor = 0.
    else:
      self.command_id = 0
      self.flags = 0
      self.position = 0.
      self.velocity = 0.
      self.torque_joint = 0.
      self.current_motor = 0.

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
      _x = self
      buff.write(_get_struct_2I4f().pack(_x.command_id, _x.flags, _x.position, _x.velocity, _x.torque_joint, _x.current_motor))
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
      _x = self
      start = end
      end += 24
      (_x.command_id, _x.flags, _x.position, _x.velocity, _x.torque_joint, _x.current_motor,) = _get_struct_2I4f().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_2I4f().pack(_x.command_id, _x.flags, _x.position, _x.velocity, _x.torque_joint, _x.current_motor))
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
      _x = self
      start = end
      end += 24
      (_x.command_id, _x.flags, _x.position, _x.velocity, _x.torque_joint, _x.current_motor,) = _get_struct_2I4f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I4f = None
def _get_struct_2I4f():
    global _struct_2I4f
    if _struct_2I4f is None:
        _struct_2I4f = struct.Struct("<2I4f")
    return _struct_2I4f
