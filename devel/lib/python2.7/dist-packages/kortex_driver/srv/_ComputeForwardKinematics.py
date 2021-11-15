# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ComputeForwardKinematicsRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class ComputeForwardKinematicsRequest(genpy.Message):
  _md5sum = "44544f4fe6207865aaa76a373c777e04"
  _type = "kortex_driver/ComputeForwardKinematicsRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """JointAngles input

================================================================================
MSG: kortex_driver/JointAngles

JointAngle[] joint_angles
================================================================================
MSG: kortex_driver/JointAngle

uint32 joint_identifier
float32 value"""
  __slots__ = ['input']
  _slot_types = ['kortex_driver/JointAngles']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       input

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeForwardKinematicsRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input is None:
        self.input = kortex_driver.msg.JointAngles()
    else:
      self.input = kortex_driver.msg.JointAngles()

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
      length = len(self.input.joint_angles)
      buff.write(_struct_I.pack(length))
      for val1 in self.input.joint_angles:
        _x = val1
        buff.write(_get_struct_If().pack(_x.joint_identifier, _x.value))
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
      if self.input is None:
        self.input = kortex_driver.msg.JointAngles()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input.joint_angles = []
      for i in range(0, length):
        val1 = kortex_driver.msg.JointAngle()
        _x = val1
        start = end
        end += 8
        (_x.joint_identifier, _x.value,) = _get_struct_If().unpack(str[start:end])
        self.input.joint_angles.append(val1)
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
      length = len(self.input.joint_angles)
      buff.write(_struct_I.pack(length))
      for val1 in self.input.joint_angles:
        _x = val1
        buff.write(_get_struct_If().pack(_x.joint_identifier, _x.value))
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
      if self.input is None:
        self.input = kortex_driver.msg.JointAngles()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.input.joint_angles = []
      for i in range(0, length):
        val1 = kortex_driver.msg.JointAngle()
        _x = val1
        start = end
        end += 8
        (_x.joint_identifier, _x.value,) = _get_struct_If().unpack(str[start:end])
        self.input.joint_angles.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_If = None
def _get_struct_If():
    global _struct_If
    if _struct_If is None:
        _struct_If = struct.Struct("<If")
    return _struct_If
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ComputeForwardKinematicsResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class ComputeForwardKinematicsResponse(genpy.Message):
  _md5sum = "688d02aea2316337d5932f2510ac9325"
  _type = "kortex_driver/ComputeForwardKinematicsResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """Pose output

================================================================================
MSG: kortex_driver/Pose

float32 x
float32 y
float32 z
float32 theta_x
float32 theta_y
float32 theta_z"""
  __slots__ = ['output']
  _slot_types = ['kortex_driver/Pose']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       output

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeForwardKinematicsResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = kortex_driver.msg.Pose()
    else:
      self.output = kortex_driver.msg.Pose()

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
      buff.write(_get_struct_6f().pack(_x.output.x, _x.output.y, _x.output.z, _x.output.theta_x, _x.output.theta_y, _x.output.theta_z))
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
      if self.output is None:
        self.output = kortex_driver.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.output.x, _x.output.y, _x.output.z, _x.output.theta_x, _x.output.theta_y, _x.output.theta_z,) = _get_struct_6f().unpack(str[start:end])
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
      buff.write(_get_struct_6f().pack(_x.output.x, _x.output.y, _x.output.z, _x.output.theta_x, _x.output.theta_y, _x.output.theta_z))
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
      if self.output is None:
        self.output = kortex_driver.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.output.x, _x.output.y, _x.output.z, _x.output.theta_x, _x.output.theta_y, _x.output.theta_z,) = _get_struct_6f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6f = None
def _get_struct_6f():
    global _struct_6f
    if _struct_6f is None:
        _struct_6f = struct.Struct("<6f")
    return _struct_6f
class ComputeForwardKinematics(object):
  _type          = 'kortex_driver/ComputeForwardKinematics'
  _md5sum = '2406133d7d6bcd723f8f11457d1f2636'
  _request_class  = ComputeForwardKinematicsRequest
  _response_class = ComputeForwardKinematicsResponse
