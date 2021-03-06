# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/GetSafetyInformationRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class GetSafetyInformationRequest(genpy.Message):
  _md5sum = "28fc5544fa28c41b8590a221a4f4db30"
  _type = "kortex_driver/GetSafetyInformationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """SafetyHandle input

================================================================================
MSG: kortex_driver/SafetyHandle

uint32 identifier"""
  __slots__ = ['input']
  _slot_types = ['kortex_driver/SafetyHandle']

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
      super(GetSafetyInformationRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input is None:
        self.input = kortex_driver.msg.SafetyHandle()
    else:
      self.input = kortex_driver.msg.SafetyHandle()

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
      _x = self.input.identifier
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
      if self.input is None:
        self.input = kortex_driver.msg.SafetyHandle()
      end = 0
      start = end
      end += 4
      (self.input.identifier,) = _get_struct_I().unpack(str[start:end])
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
      _x = self.input.identifier
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
      if self.input is None:
        self.input = kortex_driver.msg.SafetyHandle()
      end = 0
      start = end
      end += 4
      (self.input.identifier,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/GetSafetyInformationResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class GetSafetyInformationResponse(genpy.Message):
  _md5sum = "8424594fd065a6af902dd23345f3dd8f"
  _type = "kortex_driver/GetSafetyInformationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """SafetyInformation output

================================================================================
MSG: kortex_driver/SafetyInformation

SafetyHandle handle
bool can_change_safety_state
bool has_warning_threshold
bool has_error_threshold
uint32 limit_type
float32 default_warning_threshold
float32 default_error_threshold
float32 upper_hard_limit
float32 lower_hard_limit
uint32 status
uint32 unit
================================================================================
MSG: kortex_driver/SafetyHandle

uint32 identifier"""
  __slots__ = ['output']
  _slot_types = ['kortex_driver/SafetyInformation']

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
      super(GetSafetyInformationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = kortex_driver.msg.SafetyInformation()
    else:
      self.output = kortex_driver.msg.SafetyInformation()

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
      buff.write(_get_struct_I3BI4f2I().pack(_x.output.handle.identifier, _x.output.can_change_safety_state, _x.output.has_warning_threshold, _x.output.has_error_threshold, _x.output.limit_type, _x.output.default_warning_threshold, _x.output.default_error_threshold, _x.output.upper_hard_limit, _x.output.lower_hard_limit, _x.output.status, _x.output.unit))
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
        self.output = kortex_driver.msg.SafetyInformation()
      end = 0
      _x = self
      start = end
      end += 35
      (_x.output.handle.identifier, _x.output.can_change_safety_state, _x.output.has_warning_threshold, _x.output.has_error_threshold, _x.output.limit_type, _x.output.default_warning_threshold, _x.output.default_error_threshold, _x.output.upper_hard_limit, _x.output.lower_hard_limit, _x.output.status, _x.output.unit,) = _get_struct_I3BI4f2I().unpack(str[start:end])
      self.output.can_change_safety_state = bool(self.output.can_change_safety_state)
      self.output.has_warning_threshold = bool(self.output.has_warning_threshold)
      self.output.has_error_threshold = bool(self.output.has_error_threshold)
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
      buff.write(_get_struct_I3BI4f2I().pack(_x.output.handle.identifier, _x.output.can_change_safety_state, _x.output.has_warning_threshold, _x.output.has_error_threshold, _x.output.limit_type, _x.output.default_warning_threshold, _x.output.default_error_threshold, _x.output.upper_hard_limit, _x.output.lower_hard_limit, _x.output.status, _x.output.unit))
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
        self.output = kortex_driver.msg.SafetyInformation()
      end = 0
      _x = self
      start = end
      end += 35
      (_x.output.handle.identifier, _x.output.can_change_safety_state, _x.output.has_warning_threshold, _x.output.has_error_threshold, _x.output.limit_type, _x.output.default_warning_threshold, _x.output.default_error_threshold, _x.output.upper_hard_limit, _x.output.lower_hard_limit, _x.output.status, _x.output.unit,) = _get_struct_I3BI4f2I().unpack(str[start:end])
      self.output.can_change_safety_state = bool(self.output.can_change_safety_state)
      self.output.has_warning_threshold = bool(self.output.has_warning_threshold)
      self.output.has_error_threshold = bool(self.output.has_error_threshold)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I3BI4f2I = None
def _get_struct_I3BI4f2I():
    global _struct_I3BI4f2I
    if _struct_I3BI4f2I is None:
        _struct_I3BI4f2I = struct.Struct("<I3BI4f2I")
    return _struct_I3BI4f2I
class GetSafetyInformation(object):
  _type          = 'kortex_driver/GetSafetyInformation'
  _md5sum = '03aeca1f2d2314fba73be4aeb3606ece'
  _request_class  = GetSafetyInformationRequest
  _response_class = GetSafetyInformationResponse
