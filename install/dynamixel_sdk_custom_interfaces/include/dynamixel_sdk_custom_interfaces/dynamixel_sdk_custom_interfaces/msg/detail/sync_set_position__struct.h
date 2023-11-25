// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__STRUCT_H_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SyncSetPosition in the package dynamixel_sdk_custom_interfaces.
typedef struct dynamixel_sdk_custom_interfaces__msg__SyncSetPosition
{
  uint8_t id1;
  uint8_t id2;
  uint8_t id3;
  uint8_t id4;
  int32_t position1;
  int32_t position2;
  int32_t position3;
  int32_t position4;
} dynamixel_sdk_custom_interfaces__msg__SyncSetPosition;

// Struct for a sequence of dynamixel_sdk_custom_interfaces__msg__SyncSetPosition.
typedef struct dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence
{
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__STRUCT_H_
