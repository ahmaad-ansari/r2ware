// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/RerouteAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/RerouteAvailability in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__RerouteAvailability
{
  builtin_interfaces__msg__Time stamp;
  bool availability;
} tier4_planning_msgs__msg__RerouteAvailability;

// Struct for a sequence of tier4_planning_msgs__msg__RerouteAvailability.
typedef struct tier4_planning_msgs__msg__RerouteAvailability__Sequence
{
  tier4_planning_msgs__msg__RerouteAvailability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__RerouteAvailability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__REROUTE_AVAILABILITY__STRUCT_H_