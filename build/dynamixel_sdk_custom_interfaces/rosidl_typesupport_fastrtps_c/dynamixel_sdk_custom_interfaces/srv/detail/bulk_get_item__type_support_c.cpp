// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__functions.h"
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

#include "rosidl_runtime_c/string.h"  // item1, item2, item3, item4
#include "rosidl_runtime_c/string_functions.h"  // item1, item2, item3, item4

// forward declare type support functions


using _BulkGetItem_Request__ros_msg_type = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request;

static bool _BulkGetItem_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BulkGetItem_Request__ros_msg_type * ros_message = static_cast<const _BulkGetItem_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: item1
  {
    const rosidl_runtime_c__String * str = &ros_message->item1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item2
  {
    const rosidl_runtime_c__String * str = &ros_message->item2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item3
  {
    const rosidl_runtime_c__String * str = &ros_message->item3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item4
  {
    const rosidl_runtime_c__String * str = &ros_message->item4;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _BulkGetItem_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BulkGetItem_Request__ros_msg_type * ros_message = static_cast<_BulkGetItem_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: item1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item1.data) {
      rosidl_runtime_c__String__init(&ros_message->item1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item1'\n");
      return false;
    }
  }

  // Field name: item2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item2.data) {
      rosidl_runtime_c__String__init(&ros_message->item2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item2'\n");
      return false;
    }
  }

  // Field name: item3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item3.data) {
      rosidl_runtime_c__String__init(&ros_message->item3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item3'\n");
      return false;
    }
  }

  // Field name: item4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item4.data) {
      rosidl_runtime_c__String__init(&ros_message->item4);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item4'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t get_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BulkGetItem_Request__ros_msg_type * ros_message = static_cast<const _BulkGetItem_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name item1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item1.size + 1);
  // field.name item2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item2.size + 1);
  // field.name item3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item3.size + 1);
  // field.name item4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item4.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BulkGetItem_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t max_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request(
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
  // member: item1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: item2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: item3
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: item4
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BulkGetItem_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BulkGetItem_Request = {
  "dynamixel_sdk_custom_interfaces::srv",
  "BulkGetItem_Request",
  _BulkGetItem_Request__cdr_serialize,
  _BulkGetItem_Request__cdr_deserialize,
  _BulkGetItem_Request__get_serialized_size,
  _BulkGetItem_Request__max_serialized_size
};

static rosidl_message_type_support_t _BulkGetItem_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BulkGetItem_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Request)() {
  return &_BulkGetItem_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _BulkGetItem_Response__ros_msg_type = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response;

static bool _BulkGetItem_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BulkGetItem_Response__ros_msg_type * ros_message = static_cast<const _BulkGetItem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value1
  {
    cdr << ros_message->value1;
  }

  // Field name: value2
  {
    cdr << ros_message->value2;
  }

  // Field name: value3
  {
    cdr << ros_message->value3;
  }

  // Field name: value4
  {
    cdr << ros_message->value4;
  }

  return true;
}

static bool _BulkGetItem_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BulkGetItem_Response__ros_msg_type * ros_message = static_cast<_BulkGetItem_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value1
  {
    cdr >> ros_message->value1;
  }

  // Field name: value2
  {
    cdr >> ros_message->value2;
  }

  // Field name: value3
  {
    cdr >> ros_message->value3;
  }

  // Field name: value4
  {
    cdr >> ros_message->value4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t get_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BulkGetItem_Response__ros_msg_type * ros_message = static_cast<const _BulkGetItem_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name value1
  {
    size_t item_size = sizeof(ros_message->value1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value2
  {
    size_t item_size = sizeof(ros_message->value2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value3
  {
    size_t item_size = sizeof(ros_message->value3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value4
  {
    size_t item_size = sizeof(ros_message->value4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BulkGetItem_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dynamixel_sdk_custom_interfaces
size_t max_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response(
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

  // member: value1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BulkGetItem_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BulkGetItem_Response = {
  "dynamixel_sdk_custom_interfaces::srv",
  "BulkGetItem_Response",
  _BulkGetItem_Response__cdr_serialize,
  _BulkGetItem_Response__cdr_deserialize,
  _BulkGetItem_Response__get_serialized_size,
  _BulkGetItem_Response__max_serialized_size
};

static rosidl_message_type_support_t _BulkGetItem_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BulkGetItem_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Response)() {
  return &_BulkGetItem_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dynamixel_sdk_custom_interfaces/srv/bulk_get_item.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BulkGetItem__callbacks = {
  "dynamixel_sdk_custom_interfaces::srv",
  "BulkGetItem",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Response)(),
};

static rosidl_service_type_support_t BulkGetItem__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BulkGetItem__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem)() {
  return &BulkGetItem__handle;
}

#if defined(__cplusplus)
}
#endif
