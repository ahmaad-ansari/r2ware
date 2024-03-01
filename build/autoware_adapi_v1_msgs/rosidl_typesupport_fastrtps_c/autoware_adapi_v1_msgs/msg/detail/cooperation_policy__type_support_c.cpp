// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__functions.h"
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

#include "rosidl_runtime_c/string.h"  // behavior, sequence
#include "rosidl_runtime_c/string_functions.h"  // behavior, sequence

// forward declare type support functions


using _CooperationPolicy__ros_msg_type = autoware_adapi_v1_msgs__msg__CooperationPolicy;

static bool _CooperationPolicy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperationPolicy__ros_msg_type * ros_message = static_cast<const _CooperationPolicy__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior
  {
    const rosidl_runtime_c__String * str = &ros_message->behavior;
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

  // Field name: sequence
  {
    const rosidl_runtime_c__String * str = &ros_message->sequence;
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

  // Field name: policy
  {
    cdr << ros_message->policy;
  }

  return true;
}

static bool _CooperationPolicy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperationPolicy__ros_msg_type * ros_message = static_cast<_CooperationPolicy__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->behavior.data) {
      rosidl_runtime_c__String__init(&ros_message->behavior);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->behavior,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'behavior'\n");
      return false;
    }
  }

  // Field name: sequence
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sequence.data) {
      rosidl_runtime_c__String__init(&ros_message->sequence);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sequence,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sequence'\n");
      return false;
    }
  }

  // Field name: policy
  {
    cdr >> ros_message->policy;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperationPolicy__ros_msg_type * ros_message = static_cast<const _CooperationPolicy__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name behavior
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behavior.size + 1);
  // field.name sequence
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sequence.size + 1);
  // field.name policy
  {
    size_t item_size = sizeof(ros_message->policy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CooperationPolicy__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: behavior
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sequence
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: policy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperationPolicy__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationPolicy(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CooperationPolicy = {
  "autoware_adapi_v1_msgs::msg",
  "CooperationPolicy",
  _CooperationPolicy__cdr_serialize,
  _CooperationPolicy__cdr_deserialize,
  _CooperationPolicy__get_serialized_size,
  _CooperationPolicy__max_serialized_size
};

static rosidl_message_type_support_t _CooperationPolicy__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperationPolicy,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationPolicy)() {
  return &_CooperationPolicy__type_support;
}

#if defined(__cplusplus)
}
#endif
