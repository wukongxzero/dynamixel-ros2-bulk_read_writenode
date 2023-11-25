// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
cdr_serialize(
  const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id1
  cdr << ros_message.id1;
  // Member: id2
  cdr << ros_message.id2;
  // Member: id3
  cdr << ros_message.id3;
  // Member: id4
  cdr << ros_message.id4;
  // Member: position1
  cdr << ros_message.position1;
  // Member: position2
  cdr << ros_message.position2;
  // Member: position3
  cdr << ros_message.position3;
  // Member: position4
  cdr << ros_message.position4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & ros_message)
{
  // Member: id1
  cdr >> ros_message.id1;

  // Member: id2
  cdr >> ros_message.id2;

  // Member: id3
  cdr >> ros_message.id3;

  // Member: id4
  cdr >> ros_message.id4;

  // Member: position1
  cdr >> ros_message.position1;

  // Member: position2
  cdr >> ros_message.position2;

  // Member: position3
  cdr >> ros_message.position3;

  // Member: position4
  cdr >> ros_message.position4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
get_serialized_size(
  const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id1
  {
    size_t item_size = sizeof(ros_message.id1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id2
  {
    size_t item_size = sizeof(ros_message.id2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id3
  {
    size_t item_size = sizeof(ros_message.id3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id4
  {
    size_t item_size = sizeof(ros_message.id4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position1
  {
    size_t item_size = sizeof(ros_message.position1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position2
  {
    size_t item_size = sizeof(ros_message.position2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position3
  {
    size_t item_size = sizeof(ros_message.position3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position4
  {
    size_t item_size = sizeof(ros_message.position4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
max_serialized_size_SyncSetPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: id1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: id2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: id3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: id4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SyncSetPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SyncSetPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SyncSetPosition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SyncSetPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SyncSetPosition(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SyncSetPosition__callbacks = {
  "dynamixel_sdk_custom_interfaces::msg",
  "SyncSetPosition",
  _SyncSetPosition__cdr_serialize,
  _SyncSetPosition__cdr_deserialize,
  _SyncSetPosition__get_serialized_size,
  _SyncSetPosition__max_serialized_size
};

static rosidl_message_type_support_t _SyncSetPosition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SyncSetPosition__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamixel_sdk_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>()
{
  return &dynamixel_sdk_custom_interfaces::msg::typesupport_fastrtps_cpp::_SyncSetPosition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, msg, SyncSetPosition)() {
  return &dynamixel_sdk_custom_interfaces::msg::typesupport_fastrtps_cpp::_SyncSetPosition__handle;
}

#ifdef __cplusplus
}
#endif
