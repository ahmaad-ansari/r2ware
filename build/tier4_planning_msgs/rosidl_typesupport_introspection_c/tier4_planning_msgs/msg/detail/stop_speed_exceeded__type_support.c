// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/StopSpeedExceeded.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/stop_speed_exceeded__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/stop_speed_exceeded__functions.h"
#include "tier4_planning_msgs/msg/detail/stop_speed_exceeded__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__StopSpeedExceeded__init(message_memory);
}

void StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__StopSpeedExceeded__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopSpeedExceeded, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_speed_exceeded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopSpeedExceeded, stop_speed_exceeded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "StopSpeedExceeded",  // message name
  2,  // number of fields
  sizeof(tier4_planning_msgs__msg__StopSpeedExceeded),
  StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_member_array,  // message members
  StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_init_function,  // function to initialize message memory (memory has to be allocated)
  StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_type_support_handle = {
  0,
  &StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopSpeedExceeded)() {
  StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_type_support_handle.typesupport_identifier) {
    StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopSpeedExceeded__rosidl_typesupport_introspection_c__StopSpeedExceeded_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
