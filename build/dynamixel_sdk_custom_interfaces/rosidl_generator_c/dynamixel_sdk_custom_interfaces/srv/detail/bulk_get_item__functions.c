// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `item1`
// Member `item2`
// Member `item3`
// Member `item4`
#include "rosidl_runtime_c/string_functions.h"

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__init(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id1
  // id2
  // id3
  // id4
  // item1
  if (!rosidl_runtime_c__String__init(&msg->item1)) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(msg);
    return false;
  }
  // item2
  if (!rosidl_runtime_c__String__init(&msg->item2)) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(msg);
    return false;
  }
  // item3
  if (!rosidl_runtime_c__String__init(&msg->item3)) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(msg);
    return false;
  }
  // item4
  if (!rosidl_runtime_c__String__init(&msg->item4)) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(msg);
    return false;
  }
  return true;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * msg)
{
  if (!msg) {
    return;
  }
  // id1
  // id2
  // id3
  // id4
  // item1
  rosidl_runtime_c__String__fini(&msg->item1);
  // item2
  rosidl_runtime_c__String__fini(&msg->item2);
  // item3
  rosidl_runtime_c__String__fini(&msg->item3);
  // item4
  rosidl_runtime_c__String__fini(&msg->item4);
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__are_equal(const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * lhs, const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * rhs)
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
  // item1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item1), &(rhs->item1)))
  {
    return false;
  }
  // item2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item2), &(rhs->item2)))
  {
    return false;
  }
  // item3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item3), &(rhs->item3)))
  {
    return false;
  }
  // item4
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item4), &(rhs->item4)))
  {
    return false;
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__copy(
  const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * input,
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * output)
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
  // item1
  if (!rosidl_runtime_c__String__copy(
      &(input->item1), &(output->item1)))
  {
    return false;
  }
  // item2
  if (!rosidl_runtime_c__String__copy(
      &(input->item2), &(output->item2)))
  {
    return false;
  }
  // item3
  if (!rosidl_runtime_c__String__copy(
      &(input->item3), &(output->item3)))
  {
    return false;
  }
  // item4
  if (!rosidl_runtime_c__String__copy(
      &(input->item4), &(output->item4)))
  {
    return false;
  }
  return true;
}

dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request *
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * msg = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request));
  bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__destroy(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__init(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(&data[i - 1]);
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
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__fini(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * array)
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
      dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(&array->data[i]);
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

dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence *
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * array = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__destroy(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * lhs, const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * input,
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request * data =
      (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__init(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * msg)
{
  if (!msg) {
    return false;
  }
  // value1
  // value2
  // value3
  // value4
  return true;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * msg)
{
  if (!msg) {
    return;
  }
  // value1
  // value2
  // value3
  // value4
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__are_equal(const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * lhs, const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value1
  if (lhs->value1 != rhs->value1) {
    return false;
  }
  // value2
  if (lhs->value2 != rhs->value2) {
    return false;
  }
  // value3
  if (lhs->value3 != rhs->value3) {
    return false;
  }
  // value4
  if (lhs->value4 != rhs->value4) {
    return false;
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__copy(
  const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * input,
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // value1
  output->value1 = input->value1;
  // value2
  output->value2 = input->value2;
  // value3
  output->value3 = input->value3;
  // value4
  output->value4 = input->value4;
  return true;
}

dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response *
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * msg = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response));
  bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__destroy(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__init(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(&data[i - 1]);
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
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__fini(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * array)
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
      dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(&array->data[i]);
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

dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence *
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * array = (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__destroy(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * lhs, const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * input,
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response * data =
      (dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
