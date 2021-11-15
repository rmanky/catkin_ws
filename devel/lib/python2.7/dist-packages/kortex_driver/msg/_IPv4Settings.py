# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/IPv4Settings.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class IPv4Settings(genpy.Message):
  _md5sum = "485e8d7e0822786c2180cac4b25f7434"
  _type = "kortex_driver/IPv4Settings"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 ipv4_address
uint32 ipv4_subnet_mask
uint32 ipv4_default_gateway"""
  __slots__ = ['ipv4_address','ipv4_subnet_mask','ipv4_default_gateway']
  _slot_types = ['uint32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       ipv4_address,ipv4_subnet_mask,ipv4_default_gateway

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(IPv4Settings, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.ipv4_address is None:
        self.ipv4_address = 0
      if self.ipv4_subnet_mask is None:
        self.ipv4_subnet_mask = 0
      if self.ipv4_default_gateway is None:
        self.ipv4_default_gateway = 0
    else:
      self.ipv4_address = 0
      self.ipv4_subnet_mask = 0
      self.ipv4_default_gateway = 0

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
      buff.write(_get_struct_3I().pack(_x.ipv4_address, _x.ipv4_subnet_mask, _x.ipv4_default_gateway))
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
      end += 12
      (_x.ipv4_address, _x.ipv4_subnet_mask, _x.ipv4_default_gateway,) = _get_struct_3I().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.ipv4_address, _x.ipv4_subnet_mask, _x.ipv4_default_gateway))
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
      end += 12
      (_x.ipv4_address, _x.ipv4_subnet_mask, _x.ipv4_default_gateway,) = _get_struct_3I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
