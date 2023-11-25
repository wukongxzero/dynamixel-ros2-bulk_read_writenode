// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__init(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * msg)
{
  if (!msg) {
    return false;
  }
  // id1
  // id2
  // id3
  // id4
  // position1
  // position2
  // position3
  // position4
  return true;
}

void
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__fini(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * msg)
{
  if (!msg) {
    return;
  }
  // id1
  // id2
  // id3
  // id4
  // position1
  // position2
  // position3
  // position4
}

bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__are_equal(const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * lhs, const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id1
  if (lhs->id1 != rhs->id1) {
    return false;
  }
  // id2
  if (lhs->id2 != rhs->id2) {
    return false;
  }
  // id3
  if (lhs->id3 != rhs->id3) {
    return false;
  }
  // id4
  if (lhs->id4 != rhs->id4) {
    return false;
  }
  // position1
  if (lhs->position1 != rhs->position1) {
    return false;
  }
  // position2
  if (lhs->position2 != rhs->position2) {
    return false;
  }
  // position3
  if (lhs->position3 != rhs->position3) {
    return false;
  }
  // position4
  if (lhs->position4 != rhs->position4) {
    return false;
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__copy(
  const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * input,
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // id1
  output->id1 = input->id1;
  // id2
  output->id2 = input->id2;
  // id3
  output->id3 = input->id3;
  // id4
  output->id4 = input->id4;
  // position1
  output->position1 = input->position1;
  // position2
  output->position2 = input->position2;
  // position3
  output->position3 = input->position3;
  // position4
  output->position4 = input->position4;
  return true;
}

dynamixel_sdk_custom_interfaces__msg__SyncSetPosition *
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * msg = (dynamixel_sdk_custom_interfaces__msg__SyncSetPosition *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition));
  bool success = dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__destroy(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__init(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__msg__SyncSetPosition *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__fini(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence *
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * array = (dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__destroy(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * lhs, const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * input,
  dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__msg__SyncSetPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__msg__SyncSetPosition * data =
      (dynamixel_sdk_custom_interfaces__msg__SyncSetPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__msg__SyncSetPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
