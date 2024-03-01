# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_adapi_v1_msgs:srv/GetCooperationPolicies.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetCooperationPolicies_Request(type):
    """Metaclass of message 'GetCooperationPolicies_Request'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.GetCooperationPolicies_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_cooperation_policies__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_cooperation_policies__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_cooperation_policies__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_cooperation_policies__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_cooperation_policies__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCooperationPolicies_Request(metaclass=Metaclass_GetCooperationPolicies_Request):
    """Message class 'GetCooperationPolicies_Request'."""

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

# already imported above
# import rosidl_parser.definition


class Metaclass_GetCooperationPolicies_Response(type):
    """Metaclass of message 'GetCooperationPolicies_Response'."""

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
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.GetCooperationPolicies_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_cooperation_policies__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_cooperation_policies__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_cooperation_policies__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_cooperation_policies__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_cooperation_policies__response

            from autoware_adapi_v1_msgs.msg import CooperationPolicy
            if CooperationPolicy.__class__._TYPE_SUPPORT is None:
                CooperationPolicy.__class__.__import_type_support__()

            from autoware_adapi_v1_msgs.msg import ResponseStatus
            if ResponseStatus.__class__._TYPE_SUPPORT is None:
                ResponseStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetCooperationPolicies_Response(metaclass=Metaclass_GetCooperationPolicies_Response):
    """Message class 'GetCooperationPolicies_Response'."""

    __slots__ = [
        '_status',
        '_policies',
    ]

    _fields_and_field_types = {
        'status': 'autoware_adapi_v1_msgs/ResponseStatus',
        'policies': 'sequence<autoware_adapi_v1_msgs/CooperationPolicy>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'ResponseStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_adapi_v1_msgs', 'msg'], 'CooperationPolicy')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from autoware_adapi_v1_msgs.msg import ResponseStatus
        self.status = kwargs.get('status', ResponseStatus())
        self.policies = kwargs.get('policies', [])

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
        if self.policies != other.policies:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import ResponseStatus
            assert \
                isinstance(value, ResponseStatus), \
                "The 'status' field must be a sub message of type 'ResponseStatus'"
        self._status = value

    @property
    def policies(self):
        """Message field 'policies'."""
        return self._policies

    @policies.setter
    def policies(self, value):
        if __debug__:
            from autoware_adapi_v1_msgs.msg import CooperationPolicy
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, CooperationPolicy) for v in value) and
                 True), \
                "The 'policies' field must be a set or sequence and each value of type 'CooperationPolicy'"
        self._policies = value


class Metaclass_GetCooperationPolicies(type):
    """Metaclass of service 'GetCooperationPolicies'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_adapi_v1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_adapi_v1_msgs.srv.GetCooperationPolicies')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_cooperation_policies

            from autoware_adapi_v1_msgs.srv import _get_cooperation_policies
            if _get_cooperation_policies.Metaclass_GetCooperationPolicies_Request._TYPE_SUPPORT is None:
                _get_cooperation_policies.Metaclass_GetCooperationPolicies_Request.__import_type_support__()
            if _get_cooperation_policies.Metaclass_GetCooperationPolicies_Response._TYPE_SUPPORT is None:
                _get_cooperation_policies.Metaclass_GetCooperationPolicies_Response.__import_type_support__()


class GetCooperationPolicies(metaclass=Metaclass_GetCooperationPolicies):
    from autoware_adapi_v1_msgs.srv._get_cooperation_policies import GetCooperationPolicies_Request as Request
    from autoware_adapi_v1_msgs.srv._get_cooperation_policies import GetCooperationPolicies_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
