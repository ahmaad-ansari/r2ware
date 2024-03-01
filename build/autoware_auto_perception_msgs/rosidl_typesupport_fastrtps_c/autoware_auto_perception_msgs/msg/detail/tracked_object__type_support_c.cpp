// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"  // classification
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"  // shape
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"  // kinematics
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // object_id

// forward declare type support functions
size_t get_serialized_size_autoware_auto_perception_msgs__msg__ObjectClassification(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__ObjectClassification(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, ObjectClassification)();
size_t get_serialized_size_autoware_auto_perception_msgs__msg__Shape(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__Shape(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, Shape)();
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _TrackedObject__ros_msg_type = autoware_auto_perception_msgs__msg__TrackedObject;

static bool _TrackedObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrackedObject__ros_msg_type * ros_message = static_cast<const _TrackedObject__ros_msg_type *>(untyped_ros_message);
  // Field name: object_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_id, cdr))
    {
      return false;
    }
  }

  // Field name: existence_probability
  {
    cdr << ros_message->existence_probability;
  }

  // Field name: classification
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, ObjectClassification
      )()->data);
    size_t size = ros_message->classification.size;
    auto array_ptr = ros_message->classification.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: kinematics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->kinematics, cdr))
    {
      return false;
    }
  }

  // Field name: shape
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, Shape
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->shape, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TrackedObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrackedObject__ros_msg_type * ros_message = static_cast<_TrackedObject__ros_msg_type *>(untyped_ros_message);
  // Field name: object_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_id))
    {
      return false;
    }
  }

  // Field name: existence_probability
  {
    cdr >> ros_message->existence_probability;
  }

  // Field name: classification
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, ObjectClassification
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->classification.data) {
      autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(&ros_message->classification);
    }
    if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&ros_message->classification, size)) {
      return "failed to create array for field 'classification'";
    }
    auto array_ptr = ros_message->classification.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: kinematics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->kinematics))
    {
      return false;
    }
  }

  // Field name: shape
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, Shape
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->shape))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackedObject__ros_msg_type * ros_message = static_cast<const _TrackedObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->object_id), current_alignment);
  // field.name existence_probability
  {
    size_t item_size = sizeof(ros_message->existence_probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification
  {
    size_t array_size = ros_message->classification.size;
    auto array_ptr = ros_message->classification.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__ObjectClassification(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name kinematics

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
    &(ros_message->kinematics), current_alignment);
  // field.name shape

  current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__Shape(
    &(ros_message->shape), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TrackedObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObject(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: existence_probability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: classification
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__ObjectClassification(
        full_bounded, current_alignment);
    }
  }
  // member: kinematics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
        full_bounded, current_alignment);
    }
  }
  // member: shape
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__Shape(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TrackedObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObject(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrackedObject = {
  "autoware_auto_perception_msgs::msg",
  "TrackedObject",
  _TrackedObject__cdr_serialize,
  _TrackedObject__cdr_deserialize,
  _TrackedObject__get_serialized_size,
  _TrackedObject__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackedObject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrackedObject)() {
  return &_TrackedObject__type_support;
}

#if defined(__cplusplus)
}
#endif
