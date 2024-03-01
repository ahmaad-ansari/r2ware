// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/msg/detail/emergency_state__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/msg/detail/emergency_state__functions.h"
#include "tier4_system_msgs/msg/detail/emergency_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__msg__EmergencyState__init(message_memory);
}

void EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_fini_function(void * message_memory)
{
  tier4_system_msgs__msg__EmergencyState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__EmergencyState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_members = {
  "tier4_system_msgs__msg",  // message namespace
  "EmergencyState",  // message name
  1,  // number of fields
  sizeof(tier4_system_msgs__msg__EmergencyState),
  EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_member_array,  // message members
  EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_type_support_handle = {
  0,
  &EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, EmergencyState)() {
  if (!EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_type_support_handle.typesupport_identifier) {
    EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EmergencyState__rosidl_typesupport_introspection_c__EmergencyState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
