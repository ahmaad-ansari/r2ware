// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__struct.h"


// Include directives for member types
// Member `geographic_pose`
#include "geographic_msgs/msg/geo_point_stamped.h"
// Member `geographic_pose`
#include "geographic_msgs/msg/detail/geo_point_stamped__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist_with_covariance_stamped.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__rosidl_typesupport_introspection_c.h"
// Member `accel`
#include "geometry_msgs/msg/accel_with_covariance_stamped.h"
// Member `accel`
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__VehicleKinematics__init(message_memory);
}

void VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__VehicleKinematics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array[4] = {
  {
    "geographic_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleKinematics, geographic_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleKinematics, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleKinematics, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleKinematics, accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "VehicleKinematics",  // message name
  4,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__VehicleKinematics),
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array,  // message members
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_type_support_handle = {
  0,
  &VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, VehicleKinematics)() {
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPointStamped)();
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovarianceStamped)();
  VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovarianceStamped)();
  if (!VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_type_support_handle.typesupport_identifier) {
    VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleKinematics__rosidl_typesupport_introspection_c__VehicleKinematics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif