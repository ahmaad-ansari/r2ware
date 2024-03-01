// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__rosidl_typesupport_introspection_c.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__functions.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `metadata_list`
#include "autoware_map_msgs/msg/point_cloud_map_cell_meta_data_with_id.h"
// Member `metadata_list`
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__msg__PointCloudMapMetaData__init(message_memory);
}

void PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_fini_function(void * message_memory)
{
  autoware_map_msgs__msg__PointCloudMapMetaData__fini(message_memory);
}

size_t PointCloudMapMetaData__rosidl_typesupport_introspection_c__size_function__PointCloudMapCellMetaDataWithID__metadata_list(
  const void * untyped_member)
{
  const autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence * member =
    (const autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence *)(untyped_member);
  return member->size;
}

const void * PointCloudMapMetaData__rosidl_typesupport_introspection_c__get_const_function__PointCloudMapCellMetaDataWithID__metadata_list(
  const void * untyped_member, size_t index)
{
  const autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence * member =
    (const autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PointCloudMapMetaData__rosidl_typesupport_introspection_c__get_function__PointCloudMapCellMetaDataWithID__metadata_list(
  void * untyped_member, size_t index)
{
  autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence * member =
    (autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PointCloudMapMetaData__rosidl_typesupport_introspection_c__resize_function__PointCloudMapCellMetaDataWithID__metadata_list(
  void * untyped_member, size_t size)
{
  autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence * member =
    (autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence *)(untyped_member);
  autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__fini(member);
  return autoware_map_msgs__msg__PointCloudMapCellMetaDataWithID__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapMetaData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapMetaData, metadata_list),  // bytes offset in struct
    NULL,  // default value
    PointCloudMapMetaData__rosidl_typesupport_introspection_c__size_function__PointCloudMapCellMetaDataWithID__metadata_list,  // size() function pointer
    PointCloudMapMetaData__rosidl_typesupport_introspection_c__get_const_function__PointCloudMapCellMetaDataWithID__metadata_list,  // get_const(index) function pointer
    PointCloudMapMetaData__rosidl_typesupport_introspection_c__get_function__PointCloudMapCellMetaDataWithID__metadata_list,  // get(index) function pointer
    PointCloudMapMetaData__rosidl_typesupport_introspection_c__resize_function__PointCloudMapCellMetaDataWithID__metadata_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_members = {
  "autoware_map_msgs__msg",  // message namespace
  "PointCloudMapMetaData",  // message name
  2,  // number of fields
  sizeof(autoware_map_msgs__msg__PointCloudMapMetaData),
  PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_member_array,  // message members
  PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_init_function,  // function to initialize message memory (memory has to be allocated)
  PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_type_support_handle = {
  0,
  &PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, PointCloudMapMetaData)() {
  PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, PointCloudMapCellMetaDataWithID)();
  if (!PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_type_support_handle.typesupport_identifier) {
    PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PointCloudMapMetaData__rosidl_typesupport_introspection_c__PointCloudMapMetaData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
