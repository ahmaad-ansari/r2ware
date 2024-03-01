// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_control_msgs:srv/SetStop.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_H_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_source'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetStop in the package tier4_control_msgs.
typedef struct tier4_control_msgs__srv__SetStop_Request
{
  bool stop;
  rosidl_runtime_c__String request_source;
} tier4_control_msgs__srv__SetStop_Request;

// Struct for a sequence of tier4_control_msgs__srv__SetStop_Request.
typedef struct tier4_control_msgs__srv__SetStop_Request__Sequence
{
  tier4_control_msgs__srv__SetStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__srv__SetStop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.h"

// Struct defined in srv/SetStop in the package tier4_control_msgs.
typedef struct tier4_control_msgs__srv__SetStop_Response
{
  autoware_common_msgs__msg__ResponseStatus status;
} tier4_control_msgs__srv__SetStop_Response;

// Struct for a sequence of tier4_control_msgs__srv__SetStop_Response.
typedef struct tier4_control_msgs__srv__SetStop_Response__Sequence
{
  tier4_control_msgs__srv__SetStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__srv__SetStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__SET_STOP__STRUCT_H_