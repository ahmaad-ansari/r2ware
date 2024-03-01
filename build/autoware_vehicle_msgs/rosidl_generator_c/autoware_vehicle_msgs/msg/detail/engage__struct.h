// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_vehicle_msgs:msg/Engage.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_H_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_H_

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

// Struct defined in msg/Engage in the package autoware_vehicle_msgs.
typedef struct autoware_vehicle_msgs__msg__Engage
{
  builtin_interfaces__msg__Time stamp;
  bool engage;
} autoware_vehicle_msgs__msg__Engage;

// Struct for a sequence of autoware_vehicle_msgs__msg__Engage.
typedef struct autoware_vehicle_msgs__msg__Engage__Sequence
{
  autoware_vehicle_msgs__msg__Engage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_vehicle_msgs__msg__Engage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_H_