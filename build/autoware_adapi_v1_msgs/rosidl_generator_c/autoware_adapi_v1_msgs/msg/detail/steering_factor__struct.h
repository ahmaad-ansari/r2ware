// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactor.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__UNKNOWN = 0
};

/// Constant 'LEFT'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__LEFT = 1
};

/// Constant 'RIGHT'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__RIGHT = 2
};

/// Constant 'STRAIGHT'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__STRAIGHT = 3
};

/// Constant 'APPROACHING'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__APPROACHING = 1
};

/// Constant 'TURNING'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__TURNING = 3
};

/// Constant 'INTERSECTION'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__INTERSECTION = 1
};

/// Constant 'LANE_CHANGE'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__LANE_CHANGE = 2
};

/// Constant 'AVOIDANCE_PATH_CHANGE'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__AVOIDANCE_PATH_CHANGE = 3
};

/// Constant 'AVOIDANCE_PATH_RETURN'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__AVOIDANCE_PATH_RETURN = 4
};

/// Constant 'STATION'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__STATION = 5
};

/// Constant 'PULL_OUT'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__PULL_OUT = 6
};

/// Constant 'START_PLANNER'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__START_PLANNER = 6
};

/// Constant 'PULL_OVER'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__PULL_OVER = 7
};

/// Constant 'GOAL_PLANNER'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__GOAL_PLANNER = 7
};

/// Constant 'EMERGENCY_OPERATION'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__EMERGENCY_OPERATION = 8
};

/// Constant 'TRYING'.
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__TRYING = 2
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'behavior'
// Member 'sequence'
// Member 'detail'
#include "rosidl_runtime_c/string.h"
// Member 'cooperation'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.h"

// constants for array fields with an upper bound
// cooperation
enum
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__cooperation__MAX_SIZE = 1
};

// Struct defined in msg/SteeringFactor in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__SteeringFactor
{
  geometry_msgs__msg__Pose pose[2];
  float distance[2];
  uint16_t direction;
  uint16_t status;
  rosidl_runtime_c__String behavior;
  rosidl_runtime_c__String sequence;
  rosidl_runtime_c__String detail;
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence cooperation;
  uint16_t type;
} autoware_adapi_v1_msgs__msg__SteeringFactor;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__SteeringFactor.
typedef struct autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence
{
  autoware_adapi_v1_msgs__msg__SteeringFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR__STRUCT_H_
