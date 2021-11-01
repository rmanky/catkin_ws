# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/JointTorques.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class JointTorques(genpy.Message):
  _md5sum = "ada0e26af44ca932f53e6c0e450fadd8"
  _type = "kortex_driver/JointTorques"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
JointTorque[] joint_torques
uint32 duration
================================================================================
MSG: kortex_driver/JointTorque

uint32 joint_identifier
float32 value
uint32 duration"""
  __slots__ = ['joint_torques','duration']
  _slot_types = ['kortex_driver/JointTorque[]','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       joint_torques,duration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointTorques, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.joint_torques is None:
        self.joint_torques = []
      if self.duration is None:
        self.duration = 0
    else:
      self.joint_torques = []
      self.duration = 0

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
      length = len(self.joint_torques)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_torques:
        _x = val1
        buff.write(_get_struct_IfI().pack(_x.joint_identifier, _x.value, _x.duration))
      _x = self.duration
      buff.write(_get_struct_I().pack(_x))
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
      if self.joint_torques is None:
        self.joint_torques = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_torques = []
      for i in range(0, length):
        val1 = kortex_driver.msg.JointTorque()
        _x = val1
        start = end
        end += 12
        (_x.joint_identifier, _x.value, _x.duration,) = _get_struct_IfI().unpack(str[start:end])
        self.joint_torques.append(val1)
      start = end
      end += 4
      (self.duration,) = _get_struct_I().unpack(str[start:end])
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
      length = len(self.joint_torques)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_torques:
        _x = val1
        buff.write(_get_struct_IfI().pack(_x.joint_identifier, _x.value, _x.duration))
      _x = self.duration
      buff.write(_get_struct_I().pack(_x))
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
      if self.joint_torques is None:
        self.joint_torques = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_torques = []
      for i in range(0, length):
        val1 = kortex_driver.msg.JointTorque()
        _x = val1
        start = end
        end += 12
        (_x.joint_identifier, _x.value, _x.duration,) = _get_struct_IfI().unpack(str[start:end])
        self.joint_torques.append(val1)
      start = end
      end += 4
      (self.duration,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_IfI = None
def _get_struct_IfI():
    global _struct_IfI
    if _struct_IfI is None:
        _struct_IfI = struct.Struct("<IfI")
    return _struct_IfI
