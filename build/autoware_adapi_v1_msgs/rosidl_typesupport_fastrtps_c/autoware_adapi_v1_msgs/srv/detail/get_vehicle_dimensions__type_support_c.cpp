// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:srv/GetVehicleDimensions.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__struct.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__functions.h"
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


// forward declare type support functions


using _GetVehicleDimensions_Request__ros_msg_type = autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Request;

static bool _GetVehicleDimensions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVehicleDimensions_Request__ros_msg_type * ros_message = static_cast<const _GetVehicleDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetVehicleDimensions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVehicleDimensions_Request__ros_msg_type * ros_message = static_cast<_GetVehicleDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVehicleDimensions_Request__ros_msg_type * ros_message = static_cast<const _GetVehicleDimensions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetVehicleDimensions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetVehicleDimensions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVehicleDimensions_Request = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions_Request",
  _GetVehicleDimensions_Request__cdr_serialize,
  _GetVehicleDimensions_Request__cdr_deserialize,
  _GetVehicleDimensions_Request__get_serialized_size,
  _GetVehicleDimensions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVehicleDimensions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVehicleDimensions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Request)() {
  return &_GetVehicleDimensions_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__struct.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"  // status
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__functions.h"  // dimensions

// forward declare type support functions
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus)();
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, VehicleDimensions)();


using _GetVehicleDimensions_Response__ros_msg_type = autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Response;

static bool _GetVehicleDimensions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVehicleDimensions_Response__ros_msg_type * ros_message = static_cast<const _GetVehicleDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->status, cdr))
    {
      return false;
    }
  }

  // Field name: dimensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, VehicleDimensions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dimensions, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetVehicleDimensions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVehicleDimensions_Response__ros_msg_type * ros_message = static_cast<_GetVehicleDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, ResponseStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->status))
    {
      return false;
    }
  }

  // Field name: dimensions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, VehicleDimensions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dimensions))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVehicleDimensions_Response__ros_msg_type * ros_message = static_cast<const _GetVehicleDimensions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status

  current_alignment += get_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
    &(ros_message->status), current_alignment);
  // field.name dimensions

  current_alignment += get_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
    &(ros_message->dimensions), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetVehicleDimensions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_adapi_v1_msgs__msg__ResponseStatus(
        full_bounded, current_alignment);
    }
  }
  // member: dimensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetVehicleDimensions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__srv__GetVehicleDimensions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetVehicleDimensions_Response = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions_Response",
  _GetVehicleDimensions_Response__cdr_serialize,
  _GetVehicleDimensions_Response__cdr_deserialize,
  _GetVehicleDimensions_Response__get_serialized_size,
  _GetVehicleDimensions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVehicleDimensions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVehicleDimensions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Response)() {
  return &_GetVehicleDimensions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/srv/get_vehicle_dimensions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetVehicleDimensions__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Response)(),
};

static rosidl_service_type_support_t GetVehicleDimensions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetVehicleDimensions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, srv, GetVehicleDimensions)() {
  return &GetVehicleDimensions__handle;
}

#if defined(__cplusplus)
}
#endif