// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_vehicle_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_vehicle_msgs/msg/detail/vehicle_odometry__rosidl_typesupport_introspection_c.h"
#include "autoware_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_vehicle_msgs/msg/detail/vehicle_odometry__functions.h"
#include "autoware_vehicle_msgs/msg/detail/vehicle_odometry__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_vehicle_msgs__msg__VehicleOdometry__init(message_memory);
}

void VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_fini_function(void * message_memory)
{
  autoware_vehicle_msgs__msg__VehicleOdometry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__VehicleOdometry, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__VehicleOdometry, velocity_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_wheel_angle_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__VehicleOdometry, front_wheel_angle_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_wheel_angle_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__VehicleOdometry, rear_wheel_angle_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_members = {
  "autoware_vehicle_msgs__msg",  // message namespace
  "VehicleOdometry",  // message name
  4,  // number of fields
  sizeof(autoware_vehicle_msgs__msg__VehicleOdometry),
  VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_member_array,  // message members
  VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle = {
  0,
  &VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_vehicle_msgs, msg, VehicleOdometry)() {
  VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle.typesupport_identifier) {
    VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
