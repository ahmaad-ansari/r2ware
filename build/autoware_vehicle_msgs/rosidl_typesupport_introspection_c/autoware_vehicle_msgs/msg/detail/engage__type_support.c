// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_vehicle_msgs:msg/Engage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_vehicle_msgs/msg/detail/engage__rosidl_typesupport_introspection_c.h"
#include "autoware_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_vehicle_msgs/msg/detail/engage__functions.h"
#include "autoware_vehicle_msgs/msg/detail/engage__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Engage__rosidl_typesupport_introspection_c__Engage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_vehicle_msgs__msg__Engage__init(message_memory);
}

void Engage__rosidl_typesupport_introspection_c__Engage_fini_function(void * message_memory)
{
  autoware_vehicle_msgs__msg__Engage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Engage__rosidl_typesupport_introspection_c__Engage_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__Engage, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "engage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_vehicle_msgs__msg__Engage, engage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Engage__rosidl_typesupport_introspection_c__Engage_message_members = {
  "autoware_vehicle_msgs__msg",  // message namespace
  "Engage",  // message name
  2,  // number of fields
  sizeof(autoware_vehicle_msgs__msg__Engage),
  Engage__rosidl_typesupport_introspection_c__Engage_message_member_array,  // message members
  Engage__rosidl_typesupport_introspection_c__Engage_init_function,  // function to initialize message memory (memory has to be allocated)
  Engage__rosidl_typesupport_introspection_c__Engage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Engage__rosidl_typesupport_introspection_c__Engage_message_type_support_handle = {
  0,
  &Engage__rosidl_typesupport_introspection_c__Engage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_vehicle_msgs, msg, Engage)() {
  Engage__rosidl_typesupport_introspection_c__Engage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Engage__rosidl_typesupport_introspection_c__Engage_message_type_support_handle.typesupport_identifier) {
    Engage__rosidl_typesupport_introspection_c__Engage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Engage__rosidl_typesupport_introspection_c__Engage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
