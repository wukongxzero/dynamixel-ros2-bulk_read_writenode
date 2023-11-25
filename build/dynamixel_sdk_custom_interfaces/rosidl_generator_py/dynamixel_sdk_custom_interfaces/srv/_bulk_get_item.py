# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BulkGetItem_Request(type):
    """Metaclass of message 'BulkGetItem_Request'."""

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
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.BulkGetItem_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bulk_get_item__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bulk_get_item__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bulk_get_item__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bulk_get_item__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bulk_get_item__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BulkGetItem_Request(metaclass=Metaclass_BulkGetItem_Request):
    """Message class 'BulkGetItem_Request'."""

    __slots__ = [
        '_id1',
        '_id2',
        '_id3',
        '_id4',
        '_item1',
        '_item2',
        '_item3',
        '_item4',
    ]

    _fields_and_field_types = {
        'id1': 'uint8',
        'id2': 'uint8',
        'id3': 'uint8',
        'id4': 'uint8',
        'item1': 'string',
        'item2': 'string',
        'item3': 'string',
        'item4': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id1 = kwargs.get('id1', int())
        self.id2 = kwargs.get('id2', int())
        self.id3 = kwargs.get('id3', int())
        self.id4 = kwargs.get('id4', int())
        self.item1 = kwargs.get('item1', str())
        self.item2 = kwargs.get('item2', str())
        self.item3 = kwargs.get('item3', str())
        self.item4 = kwargs.get('item4', str())

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
        if self.id1 != other.id1:
            return False
        if self.id2 != other.id2:
            return False
        if self.id3 != other.id3:
            return False
        if self.id4 != other.id4:
            return False
        if self.item1 != other.item1:
            return False
        if self.item2 != other.item2:
            return False
        if self.item3 != other.item3:
            return False
        if self.item4 != other.item4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def id1(self):
        """Message field 'id1'."""
        return self._id1

    @id1.setter
    def id1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id1' field must be an unsigned integer in [0, 255]"
        self._id1 = value

    @builtins.property
    def id2(self):
        """Message field 'id2'."""
        return self._id2

    @id2.setter
    def id2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id2' field must be an unsigned integer in [0, 255]"
        self._id2 = value

    @builtins.property
    def id3(self):
        """Message field 'id3'."""
        return self._id3

    @id3.setter
    def id3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id3' field must be an unsigned integer in [0, 255]"
        self._id3 = value

    @builtins.property
    def id4(self):
        """Message field 'id4'."""
        return self._id4

    @id4.setter
    def id4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id4' field must be an unsigned integer in [0, 255]"
        self._id4 = value

    @builtins.property
    def item1(self):
        """Message field 'item1'."""
        return self._item1

    @item1.setter
    def item1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item1' field must be of type 'str'"
        self._item1 = value

    @builtins.property
    def item2(self):
        """Message field 'item2'."""
        return self._item2

    @item2.setter
    def item2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item2' field must be of type 'str'"
        self._item2 = value

    @builtins.property
    def item3(self):
        """Message field 'item3'."""
        return self._item3

    @item3.setter
    def item3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item3' field must be of type 'str'"
        self._item3 = value

    @builtins.property
    def item4(self):
        """Message field 'item4'."""
        return self._item4

    @item4.setter
    def item4(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'item4' field must be of type 'str'"
        self._item4 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BulkGetItem_Response(type):
    """Metaclass of message 'BulkGetItem_Response'."""

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
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.BulkGetItem_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bulk_get_item__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bulk_get_item__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bulk_get_item__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bulk_get_item__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bulk_get_item__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BulkGetItem_Response(metaclass=Metaclass_BulkGetItem_Response):
    """Message class 'BulkGetItem_Response'."""

    __slots__ = [
        '_value1',
        '_value2',
        '_value3',
        '_value4',
    ]

    _fields_and_field_types = {
        'value1': 'int32',
        'value2': 'int32',
        'value3': 'int32',
        'value4': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value1 = kwargs.get('value1', int())
        self.value2 = kwargs.get('value2', int())
        self.value3 = kwargs.get('value3', int())
        self.value4 = kwargs.get('value4', int())

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
        if self.value1 != other.value1:
            return False
        if self.value2 != other.value2:
            return False
        if self.value3 != other.value3:
            return False
        if self.value4 != other.value4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value1(self):
        """Message field 'value1'."""
        return self._value1

    @value1.setter
    def value1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value1' field must be an integer in [-2147483648, 2147483647]"
        self._value1 = value

    @builtins.property
    def value2(self):
        """Message field 'value2'."""
        return self._value2

    @value2.setter
    def value2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value2' field must be an integer in [-2147483648, 2147483647]"
        self._value2 = value

    @builtins.property
    def value3(self):
        """Message field 'value3'."""
        return self._value3

    @value3.setter
    def value3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value3' field must be an integer in [-2147483648, 2147483647]"
        self._value3 = value

    @builtins.property
    def value4(self):
        """Message field 'value4'."""
        return self._value4

    @value4.setter
    def value4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value4' field must be an integer in [-2147483648, 2147483647]"
        self._value4 = value


class Metaclass_BulkGetItem(type):
    """Metaclass of service 'BulkGetItem'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.BulkGetItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bulk_get_item

            from dynamixel_sdk_custom_interfaces.srv import _bulk_get_item
            if _bulk_get_item.Metaclass_BulkGetItem_Request._TYPE_SUPPORT is None:
                _bulk_get_item.Metaclass_BulkGetItem_Request.__import_type_support__()
            if _bulk_get_item.Metaclass_BulkGetItem_Response._TYPE_SUPPORT is None:
                _bulk_get_item.Metaclass_BulkGetItem_Response.__import_type_support__()


class BulkGetItem(metaclass=Metaclass_BulkGetItem):
    from dynamixel_sdk_custom_interfaces.srv._bulk_get_item import BulkGetItem_Request as Request
    from dynamixel_sdk_custom_interfaces.srv._bulk_get_item import BulkGetItem_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
