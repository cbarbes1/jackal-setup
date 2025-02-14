# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ptu_interfaces:srv/GetLimits.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetLimits_Request(type):
    """Metaclass of message 'GetLimits_Request'."""

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
                'ptu_interfaces.srv.GetLimits_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_limits__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_limits__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_limits__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_limits__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_limits__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLimits_Request(metaclass=Metaclass_GetLimits_Request):
    """Message class 'GetLimits_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLimits_Response(type):
    """Metaclass of message 'GetLimits_Response'."""

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
                'ptu_interfaces.srv.GetLimits_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_limits__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_limits__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_limits__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_limits__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_limits__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLimits_Response(metaclass=Metaclass_GetLimits_Response):
    """Message class 'GetLimits_Response'."""

    __slots__ = [
        '_pan_min',
        '_tilt_min',
        '_pan_max',
        '_tilt_max',
    ]

    _fields_and_field_types = {
        'pan_min': 'float',
        'tilt_min': 'float',
        'pan_max': 'float',
        'tilt_max': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pan_min = kwargs.get('pan_min', float())
        self.tilt_min = kwargs.get('tilt_min', float())
        self.pan_max = kwargs.get('pan_max', float())
        self.tilt_max = kwargs.get('tilt_max', float())

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
        if self.pan_min != other.pan_min:
            return False
        if self.tilt_min != other.tilt_min:
            return False
        if self.pan_max != other.pan_max:
            return False
        if self.tilt_max != other.tilt_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pan_min(self):
        """Message field 'pan_min'."""
        return self._pan_min

    @pan_min.setter
    def pan_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pan_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pan_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pan_min = value

    @builtins.property
    def tilt_min(self):
        """Message field 'tilt_min'."""
        return self._tilt_min

    @tilt_min.setter
    def tilt_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tilt_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tilt_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tilt_min = value

    @builtins.property
    def pan_max(self):
        """Message field 'pan_max'."""
        return self._pan_max

    @pan_max.setter
    def pan_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pan_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pan_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pan_max = value

    @builtins.property
    def tilt_max(self):
        """Message field 'tilt_max'."""
        return self._tilt_max

    @tilt_max.setter
    def tilt_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tilt_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tilt_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tilt_max = value


class Metaclass_GetLimits(type):
    """Metaclass of service 'GetLimits'."""

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
                'ptu_interfaces.srv.GetLimits')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_limits

            from ptu_interfaces.srv import _get_limits
            if _get_limits.Metaclass_GetLimits_Request._TYPE_SUPPORT is None:
                _get_limits.Metaclass_GetLimits_Request.__import_type_support__()
            if _get_limits.Metaclass_GetLimits_Response._TYPE_SUPPORT is None:
                _get_limits.Metaclass_GetLimits_Response.__import_type_support__()


class GetLimits(metaclass=Metaclass_GetLimits):
    from ptu_interfaces.srv._get_limits import GetLimits_Request as Request
    from ptu_interfaces.srv._get_limits import GetLimits_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
