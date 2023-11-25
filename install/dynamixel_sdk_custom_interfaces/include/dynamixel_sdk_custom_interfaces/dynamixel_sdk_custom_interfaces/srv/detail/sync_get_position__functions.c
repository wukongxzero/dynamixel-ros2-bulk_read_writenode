// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/SyncGetPosition.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__init(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id1
  // id2
  // id3
  // id4
  return true;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__fini(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // id1
  // id2
  // id3
  // id4
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__are_equal(const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * lhs, const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * rhs)
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
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__copy(
  const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * input,
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * output)
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
  return true;
}

dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request *
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * msg = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request));
  bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__destroy(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__init(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__fini(&data[i - 1]);
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
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__fini(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * array)
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
      dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__fini(&array->data[i]);
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

dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence *
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * array = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__destroy(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * lhs, const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * input,
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * data =
      (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__init(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position1
  // position2
  // position3
  // position4
  return true;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__fini(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // position1
  // position2
  // position3
  // position4
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__are_equal(const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * lhs, const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * rhs)
{
  if (!lhs || !rhs) {
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
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__copy(
  const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * input,
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
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

dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response *
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * msg = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response));
  bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__destroy(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__init(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__fini(&data[i - 1]);
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
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__fini(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * array)
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
      dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__fini(&array->data[i]);
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

dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence *
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * array = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__destroy(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * lhs, const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * input,
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * data =
      (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
