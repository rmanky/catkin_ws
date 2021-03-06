# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ArmStateNotification.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class ArmStateNotification(genpy.Message):
  _md5sum = "73ee66f2cc8dfa1e59b9413c6d13ee3a"
  _type = "kortex_driver/ArmStateNotification"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 active_state
Timestamp timestamp
Connection connection
================================================================================
MSG: kortex_driver/Timestamp

uint32 sec
uint32 usec
================================================================================
MSG: kortex_driver/Connection

UserProfileHandle user_handle
string connection_information
uint32 connection_identifier
================================================================================
MSG: kortex_driver/UserProfileHandle

uint32 identifier
uint32 permission"""
  __slots__ = ['active_state','timestamp','connection']
  _slot_types = ['uint32','kortex_driver/Timestamp','kortex_driver/Connection']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       active_state,timestamp,connection

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ArmStateNotification, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.active_state is None:
        self.active_state = 0
      if self.timestamp is None:
        self.timestamp = kortex_driver.msg.Timestamp()
      if self.connection is None:
        self.connection = kortex_driver.msg.Connection()
    else:
      self.active_state = 0
      self.timestamp = kortex_driver.msg.Timestamp()
      self.connection = kortex_driver.msg.Connection()

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
      buff.write(_get_struct_5I().pack(_x.active_state, _x.timestamp.sec, _x.timestamp.usec, _x.connection.user_handle.identifier, _x.connection.user_handle.permission))
      _x = self.connection.connection_information
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.connection.connection_identifier
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
      if self.timestamp is None:
        self.timestamp = kortex_driver.msg.Timestamp()
      if self.connection is None:
        self.connection = kortex_driver.msg.Connection()
      end = 0
      _x = self
      start = end
      end += 20
      (_x.active_state, _x.timestamp.sec, _x.timestamp.usec, _x.connection.user_handle.identifier, _x.connection.user_handle.permission,) = _get_struct_5I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.connection.connection_information = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.connection.connection_information = str[start:end]
      start = end
      end += 4
      (self.connection.connection_identifier,) = _get_struct_I().unpack(str[start:end])
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
      buff.write(_get_struct_5I().pack(_x.active_state, _x.timestamp.sec, _x.timestamp.usec, _x.connection.user_handle.identifier, _x.connection.user_handle.permission))
      _x = self.connection.connection_information
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.connection.connection_identifier
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
      if self.timestamp is None:
        self.timestamp = kortex_driver.msg.Timestamp()
      if self.connection is None:
        self.connection = kortex_driver.msg.Connection()
      end = 0
      _x = self
      start = end
      end += 20
      (_x.active_state, _x.timestamp.sec, _x.timestamp.usec, _x.connection.user_handle.identifier, _x.connection.user_handle.permission,) = _get_struct_5I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.connection.connection_information = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.connection.connection_information = str[start:end]
      start = end
      end += 4
      (self.connection.connection_identifier,) = _get_struct_I().unpack(str[start:end])
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
