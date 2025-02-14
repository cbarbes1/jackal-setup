# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ptu_interfaces:srv/SetPanTilt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPanTilt_Request(type):
    """Metaclass of message 'SetPanTilt_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ptu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ptu_interfaces.srv.SetPanTilt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pan_tilt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pan_tilt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pan_tilt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pan_tilt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pan_tilt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_Request(metaclass=Metaclass_SetPanTilt_Request):
    """Message class 'SetPanTilt_Request'."""

    __slots__ = [
        '_pan',
        '_tilt',
    ]

    _fields_and_field_types = {
        'pan': 'float',
        'tilt': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pan = kwargs.get('pan', float())
        self.tilt = kwargs.get('tilt', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pan != other.pan:
            return False
        if self.tilt != other.tilt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pan(self):
        """Message field 'pan'."""
        return self._pan

    @pan.setter
    def pan(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pan' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pan' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pan = value

    @builtins.property
    def tilt(self):
        """Message field 'tilt'."""
        return self._tilt

    @tilt.setter
    def tilt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tilt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tilt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tilt = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_Response(type):
    """Metaclass of message 'SetPanTilt_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ptu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ptu_interfaces.srv.SetPanTilt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_pan_tilt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_pan_tilt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_pan_tilt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_pan_tilt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_pan_tilt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_Response(metaclass=Metaclass_SetPanTilt_Response):
    """Message class 'SetPanTilt_Response'."""

    __slots__ = [
        '_ret',
    ]

    _fields_and_field_types = {
        'ret': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ret != other.ret:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ret' field must be of type 'bool'"
        self._ret = value


class Metaclass_SetPanTilt(type):
    """Metaclass of service 'SetPanTilt'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ptu_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ptu_interfaces.srv.SetPanTilt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_pan_tilt

            from ptu_interfaces.srv import _set_pan_tilt
            if _set_pan_tilt.Metaclass_SetPanTilt_Request._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_Request.__import_type_support__()
            if _set_pan_tilt.Metaclass_SetPanTilt_Response._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_Response.__import_type_support__()


class SetPanTilt(metaclass=Metaclass_SetPanTilt):
    from ptu_interfaces.srv._set_pan_tilt import SetPanTilt_Request as Request
    from ptu_interfaces.srv._set_pan_tilt import SetPanTilt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
