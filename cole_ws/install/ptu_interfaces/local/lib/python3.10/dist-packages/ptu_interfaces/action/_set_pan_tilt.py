# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ptu_interfaces:action/SetPanTilt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetPanTilt_Goal(type):
    """Metaclass of message 'SetPanTilt_Goal'."""

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
                'ptu_interfaces.action.SetPanTilt_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_Goal(metaclass=Metaclass_SetPanTilt_Goal):
    """Message class 'SetPanTilt_Goal'."""

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


class Metaclass_SetPanTilt_Result(type):
    """Metaclass of message 'SetPanTilt_Result'."""

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
                'ptu_interfaces.action.SetPanTilt_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_Result(metaclass=Metaclass_SetPanTilt_Result):
    """Message class 'SetPanTilt_Result'."""

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_Feedback(type):
    """Metaclass of message 'SetPanTilt_Feedback'."""

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
                'ptu_interfaces.action.SetPanTilt_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_Feedback(metaclass=Metaclass_SetPanTilt_Feedback):
    """Message class 'SetPanTilt_Feedback'."""

    __slots__ = [
        '_percentage_of_completing_pan',
        '_percentage_of_completing_tilt',
    ]

    _fields_and_field_types = {
        'percentage_of_completing_pan': 'float',
        'percentage_of_completing_tilt': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.percentage_of_completing_pan = kwargs.get('percentage_of_completing_pan', float())
        self.percentage_of_completing_tilt = kwargs.get('percentage_of_completing_tilt', float())

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
        if self.percentage_of_completing_pan != other.percentage_of_completing_pan:
            return False
        if self.percentage_of_completing_tilt != other.percentage_of_completing_tilt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def percentage_of_completing_pan(self):
        """Message field 'percentage_of_completing_pan'."""
        return self._percentage_of_completing_pan

    @percentage_of_completing_pan.setter
    def percentage_of_completing_pan(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percentage_of_completing_pan' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'percentage_of_completing_pan' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._percentage_of_completing_pan = value

    @builtins.property
    def percentage_of_completing_tilt(self):
        """Message field 'percentage_of_completing_tilt'."""
        return self._percentage_of_completing_tilt

    @percentage_of_completing_tilt.setter
    def percentage_of_completing_tilt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percentage_of_completing_tilt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'percentage_of_completing_tilt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._percentage_of_completing_tilt = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_SendGoal_Request(type):
    """Metaclass of message 'SetPanTilt_SendGoal_Request'."""

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
                'ptu_interfaces.action.SetPanTilt_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__send_goal__request

            from ptu_interfaces.action import SetPanTilt
            if SetPanTilt.Goal.__class__._TYPE_SUPPORT is None:
                SetPanTilt.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_SendGoal_Request(metaclass=Metaclass_SetPanTilt_SendGoal_Request):
    """Message class 'SetPanTilt_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ptu_interfaces/SetPanTilt_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ptu_interfaces', 'action'], 'SetPanTilt_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Goal
        self.goal = kwargs.get('goal', SetPanTilt_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Goal
            assert \
                isinstance(value, SetPanTilt_Goal), \
                "The 'goal' field must be a sub message of type 'SetPanTilt_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_SendGoal_Response(type):
    """Metaclass of message 'SetPanTilt_SendGoal_Response'."""

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
                'ptu_interfaces.action.SetPanTilt_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_SendGoal_Response(metaclass=Metaclass_SetPanTilt_SendGoal_Response):
    """Message class 'SetPanTilt_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_SetPanTilt_SendGoal(type):
    """Metaclass of service 'SetPanTilt_SendGoal'."""

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
                'ptu_interfaces.action.SetPanTilt_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__set_pan_tilt__send_goal

            from ptu_interfaces.action import _set_pan_tilt
            if _set_pan_tilt.Metaclass_SetPanTilt_SendGoal_Request._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_SendGoal_Request.__import_type_support__()
            if _set_pan_tilt.Metaclass_SetPanTilt_SendGoal_Response._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_SendGoal_Response.__import_type_support__()


class SetPanTilt_SendGoal(metaclass=Metaclass_SetPanTilt_SendGoal):
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_SendGoal_Request as Request
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_GetResult_Request(type):
    """Metaclass of message 'SetPanTilt_GetResult_Request'."""

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
                'ptu_interfaces.action.SetPanTilt_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_GetResult_Request(metaclass=Metaclass_SetPanTilt_GetResult_Request):
    """Message class 'SetPanTilt_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_GetResult_Response(type):
    """Metaclass of message 'SetPanTilt_GetResult_Response'."""

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
                'ptu_interfaces.action.SetPanTilt_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__get_result__response

            from ptu_interfaces.action import SetPanTilt
            if SetPanTilt.Result.__class__._TYPE_SUPPORT is None:
                SetPanTilt.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_GetResult_Response(metaclass=Metaclass_SetPanTilt_GetResult_Response):
    """Message class 'SetPanTilt_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ptu_interfaces/SetPanTilt_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ptu_interfaces', 'action'], 'SetPanTilt_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Result
        self.result = kwargs.get('result', SetPanTilt_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Result
            assert \
                isinstance(value, SetPanTilt_Result), \
                "The 'result' field must be a sub message of type 'SetPanTilt_Result'"
        self._result = value


class Metaclass_SetPanTilt_GetResult(type):
    """Metaclass of service 'SetPanTilt_GetResult'."""

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
                'ptu_interfaces.action.SetPanTilt_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__set_pan_tilt__get_result

            from ptu_interfaces.action import _set_pan_tilt
            if _set_pan_tilt.Metaclass_SetPanTilt_GetResult_Request._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_GetResult_Request.__import_type_support__()
            if _set_pan_tilt.Metaclass_SetPanTilt_GetResult_Response._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_GetResult_Response.__import_type_support__()


class SetPanTilt_GetResult(metaclass=Metaclass_SetPanTilt_GetResult):
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_GetResult_Request as Request
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetPanTilt_FeedbackMessage(type):
    """Metaclass of message 'SetPanTilt_FeedbackMessage'."""

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
                'ptu_interfaces.action.SetPanTilt_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__set_pan_tilt__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__set_pan_tilt__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__set_pan_tilt__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__set_pan_tilt__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__set_pan_tilt__feedback_message

            from ptu_interfaces.action import SetPanTilt
            if SetPanTilt.Feedback.__class__._TYPE_SUPPORT is None:
                SetPanTilt.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetPanTilt_FeedbackMessage(metaclass=Metaclass_SetPanTilt_FeedbackMessage):
    """Message class 'SetPanTilt_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ptu_interfaces/SetPanTilt_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ptu_interfaces', 'action'], 'SetPanTilt_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Feedback
        self.feedback = kwargs.get('feedback', SetPanTilt_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Feedback
            assert \
                isinstance(value, SetPanTilt_Feedback), \
                "The 'feedback' field must be a sub message of type 'SetPanTilt_Feedback'"
        self._feedback = value


class Metaclass_SetPanTilt(type):
    """Metaclass of action 'SetPanTilt'."""

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
                'ptu_interfaces.action.SetPanTilt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__set_pan_tilt

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ptu_interfaces.action import _set_pan_tilt
            if _set_pan_tilt.Metaclass_SetPanTilt_SendGoal._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_SendGoal.__import_type_support__()
            if _set_pan_tilt.Metaclass_SetPanTilt_GetResult._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_GetResult.__import_type_support__()
            if _set_pan_tilt.Metaclass_SetPanTilt_FeedbackMessage._TYPE_SUPPORT is None:
                _set_pan_tilt.Metaclass_SetPanTilt_FeedbackMessage.__import_type_support__()


class SetPanTilt(metaclass=Metaclass_SetPanTilt):

    # The goal message defined in the action definition.
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Goal as Goal
    # The result message defined in the action definition.
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Result as Result
    # The feedback message defined in the action definition.
    from ptu_interfaces.action._set_pan_tilt import SetPanTilt_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ptu_interfaces.action._set_pan_tilt import SetPanTilt_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
