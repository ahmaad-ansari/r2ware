// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_planning_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "autoware_planning_msgs/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `points`
#include "autoware_planning_msgs/msg/detail/trajectory_point__functions.h"

bool
autoware_planning_msgs__msg__Trajectory__init(autoware_planning_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_planning_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__init(&msg->points, 0)) {
    autoware_planning_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
autoware_planning_msgs__msg__Trajectory__fini(autoware_planning_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  autoware_planning_msgs__msg__TrajectoryPoint__Sequence__fini(&msg->points);
}

bool
autoware_planning_msgs__msg__Trajectory__are_equal(const autoware_planning_msgs__msg__Trajectory * lhs, const autoware_planning_msgs__msg__Trajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
autoware_planning_msgs__msg__Trajectory__copy(
  const autoware_planning_msgs__msg__Trajectory * input,
  autoware_planning_msgs__msg__Trajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // points
  if (!autoware_planning_msgs__msg__TrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

autoware_planning_msgs__msg__Trajectory *
autoware_planning_msgs__msg__Trajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__Trajectory * msg = (autoware_planning_msgs__msg__Trajectory *)allocator.allocate(sizeof(autoware_planning_msgs__msg__Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_planning_msgs__msg__Trajectory));
  bool success = autoware_planning_msgs__msg__Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_planning_msgs__msg__Trajectory__destroy(autoware_planning_msgs__msg__Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_planning_msgs__msg__Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_planning_msgs__msg__Trajectory__Sequence__init(autoware_planning_msgs__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__Trajectory * data = NULL;

  if (size) {
    data = (autoware_planning_msgs__msg__Trajectory *)allocator.zero_allocate(size, sizeof(autoware_planning_msgs__msg__Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_planning_msgs__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_planning_msgs__msg__Trajectory__fini(&data[i - 1]);
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
autoware_planning_msgs__msg__Trajectory__Sequence__fini(autoware_planning_msgs__msg__Trajectory__Sequence * array)
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
      autoware_planning_msgs__msg__Trajectory__fini(&array->data[i]);
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

autoware_planning_msgs__msg__Trajectory__Sequence *
autoware_planning_msgs__msg__Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_planning_msgs__msg__Trajectory__Sequence * array = (autoware_planning_msgs__msg__Trajectory__Sequence *)allocator.allocate(sizeof(autoware_planning_msgs__msg__Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_planning_msgs__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_planning_msgs__msg__Trajectory__Sequence__destroy(autoware_planning_msgs__msg__Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_planning_msgs__msg__Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_planning_msgs__msg__Trajectory__Sequence__are_equal(const autoware_planning_msgs__msg__Trajectory__Sequence * lhs, const autoware_planning_msgs__msg__Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_planning_msgs__msg__Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_planning_msgs__msg__Trajectory__Sequence__copy(
  const autoware_planning_msgs__msg__Trajectory__Sequence * input,
  autoware_planning_msgs__msg__Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_planning_msgs__msg__Trajectory);
    autoware_planning_msgs__msg__Trajectory * data =
      (autoware_planning_msgs__msg__Trajectory *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_planning_msgs__msg__Trajectory__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_planning_msgs__msg__Trajectory__fini(&data[i]);
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
    if (!autoware_planning_msgs__msg__Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
