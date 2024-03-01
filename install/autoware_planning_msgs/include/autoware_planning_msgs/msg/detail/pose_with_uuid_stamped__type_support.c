// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_planning_msgs:msg/PoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__rosidl_typesupport_introspection_c.h"
#include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__functions.h"
#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__msg__PoseWithUuidStamped__init(message_memory);
}

void PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_fini_function(void * message_memory)
{
  autoware_planning_msgs__msg__PoseWithUuidStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__PoseWithUuidStamped, header),  // bytes offset in struct
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
    offsetof(autoware_planning_msgs__msg__PoseWithUuidStamped, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__PoseWithUuidStamped, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_members = {
  "autoware_planning_msgs__msg",  // message namespace
  "PoseWithUuidStamped",  // message name
  3,  // number of fields
  sizeof(autoware_planning_msgs__msg__PoseWithUuidStamped),
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_member_array,  // message members
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_type_support_handle = {
  0,
  &PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, PoseWithUuidStamped)() {
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_type_support_handle.typesupport_identifier) {
    PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PoseWithUuidStamped__rosidl_typesupport_introspection_c__PoseWithUuidStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif