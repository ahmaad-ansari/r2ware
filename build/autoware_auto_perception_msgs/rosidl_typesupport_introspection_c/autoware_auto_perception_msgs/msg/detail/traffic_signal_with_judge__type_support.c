// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.h"


// Include directives for member types
// Member `signal`
#include "autoware_auto_perception_msgs/msg/traffic_signal.h"
// Member `signal`
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__init(message_memory);
}

void TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_member_array[3] = {
  {
    "judge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrafficSignalWithJudge, judge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrafficSignalWithJudge, has_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrafficSignalWithJudge, signal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "TrafficSignalWithJudge",  // message name
  3,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__TrafficSignalWithJudge),
  TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_member_array,  // message members
  TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_type_support_handle = {
  0,
  &TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrafficSignalWithJudge)() {
  TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrafficSignal)();
  if (!TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_type_support_handle.typesupport_identifier) {
    TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficSignalWithJudge__rosidl_typesupport_introspection_c__TrafficSignalWithJudge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
