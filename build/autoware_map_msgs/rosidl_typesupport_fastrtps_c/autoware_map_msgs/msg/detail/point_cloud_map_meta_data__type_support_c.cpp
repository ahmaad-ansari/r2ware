// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__struct.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__functions.h"
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

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__functions.h"  // metadata_list
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaDataWithID)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PointCloudMapMetaData__ros_msg_type = autoware_map_msgs__msg__PointCloudMapMetaData;

static bool _PointCloudMapMetaData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointCloudMapMetaData__ros_msg_type * ros_message = static_cast<const _PointCloudMapMetaData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: metadata_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaDataWithID
      )()->data);
    size_t size = ros_message->metadata_list.size;
    auto array_ptr = ros_message->metadata_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _PointCloudMapMetaData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointCloudMapMetaData__ros_msg_type * ros_message = static_cast<_PointCloudMapMetaData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: metadata_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapCellMetaDataWithID
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->metadata_list.data) {
      autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__fini(&ros_message->metadata_list);
    }
    if (!autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__init(&ros_message->metadata_list, size)) {
      return "failed to create array for field 'metadata_list'";
    }
    auto array_ptr = ros_message->metadata_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__msg__PointCloudMapMetaData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointCloudMapMetaData__ros_msg_type * ros_message = static_cast<const _PointCloudMapMetaData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name metadata_list
  {
    size_t array_size = ros_message->metadata_list.size;
    auto array_ptr = ros_message->metadata_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PointCloudMapMetaData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__msg__PointCloudMapMetaData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__msg__PointCloudMapMetaData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: metadata_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PointCloudMapMetaData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_map_msgs__msg__PointCloudMapMetaData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PointCloudMapMetaData = {
  "autoware_map_msgs::msg",
  "PointCloudMapMetaData",
  _PointCloudMapMetaData__cdr_serialize,
  _PointCloudMapMetaData__cdr_deserialize,
  _PointCloudMapMetaData__get_serialized_size,
  _PointCloudMapMetaData__max_serialized_size
};

static rosidl_message_type_support_t _PointCloudMapMetaData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointCloudMapMetaData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, PointCloudMapMetaData)() {
  return &_PointCloudMapMetaData__type_support;
}

#if defined(__cplusplus)
}
#endif
