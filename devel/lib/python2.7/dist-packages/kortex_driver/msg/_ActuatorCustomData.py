# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ActuatorCustomData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ActuatorCustomData(genpy.Message):
  _md5sum = "04c9316a0533010d651279af65da7b38"
  _type = "kortex_driver/ActuatorCustomData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 command_id
uint32 custom_data_0
uint32 custom_data_1
uint32 custom_data_2
uint32 custom_data_3
uint32 custom_data_4
uint32 custom_data_5
uint32 custom_data_6
uint32 custom_data_7
uint32 custom_data_8
uint32 custom_data_9
uint32 custom_data_10
uint32 custom_data_11
uint32 custom_data_12
uint32 custom_data_13
uint32 custom_data_14
uint32 custom_data_15"""
  __slots__ = ['command_id','custom_data_0','custom_data_1','custom_data_2','custom_data_3','custom_data_4','custom_data_5','custom_data_6','custom_data_7','custom_data_8','custom_data_9','custom_data_10','custom_data_11','custom_data_12','custom_data_13','custom_data_14','custom_data_15']
  _slot_types = ['uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       command_id,custom_data_0,custom_data_1,custom_data_2,custom_data_3,custom_data_4,custom_data_5,custom_data_6,custom_data_7,custom_data_8,custom_data_9,custom_data_10,custom_data_11,custom_data_12,custom_data_13,custom_data_14,custom_data_15

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ActuatorCustomData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.command_id is None:
        self.command_id = 0
      if self.custom_data_0 is None:
        self.custom_data_0 = 0
      if self.custom_data_1 is None:
        self.custom_data_1 = 0
      if self.custom_data_2 is None:
        self.custom_data_2 = 0
      if self.custom_data_3 is None:
        self.custom_data_3 = 0
      if self.custom_data_4 is None:
        self.custom_data_4 = 0
      if self.custom_data_5 is None:
        self.custom_data_5 = 0
      if self.custom_data_6 is None:
        self.custom_data_6 = 0
      if self.custom_data_7 is None:
        self.custom_data_7 = 0
      if self.custom_data_8 is None:
        self.custom_data_8 = 0
      if self.custom_data_9 is None:
        self.custom_data_9 = 0
      if self.custom_data_10 is None:
        self.custom_data_10 = 0
      if self.custom_data_11 is None:
        self.custom_data_11 = 0
      if self.custom_data_12 is None:
        self.custom_data_12 = 0
      if self.custom_data_13 is None:
        self.custom_data_13 = 0
      if self.custom_data_14 is None:
        self.custom_data_14 = 0
      if self.custom_data_15 is None:
        self.custom_data_15 = 0
    else:
      self.command_id = 0
      self.custom_data_0 = 0
      self.custom_data_1 = 0
      self.custom_data_2 = 0
      self.custom_data_3 = 0
      self.custom_data_4 = 0
      self.custom_data_5 = 0
      self.custom_data_6 = 0
      self.custom_data_7 = 0
      self.custom_data_8 = 0
      self.custom_data_9 = 0
      self.custom_data_10 = 0
      self.custom_data_11 = 0
      self.custom_data_12 = 0
      self.custom_data_13 = 0
      self.custom_data_14 = 0
      self.custom_data_15 = 0

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
      buff.write(_get_struct_17I().pack(_x.command_id, _x.custom_data_0, _x.custom_data_1, _x.custom_data_2, _x.custom_data_3, _x.custom_data_4, _x.custom_data_5, _x.custom_data_6, _x.custom_data_7, _x.custom_data_8, _x.custom_data_9, _x.custom_data_10, _x.custom_data_11, _x.custom_data_12, _x.custom_data_13, _x.custom_data_14, _x.custom_data_15))
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
      end += 68
      (_x.command_id, _x.custom_data_0, _x.custom_data_1, _x.custom_data_2, _x.custom_data_3, _x.custom_data_4, _x.custom_data_5, _x.custom_data_6, _x.custom_data_7, _x.custom_data_8, _x.custom_data_9, _x.custom_data_10, _x.custom_data_11, _x.custom_data_12, _x.custom_data_13, _x.custom_data_14, _x.custom_data_15,) = _get_struct_17I().unpack(str[start:end])
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
      buff.write(_get_struct_17I().pack(_x.command_id, _x.custom_data_0, _x.custom_data_1, _x.custom_data_2, _x.custom_data_3, _x.custom_data_4, _x.custom_data_5, _x.custom_data_6, _x.custom_data_7, _x.custom_data_8, _x.custom_data_9, _x.custom_data_10, _x.custom_data_11, _x.custom_data_12, _x.custom_data_13, _x.custom_data_14, _x.custom_data_15))
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
      end += 68
      (_x.command_id, _x.custom_data_0, _x.custom_data_1, _x.custom_data_2, _x.custom_data_3, _x.custom_data_4, _x.custom_data_5, _x.custom_data_6, _x.custom_data_7, _x.custom_data_8, _x.custom_data_9, _x.custom_data_10, _x.custom_data_11, _x.custom_data_12, _x.custom_data_13, _x.custom_data_14, _x.custom_data_15,) = _get_struct_17I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_17I = None
def _get_struct_17I():
    global _struct_17I
    if _struct_17I is None:
        _struct_17I = struct.Struct("<17I")
    return _struct_17I
