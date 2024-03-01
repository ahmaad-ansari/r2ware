// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `behavior`
// Member `sequence`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `cooperation`
#include "autoware_adapi_v1_msgs/msg/cooperation_status.h"
// Member `cooperation`
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__VelocityFactor__init(message_memory);
}

void VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__VelocityFactor__fini(message_memory);
}

size_t VelocityFactor__rosidl_typesupport_introspection_c__size_function__CooperationStatus__cooperation(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * VelocityFactor__rosidl_typesupport_introspection_c__get_const_function__CooperationStatus__cooperation(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VelocityFactor__rosidl_typesupport_introspection_c__get_function__CooperationStatus__cooperation(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * member =
    (autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VelocityFactor__rosidl_typesupport_introspection_c__resize_function__CooperationStatus__cooperation(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence * member =
    (autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__CooperationStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_member_array[8] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cooperation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, cooperation),  // bytes offset in struct
    NULL,  // default value
    VelocityFactor__rosidl_typesupport_introspection_c__size_function__CooperationStatus__cooperation,  // size() function pointer
    VelocityFactor__rosidl_typesupport_introspection_c__get_const_function__CooperationStatus__cooperation,  // get_const(index) function pointer
    VelocityFactor__rosidl_typesupport_introspection_c__get_function__CooperationStatus__cooperation,  // get(index) function pointer
    VelocityFactor__rosidl_typesupport_introspection_c__resize_function__CooperationStatus__cooperation  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VelocityFactor, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "VelocityFactor",  // message name
  8,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__VelocityFactor),
  VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_member_array,  // message members
  VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_init_function,  // function to initialize message memory (memory has to be allocated)
  VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_type_support_handle = {
  0,
  &VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, VelocityFactor)() {
  VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, CooperationStatus)();
  if (!VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_type_support_handle.typesupport_identifier) {
    VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VelocityFactor__rosidl_typesupport_introspection_c__VelocityFactor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
