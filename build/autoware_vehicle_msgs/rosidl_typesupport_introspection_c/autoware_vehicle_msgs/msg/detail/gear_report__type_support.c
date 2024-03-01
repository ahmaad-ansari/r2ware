// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_vehicle_msgs:msg/GearReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_vehicle_msgs/msg/detail/gear_report__rosidl_typesupport_introspection_c.h"
#include "autoware_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_vehicle_msgs/msg/detail/gear_report__functions.h"
#include "autoware_vehicle_msgs/msg/detail/gear_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GearReport__rosidl_typesupport_introspection_c__GearReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_vehicle_msgs__msg__GearReport__init(message_memory);
}

void GearReport__rosidl_typesupport_introspection_c__GearReport_fini_function(void * message_memory)
{
  autoware_vehicle_msgs__msg__GearReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__GearReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "report",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__GearReport, report),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GearReport__rosidl_typesupport_introspection_c__GearReport_message_members = {
  "autoware_vehicle_msgs__msg",  // message namespace
  "GearReport",  // message name
  2,  // number of fields
  sizeof(autoware_vehicle_msgs__msg__GearReport),
  GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array,  // message members
  GearReport__rosidl_typesupport_introspection_c__GearReport_init_function,  // function to initialize message memory (memory has to be allocated)
  GearReport__rosidl_typesupport_introspection_c__GearReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle = {
  0,
  &GearReport__rosidl_typesupport_introspection_c__GearReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_vehicle_msgs, msg, GearReport)() {
  GearReport__rosidl_typesupport_introspection_c__GearReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle.typesupport_identifier) {
    GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GearReport__rosidl_typesupport_introspection_c__GearReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
