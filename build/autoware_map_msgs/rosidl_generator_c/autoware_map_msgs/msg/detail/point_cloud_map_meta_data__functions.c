// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `metadata_list`
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__functions.h"

bool
autoware_map_msgs__msg__PointCloudMapMetaData__init(autoware_map_msgs__msg__PointCloudMapMetaData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_map_msgs__msg__PointCloudMapMetaData__fini(msg);
    return false;
  }
  // metadata_list
  if (!autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__init(&msg->metadata_list, 0)) {
    autoware_map_msgs__msg__PointCloudMapMetaData__fini(msg);
    return false;
  }
  return true;
}

void
autoware_map_msgs__msg__PointCloudMapMetaData__fini(autoware_map_msgs__msg__PointCloudMapMetaData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // metadata_list
  autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__fini(&msg->metadata_list);
}

bool
autoware_map_msgs__msg__PointCloudMapMetaData__are_equal(const autoware_map_msgs__msg__PointCloudMapMetaData * lhs, const autoware_map_msgs__msg__PointCloudMapMetaData * rhs)
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
  // metadata_list
  if (!autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__are_equal(
      &(lhs->metadata_list), &(rhs->metadata_list)))
  {
    return false;
  }
  return true;
}

bool
autoware_map_msgs__msg__PointCloudMapMetaData__copy(
  const autoware_map_msgs__msg__PointCloudMapMetaData * input,
  autoware_map_msgs__msg__PointCloudMapMetaData * output)
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
  // metadata_list
  if (!autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__copy(
      &(input->metadata_list), &(output->metadata_list)))
  {
    return false;
  }
  return true;
}

autoware_map_msgs__msg__PointCloudMapMetaData *
autoware_map_msgs__msg__PointCloudMapMetaData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__PointCloudMapMetaData * msg = (autoware_map_msgs__msg__PointCloudMapMetaData *)allocator.allocate(sizeof(autoware_map_msgs__msg__PointCloudMapMetaData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_map_msgs__msg__PointCloudMapMetaData));
  bool success = autoware_map_msgs__msg__PointCloudMapMetaData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_map_msgs__msg__PointCloudMapMetaData__destroy(autoware_map_msgs__msg__PointCloudMapMetaData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_map_msgs__msg__PointCloudMapMetaData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__init(autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__PointCloudMapMetaData * data = NULL;

  if (size) {
    data = (autoware_map_msgs__msg__PointCloudMapMetaData *)allocator.zero_allocate(size, sizeof(autoware_map_msgs__msg__PointCloudMapMetaData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_map_msgs__msg__PointCloudMapMetaData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_map_msgs__msg__PointCloudMapMetaData__fini(&data[i - 1]);
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
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__fini(autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * array)
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
      autoware_map_msgs__msg__PointCloudMapMetaData__fini(&array->data[i]);
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

autoware_map_msgs__msg__PointCloudMapMetaData__Sequence *
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * array = (autoware_map_msgs__msg__PointCloudMapMetaData__Sequence *)allocator.allocate(sizeof(autoware_map_msgs__msg__PointCloudMapMetaData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__destroy(autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__are_equal(const autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * lhs, const autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_map_msgs__msg__PointCloudMapMetaData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_map_msgs__msg__PointCloudMapMetaData__Sequence__copy(
  const autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * input,
  autoware_map_msgs__msg__PointCloudMapMetaData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_map_msgs__msg__PointCloudMapMetaData);
    autoware_map_msgs__msg__PointCloudMapMetaData * data =
      (autoware_map_msgs__msg__PointCloudMapMetaData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_map_msgs__msg__PointCloudMapMetaData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_map_msgs__msg__PointCloudMapMetaData__fini(&data[i]);
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
    if (!autoware_map_msgs__msg__PointCloudMapMetaData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
