# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/NetworkEvent.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NetworkEvent(genpy.Message):
  _md5sum = "14c1c01d4da04f2a97e77e3914b7faf6"
  _type = "kortex_driver/NetworkEvent"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 UNSPECIFIED_NETWORK_EVENT = 0

uint32 WIFI_CONNECTED = 1

uint32 WIFI_DISCONNECTED = 2

uint32 WIFI_SCAN_STARTED = 3

uint32 WIFI_SCAN_RESULTS = 4

uint32 WIFI_SCAN_FAILED = 5

uint32 WIFI_NOT_FOUND = 6

uint32 WIFI_ASSOC_REJECTED = 7

uint32 WIFI_AUTH_WRONG_KEY = 8

uint32 WIFI_AUTH_CONN_FAILED = 9

uint32 WIFI_AUTH_FAILED = 10
"""
  # Pseudo-constants
  UNSPECIFIED_NETWORK_EVENT = 0
  WIFI_CONNECTED = 1
  WIFI_DISCONNECTED = 2
  WIFI_SCAN_STARTED = 3
  WIFI_SCAN_RESULTS = 4
  WIFI_SCAN_FAILED = 5
  WIFI_NOT_FOUND = 6
  WIFI_ASSOC_REJECTED = 7
  WIFI_AUTH_WRONG_KEY = 8
  WIFI_AUTH_CONN_FAILED = 9
  WIFI_AUTH_FAILED = 10

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
      super(NetworkEvent, self).__init__(*args, **kwds)

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
