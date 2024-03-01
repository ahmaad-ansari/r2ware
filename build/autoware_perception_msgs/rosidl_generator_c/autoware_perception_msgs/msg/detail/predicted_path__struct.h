// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'time_step'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/PredictedPath in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__PredictedPath
{
  geometry_msgs__msg__Pose__Sequence path;
  builtin_interfaces__msg__Duration time_step;
  float confidence;
} autoware_perception_msgs__msg__PredictedPath;

// Struct for a sequence of autoware_perception_msgs__msg__PredictedPath.
typedef struct autoware_perception_msgs__msg__PredictedPath__Sequence
{
  autoware_perception_msgs__msg__PredictedPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__PredictedPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
