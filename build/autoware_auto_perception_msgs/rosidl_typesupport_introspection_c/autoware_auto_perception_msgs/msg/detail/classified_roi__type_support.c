// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__struct.h"


// Include directives for member types
// Member `classifications`
#include "autoware_auto_perception_msgs/msg/object_classification.h"
// Member `classifications`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__rosidl_typesupport_introspection_c.h"
// Member `polygon`
#include "geometry_msgs/msg/polygon.h"
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__ClassifiedRoi__init(message_memory);
}

void ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__ClassifiedRoi__fini(message_memory);
}

size_t ClassifiedRoi__rosidl_typesupport_introspection_c__size_function__ObjectClassification__classifications(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return member->size;
}

const void * ClassifiedRoi__rosidl_typesupport_introspection_c__get_const_function__ObjectClassification__classifications(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ClassifiedRoi__rosidl_typesupport_introspection_c__get_function__ObjectClassification__classifications(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ClassifiedRoi__rosidl_typesupport_introspection_c__resize_function__ObjectClassification__classifications(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * member =
    (autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_member_array[2] = {
  {
    "classifications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__ClassifiedRoi, classifications),  // bytes offset in struct
    NULL,  // default value
    ClassifiedRoi__rosidl_typesupport_introspection_c__size_function__ObjectClassification__classifications,  // size() function pointer
    ClassifiedRoi__rosidl_typesupport_introspection_c__get_const_function__ObjectClassification__classifications,  // get_const(index) function pointer
    ClassifiedRoi__rosidl_typesupport_introspection_c__get_function__ObjectClassification__classifications,  // get(index) function pointer
    ClassifiedRoi__rosidl_typesupport_introspection_c__resize_function__ObjectClassification__classifications  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__ClassifiedRoi, polygon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "ClassifiedRoi",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__ClassifiedRoi),
  ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_member_array,  // message members
  ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_init_function,  // function to initialize message memory (memory has to be allocated)
  ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_type_support_handle = {
  0,
  &ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, ClassifiedRoi)() {
  ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, ObjectClassification)();
  ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Polygon)();
  if (!ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_type_support_handle.typesupport_identifier) {
    ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ClassifiedRoi__rosidl_typesupport_introspection_c__ClassifiedRoi_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
