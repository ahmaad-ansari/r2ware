// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_vehicle_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice
#include "autoware_vehicle_msgs/msg/detail/gear_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_vehicle_msgs__msg__GearReport__init(autoware_vehicle_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_vehicle_msgs__msg__GearReport__fini(msg);
    return false;
  }
  // report
  return true;
}

void
autoware_vehicle_msgs__msg__GearReport__fini(autoware_vehicle_msgs__msg__GearReport * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // report
}

bool
autoware_vehicle_msgs__msg__GearReport__are_equal(const autoware_vehicle_msgs__msg__GearReport * lhs, const autoware_vehicle_msgs__msg__GearReport * rhs)
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
  // report
  if (lhs->report != rhs->report) {
    return false;
  }
  return true;
}

bool
autoware_vehicle_msgs__msg__GearReport__copy(
  const autoware_vehicle_msgs__msg__GearReport * input,
  autoware_vehicle_msgs__msg__GearReport * output)
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
  // report
  output->report = input->report;
  return true;
}

autoware_vehicle_msgs__msg__GearReport *
autoware_vehicle_msgs__msg__GearReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__GearReport * msg = (autoware_vehicle_msgs__msg__GearReport *)allocator.allocate(sizeof(autoware_vehicle_msgs__msg__GearReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_vehicle_msgs__msg__GearReport));
  bool success = autoware_vehicle_msgs__msg__GearReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_vehicle_msgs__msg__GearReport__destroy(autoware_vehicle_msgs__msg__GearReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_vehicle_msgs__msg__GearReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_vehicle_msgs__msg__GearReport__Sequence__init(autoware_vehicle_msgs__msg__GearReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__GearReport * data = NULL;

  if (size) {
    data = (autoware_vehicle_msgs__msg__GearReport *)allocator.zero_allocate(size, sizeof(autoware_vehicle_msgs__msg__GearReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_vehicle_msgs__msg__GearReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_vehicle_msgs__msg__GearReport__fini(&data[i - 1]);
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
autoware_vehicle_msgs__msg__GearReport__Sequence__fini(autoware_vehicle_msgs__msg__GearReport__Sequence * array)
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
      autoware_vehicle_msgs__msg__GearReport__fini(&array->data[i]);
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

autoware_vehicle_msgs__msg__GearReport__Sequence *
autoware_vehicle_msgs__msg__GearReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__GearReport__Sequence * array = (autoware_vehicle_msgs__msg__GearReport__Sequence *)allocator.allocate(sizeof(autoware_vehicle_msgs__msg__GearReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_vehicle_msgs__msg__GearReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_vehicle_msgs__msg__GearReport__Sequence__destroy(autoware_vehicle_msgs__msg__GearReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_vehicle_msgs__msg__GearReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_vehicle_msgs__msg__GearReport__Sequence__are_equal(const autoware_vehicle_msgs__msg__GearReport__Sequence * lhs, const autoware_vehicle_msgs__msg__GearReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_vehicle_msgs__msg__GearReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_vehicle_msgs__msg__GearReport__Sequence__copy(
  const autoware_vehicle_msgs__msg__GearReport__Sequence * input,
  autoware_vehicle_msgs__msg__GearReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_vehicle_msgs__msg__GearReport);
    autoware_vehicle_msgs__msg__GearReport * data =
      (autoware_vehicle_msgs__msg__GearReport *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_vehicle_msgs__msg__GearReport__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_vehicle_msgs__msg__GearReport__fini(&data[i]);
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
    if (!autoware_vehicle_msgs__msg__GearReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}