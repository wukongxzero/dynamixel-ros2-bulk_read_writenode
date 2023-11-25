// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item1'
// Member 'item2'
// Member 'item3'
// Member 'item4'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BulkGetItem in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request
{
  uint8_t id1;
  uint8_t id2;
  uint8_t id3;
  uint8_t id4;
  rosidl_runtime_c__String item1;
  rosidl_runtime_c__String item2;
  rosidl_runtime_c__String item3;
  rosidl_runtime_c__String item4;
} dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request.
typedef struct dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/BulkGetItem in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response
{
  int32_t value1;
  int32_t value2;
  int32_t value3;
  int32_t value4;
} dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response.
typedef struct dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence
{
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__STRUCT_H_
