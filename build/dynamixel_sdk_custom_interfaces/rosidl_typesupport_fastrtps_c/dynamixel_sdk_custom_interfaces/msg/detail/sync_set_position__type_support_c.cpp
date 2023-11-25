// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__struct.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SyncSetPosition__ros_msg_type = dynamixel_sdk_custom_interfaces__msg__SyncSetPosition;

static bool _SyncSetPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SyncSetPosition__ros_msg_type * ros_message = static_cast<const _SyncSetPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: id1
  {
    cdr << ros_message->id1;
  }

  // Field name: id2
  {
    cdr << ros_message->id2;
  }

  // Field name: id3
  {
    cdr << ros_message->id3;
  }

  // Field name: id4
  {
    cdr << ros_message->id4;
  }

  // Field name: position1
  {
    cdr << ros_message->position1;
  }

  // Field name: position2
  {
    cdr << ros_message->position2;
  }

  // Field name: position3
  {
    cdr << ros_message->position3;
  }

  // Field name: position4
  {
    cdr << ros_message->position4;
  }

  return true;
}

static bool _SyncSetPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SyncSetPosition__ros_msg_type * ros_message = static_cast<_SyncSetPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: id1
  {
    cdr >> ros_message->id1;
  }

  // Field name: id2
  {
    cdr >> ros_message->id2;
  }

  // Field name: id3
  {
    cdr >> ros_message->id3;
  }

  // Field name: id4
  {
    cdr >> ros_message->id4;
  }

  // Field name: position1
  {
    cdr >> ros_message->position1;
  }

  // Field name: position2
  {
    cdr >> ros_message->position2;
  }

  // Field name: position3
  {
    cdr >> ros_message->position3;
  }

  // Field name: position4
  {
    cdr >> ros_message->position4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t get_serialized_size_dynamixel_sdk_custom_interfaces__msg__SyncSetPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SyncSetPosition__ros_msg_type * ros_message = static_cast<const _SyncSetPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id1
  {
    size_t item_size = sizeof(ros_message->id1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id2
  {
    size_t item_size = sizeof(ros_message->id2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id3
  {
    size_t item_size = sizeof(ros_message->id3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id4
  {
    size_t item_size = sizeof(ros_message->id4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position1
  {
    size_t item_size = sizeof(ros_message->position1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position2
  {
    size_t item_size = sizeof(ros_message->position2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position3
  {
    size_t item_size = sizeof(ros_message->position3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position4
  {
    size_t item_size = sizeof(ros_message->position4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SyncSetPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_sdk_custom_interfaces__msg__SyncSetPosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t max_serialized_size_dynamixel_sdk_custom_interfaces__msg__SyncSetPosition(
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

  // member: id1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: id2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: id3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: id4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SyncSetPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamixel_sdk_custom_interfaces__msg__SyncSetPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SyncSetPosition = {
  "dynamixel_sdk_custom_interfaces::msg",
  "SyncSetPosition",
  _SyncSetPosition__cdr_serialize,
  _SyncSetPosition__cdr_deserialize,
  _SyncSetPosition__get_serialized_size,
  _SyncSetPosition__max_serialized_size
};

static rosidl_message_type_support_t _SyncSetPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SyncSetPosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, msg, SyncSetPosition)() {
  return &_SyncSetPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
