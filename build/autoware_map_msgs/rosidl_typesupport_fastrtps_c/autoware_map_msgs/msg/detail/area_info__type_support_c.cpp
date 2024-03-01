// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice
#include "autoware_map_msgs/msg/detail/area_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_map_msgs/msg/detail/area_info__struct.h"
#include "autoware_map_msgs/msg/detail/area_info__functions.h"
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


// forward declare type support functions


using _AreaInfo__ros_msg_type = autoware_map_msgs__msg__AreaInfo;

static bool _AreaInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AreaInfo__ros_msg_type * ros_message = static_cast<const _AreaInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: center_x
  {
    cdr << ros_message->center_x;
  }

  // Field name: center_y
  {
    cdr << ros_message->center_y;
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  return true;
}

static bool _AreaInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AreaInfo__ros_msg_type * ros_message = static_cast<_AreaInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: center_x
  {
    cdr >> ros_message->center_x;
  }

  // Field name: center_y
  {
    cdr >> ros_message->center_y;
  }

  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t get_serialized_size_autoware_map_msgs__msg__AreaInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AreaInfo__ros_msg_type * ros_message = static_cast<const _AreaInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name center_x
  {
    size_t item_size = sizeof(ros_message->center_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_y
  {
    size_t item_size = sizeof(ros_message->center_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AreaInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_map_msgs__msg__AreaInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_map_msgs
size_t max_serialized_size_autoware_map_msgs__msg__AreaInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: center_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: center_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AreaInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_map_msgs__msg__AreaInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AreaInfo = {
  "autoware_map_msgs::msg",
  "AreaInfo",
  _AreaInfo__cdr_serialize,
  _AreaInfo__cdr_deserialize,
  _AreaInfo__get_serialized_size,
  _AreaInfo__max_serialized_size
};

static rosidl_message_type_support_t _AreaInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AreaInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_map_msgs, msg, AreaInfo)() {
  return &_AreaInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
