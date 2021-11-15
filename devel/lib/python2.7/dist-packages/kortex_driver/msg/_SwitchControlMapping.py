# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/SwitchControlMapping.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class SwitchControlMapping(genpy.Message):
  _md5sum = "4a7c904b5b1279f1ceda6c334529fa90"
  _type = "kortex_driver/SwitchControlMapping"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 controller_identifier
MapGroupHandle map_group_handle
MapHandle map_handle
================================================================================
MSG: kortex_driver/MapGroupHandle

uint32 identifier
uint32 permission
================================================================================
MSG: kortex_driver/MapHandle

uint32 identifier
uint32 permission"""
  __slots__ = ['controller_identifier','map_group_handle','map_handle']
  _slot_types = ['uint32','kortex_driver/MapGroupHandle','kortex_driver/MapHandle']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       controller_identifier,map_group_handle,map_handle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SwitchControlMapping, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.controller_identifier is None:
        self.controller_identifier = 0
      if self.map_group_handle is None:
        self.map_group_handle = kortex_driver.msg.MapGroupHandle()
      if self.map_handle is None:
        self.map_handle = kortex_driver.msg.MapHandle()
    else:
      self.controller_identifier = 0
      self.map_group_handle = kortex_driver.msg.MapGroupHandle()
      self.map_handle = kortex_driver.msg.MapHandle()

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
      buff.write(_get_struct_5I().pack(_x.controller_identifier, _x.map_group_handle.identifier, _x.map_group_handle.permission, _x.map_handle.identifier, _x.map_handle.permission))
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
      if self.map_group_handle is None:
        self.map_group_handle = kortex_driver.msg.MapGroupHandle()
      if self.map_handle is None:
        self.map_handle = kortex_driver.msg.MapHandle()
      end = 0
      _x = self
      start = end
      end += 20
      (_x.controller_identifier, _x.map_group_handle.identifier, _x.map_group_handle.permission, _x.map_handle.identifier, _x.map_handle.permission,) = _get_struct_5I().unpack(str[start:end])
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
      buff.write(_get_struct_5I().pack(_x.controller_identifier, _x.map_group_handle.identifier, _x.map_group_handle.permission, _x.map_handle.identifier, _x.map_handle.permission))
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
      if self.map_group_handle is None:
        self.map_group_handle = kortex_driver.msg.MapGroupHandle()
      if self.map_handle is None:
        self.map_handle = kortex_driver.msg.MapHandle()
      end = 0
      _x = self
      start = end
      end += 20
      (_x.controller_identifier, _x.map_group_handle.identifier, _x.map_group_handle.permission, _x.map_handle.identifier, _x.map_handle.permission,) = _get_struct_5I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5I = None
def _get_struct_5I():
    global _struct_5I
    if _struct_5I is None:
        _struct_5I = struct.Struct("<5I")
    return _struct_5I
