// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_external_api_msgs:msg/Heartbeat.idl
// generated code does not contain a copyright notice
#include "tier4_external_api_msgs/msg/detail/heartbeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tier4_external_api_msgs__msg__Heartbeat__init(tier4_external_api_msgs__msg__Heartbeat * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_external_api_msgs__msg__Heartbeat__fini(msg);
    return false;
  }
  return true;
}

void
tier4_external_api_msgs__msg__Heartbeat__fini(tier4_external_api_msgs__msg__Heartbeat * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tier4_external_api_msgs__msg__Heartbeat__are_equal(const tier4_external_api_msgs__msg__Heartbeat * lhs, const tier4_external_api_msgs__msg__Heartbeat * rhs)
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
  return true;
}

bool
tier4_external_api_msgs__msg__Heartbeat__copy(
  const tier4_external_api_msgs__msg__Heartbeat * input,
  tier4_external_api_msgs__msg__Heartbeat * output)
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
  return true;
}

tier4_external_api_msgs__msg__Heartbeat *
tier4_external_api_msgs__msg__Heartbeat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Heartbeat * msg = (tier4_external_api_msgs__msg__Heartbeat *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__Heartbeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_external_api_msgs__msg__Heartbeat));
  bool success = tier4_external_api_msgs__msg__Heartbeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_external_api_msgs__msg__Heartbeat__destroy(tier4_external_api_msgs__msg__Heartbeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_external_api_msgs__msg__Heartbeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_external_api_msgs__msg__Heartbeat__Sequence__init(tier4_external_api_msgs__msg__Heartbeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Heartbeat * data = NULL;

  if (size) {
    data = (tier4_external_api_msgs__msg__Heartbeat *)allocator.zero_allocate(size, sizeof(tier4_external_api_msgs__msg__Heartbeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_external_api_msgs__msg__Heartbeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_external_api_msgs__msg__Heartbeat__fini(&data[i - 1]);
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
tier4_external_api_msgs__msg__Heartbeat__Sequence__fini(tier4_external_api_msgs__msg__Heartbeat__Sequence * array)
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
      tier4_external_api_msgs__msg__Heartbeat__fini(&array->data[i]);
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

tier4_external_api_msgs__msg__Heartbeat__Sequence *
tier4_external_api_msgs__msg__Heartbeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_external_api_msgs__msg__Heartbeat__Sequence * array = (tier4_external_api_msgs__msg__Heartbeat__Sequence *)allocator.allocate(sizeof(tier4_external_api_msgs__msg__Heartbeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_external_api_msgs__msg__Heartbeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_external_api_msgs__msg__Heartbeat__Sequence__destroy(tier4_external_api_msgs__msg__Heartbeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_external_api_msgs__msg__Heartbeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_external_api_msgs__msg__Heartbeat__Sequence__are_equal(const tier4_external_api_msgs__msg__Heartbeat__Sequence * lhs, const tier4_external_api_msgs__msg__Heartbeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_external_api_msgs__msg__Heartbeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_external_api_msgs__msg__Heartbeat__Sequence__copy(
  const tier4_external_api_msgs__msg__Heartbeat__Sequence * input,
  tier4_external_api_msgs__msg__Heartbeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_external_api_msgs__msg__Heartbeat);
    tier4_external_api_msgs__msg__Heartbeat * data =
      (tier4_external_api_msgs__msg__Heartbeat *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_external_api_msgs__msg__Heartbeat__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_external_api_msgs__msg__Heartbeat__fini(&data[i]);
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
    if (!tier4_external_api_msgs__msg__Heartbeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}