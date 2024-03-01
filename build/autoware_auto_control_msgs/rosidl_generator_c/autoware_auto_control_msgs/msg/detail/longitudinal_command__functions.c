// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_control_msgs:msg/LongitudinalCommand.idl
// generated code does not contain a copyright notice
#include "autoware_auto_control_msgs/msg/detail/longitudinal_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_control_msgs__msg__LongitudinalCommand__init(autoware_auto_control_msgs__msg__LongitudinalCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_control_msgs__msg__LongitudinalCommand__fini(msg);
    return false;
  }
  // speed
  msg->speed = 0.0f;
  // acceleration
  msg->acceleration = 0.0f;
  // jerk
  msg->jerk = 0.0f;
  return true;
}

void
autoware_auto_control_msgs__msg__LongitudinalCommand__fini(autoware_auto_control_msgs__msg__LongitudinalCommand * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // speed
  // acceleration
  // jerk
}

bool
autoware_auto_control_msgs__msg__LongitudinalCommand__are_equal(const autoware_auto_control_msgs__msg__LongitudinalCommand * lhs, const autoware_auto_control_msgs__msg__LongitudinalCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // jerk
  if (lhs->jerk != rhs->jerk) {
    return false;
  }
  return true;
}

bool
autoware_auto_control_msgs__msg__LongitudinalCommand__copy(
  const autoware_auto_control_msgs__msg__LongitudinalCommand * input,
  autoware_auto_control_msgs__msg__LongitudinalCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // acceleration
  output->acceleration = input->acceleration;
  // jerk
  output->jerk = input->jerk;
  return true;
}

autoware_auto_control_msgs__msg__LongitudinalCommand *
autoware_auto_control_msgs__msg__LongitudinalCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_control_msgs__msg__LongitudinalCommand * msg = (autoware_auto_control_msgs__msg__LongitudinalCommand *)allocator.allocate(sizeof(autoware_auto_control_msgs__msg__LongitudinalCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_control_msgs__msg__LongitudinalCommand));
  bool success = autoware_auto_control_msgs__msg__LongitudinalCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_control_msgs__msg__LongitudinalCommand__destroy(autoware_auto_control_msgs__msg__LongitudinalCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_control_msgs__msg__LongitudinalCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__init(autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_control_msgs__msg__LongitudinalCommand * data = NULL;

  if (size) {
    data = (autoware_auto_control_msgs__msg__LongitudinalCommand *)allocator.zero_allocate(size, sizeof(autoware_auto_control_msgs__msg__LongitudinalCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_control_msgs__msg__LongitudinalCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_control_msgs__msg__LongitudinalCommand__fini(&data[i - 1]);
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
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__fini(autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * array)
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
      autoware_auto_control_msgs__msg__LongitudinalCommand__fini(&array->data[i]);
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

autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence *
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * array = (autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence *)allocator.allocate(sizeof(autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__destroy(autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__are_equal(const autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * lhs, const autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_control_msgs__msg__LongitudinalCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence__copy(
  const autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * input,
  autoware_auto_control_msgs__msg__LongitudinalCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_control_msgs__msg__LongitudinalCommand);
    autoware_auto_control_msgs__msg__LongitudinalCommand * data =
      (autoware_auto_control_msgs__msg__LongitudinalCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_control_msgs__msg__LongitudinalCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_control_msgs__msg__LongitudinalCommand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_control_msgs__msg__LongitudinalCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
