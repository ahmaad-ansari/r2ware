// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaDataWithID.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__struct.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__functions.h"  // metadata
#include "rosidl_runtime_c/string.h"  // cell_id
#include "rosidl_runtime_c/string_functions.h"  // cell_id

// forward declare type support functions
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData)();


using _PointCloudMapCellMetaDataWithID__ros_msg_type = autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID;

static bool _PointCloudMapCellMetaDataWithID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointCloudMapCellMetaDataWithID__ros_msg_type * ros_message = static_cast<const _PointCloudMapCellMetaDataWithID__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_id
  {
    const rosidl_runtime_c__String * str = &ros_message->cell_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: metadata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->metadata, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PointCloudMapCellMetaDataWithID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointCloudMapCellMetaDataWithID__ros_msg_type * ros_message = static_cast<_PointCloudMapCellMetaDataWithID__ros_msg_type *>(untyped_ros_message);
  // Field name: cell_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cell_id.data) {
      rosidl_runtime_c__String__init(&ros_message->cell_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cell_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cell_id'\n");
      return false;
    }
  }

  // Field name: metadata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->metadata))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointCloudMapCellMetaDataWithID__ros_msg_type * ros_message = static_cast<const _PointCloudMapCellMetaDataWithID__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cell_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cell_id.size + 1);
  // field.name metadata

  current_alignment += get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
    &(ros_message->metadata), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PointCloudMapCellMetaDataWithID__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cell_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: metadata
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PointCloudMapCellMetaDataWithID__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PointCloudMapCellMetaDataWithID = {
  "autoware_map_msgs::msg",
  "PointCloudMapCellMetaDataWithID",
  _PointCloudMapCellMetaDataWithID__cdr_serialize,
  _PointCloudMapCellMetaDataWithID__cdr_deserialize,
  _PointCloudMapCellMetaDataWithID__get_serialized_size,
  _PointCloudMapCellMetaDataWithID__max_serialized_size
};

static rosidl_message_type_support_t _PointCloudMapCellMetaDataWithID__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointCloudMapCellMetaDataWithID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaDataWithID)() {
  return &_PointCloudMapCellMetaDataWithID__type_support;
}

#if defined(__cplusplus)
}
#endif
