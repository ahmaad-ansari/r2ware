// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:srv/SetCooperationPolicies.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_policies__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `policies`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__functions.h"

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__init(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * msg)
{
  if (!msg) {
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__init(&msg->policies, 0)) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * msg)
{
  if (!msg) {
    return;
  }
  // policies
  autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__fini(&msg->policies);
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__are_equal(const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * lhs, const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__are_equal(
      &(lhs->policies), &(rhs->policies)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__copy(
  const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * input,
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // policies
  if (!autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence__copy(
      &(input->policies), &(output->policies)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request *
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * msg = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request));
  bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__destroy(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__init(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__fini(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence *
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * array = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request);
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * data =
      (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__init(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__init(&msg->status)) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&msg->status);
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__are_equal(const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * lhs, const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__copy(
  const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * input,
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response *
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * msg = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response));
  bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__destroy(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__init(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__fini(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence *
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * array = (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response);
    autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * data =
      (autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__fini(&data[i]);
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
    if (!autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}