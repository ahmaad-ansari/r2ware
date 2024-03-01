// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice
#include "autoware_system_msgs/msg/detail/hazard_status_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `status`
#include "autoware_system_msgs/msg/detail/hazard_status__functions.h"

bool
autoware_system_msgs__msg__HazardStatusStamped__init(autoware_system_msgs__msg__HazardStatusStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_system_msgs__msg__HazardStatusStamped__fini(msg);
    return false;
  }
  // status
  if (!autoware_system_msgs__msg__HazardStatus__init(&msg->status)) {
    autoware_system_msgs__msg__HazardStatusStamped__fini(msg);
    return false;
  }
  return true;
}

void
autoware_system_msgs__msg__HazardStatusStamped__fini(autoware_system_msgs__msg__HazardStatusStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // status
  autoware_system_msgs__msg__HazardStatus__fini(&msg->status);
}

bool
autoware_system_msgs__msg__HazardStatusStamped__are_equal(const autoware_system_msgs__msg__HazardStatusStamped * lhs, const autoware_system_msgs__msg__HazardStatusStamped * rhs)
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
  // status
  if (!autoware_system_msgs__msg__HazardStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
autoware_system_msgs__msg__HazardStatusStamped__copy(
  const autoware_system_msgs__msg__HazardStatusStamped * input,
  autoware_system_msgs__msg__HazardStatusStamped * output)
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
  // status
  if (!autoware_system_msgs__msg__HazardStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

autoware_system_msgs__msg__HazardStatusStamped *
autoware_system_msgs__msg__HazardStatusStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_system_msgs__msg__HazardStatusStamped * msg = (autoware_system_msgs__msg__HazardStatusStamped *)allocator.allocate(sizeof(autoware_system_msgs__msg__HazardStatusStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_system_msgs__msg__HazardStatusStamped));
  bool success = autoware_system_msgs__msg__HazardStatusStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_system_msgs__msg__HazardStatusStamped__destroy(autoware_system_msgs__msg__HazardStatusStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_system_msgs__msg__HazardStatusStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_system_msgs__msg__HazardStatusStamped__Sequence__init(autoware_system_msgs__msg__HazardStatusStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_system_msgs__msg__HazardStatusStamped * data = NULL;

  if (size) {
    data = (autoware_system_msgs__msg__HazardStatusStamped *)allocator.zero_allocate(size, sizeof(autoware_system_msgs__msg__HazardStatusStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_system_msgs__msg__HazardStatusStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_system_msgs__msg__HazardStatusStamped__fini(&data[i - 1]);
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
autoware_system_msgs__msg__HazardStatusStamped__Sequence__fini(autoware_system_msgs__msg__HazardStatusStamped__Sequence * array)
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
      autoware_system_msgs__msg__HazardStatusStamped__fini(&array->data[i]);
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

autoware_system_msgs__msg__HazardStatusStamped__Sequence *
autoware_system_msgs__msg__HazardStatusStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_system_msgs__msg__HazardStatusStamped__Sequence * array = (autoware_system_msgs__msg__HazardStatusStamped__Sequence *)allocator.allocate(sizeof(autoware_system_msgs__msg__HazardStatusStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_system_msgs__msg__HazardStatusStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_system_msgs__msg__HazardStatusStamped__Sequence__destroy(autoware_system_msgs__msg__HazardStatusStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_system_msgs__msg__HazardStatusStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_system_msgs__msg__HazardStatusStamped__Sequence__are_equal(const autoware_system_msgs__msg__HazardStatusStamped__Sequence * lhs, const autoware_system_msgs__msg__HazardStatusStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_system_msgs__msg__HazardStatusStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_system_msgs__msg__HazardStatusStamped__Sequence__copy(
  const autoware_system_msgs__msg__HazardStatusStamped__Sequence * input,
  autoware_system_msgs__msg__HazardStatusStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_system_msgs__msg__HazardStatusStamped);
    autoware_system_msgs__msg__HazardStatusStamped * data =
      (autoware_system_msgs__msg__HazardStatusStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_system_msgs__msg__HazardStatusStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_system_msgs__msg__HazardStatusStamped__fini(&data[i]);
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
    if (!autoware_system_msgs__msg__HazardStatusStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}