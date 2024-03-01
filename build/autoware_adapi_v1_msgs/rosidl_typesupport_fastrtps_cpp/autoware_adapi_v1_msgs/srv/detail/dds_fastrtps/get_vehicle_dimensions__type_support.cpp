// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_adapi_v1_msgs:srv/GetVehicleDimensions.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_adapi_v1_msgs/srv/detail/get_vehicle_dimensions__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_serialize(
  const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_GetVehicleDimensions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetVehicleDimensions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetVehicleDimensions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetVehicleDimensions_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetVehicleDimensions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetVehicleDimensions_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetVehicleDimensions_Request__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions_Request",
  _GetVehicleDimensions_Request__cdr_serialize,
  _GetVehicleDimensions_Request__cdr_deserialize,
  _GetVehicleDimensions_Request__get_serialized_size,
  _GetVehicleDimensions_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVehicleDimensions_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVehicleDimensions_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Request>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Request)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::ResponseStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::ResponseStatus &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::ResponseStatus &,
  size_t current_alignment);
size_t
max_serialized_size_ResponseStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_adapi_v1_msgs

namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::VehicleDimensions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::VehicleDimensions &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::VehicleDimensions &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleDimensions(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_adapi_v1_msgs


namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_serialize(
  const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status,
    cdr);
  // Member: dimensions
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dimensions,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response & ros_message)
{
  // Member: status
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status);

  // Member: dimensions
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dimensions);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status, current_alignment);
  // Member: dimensions

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dimensions, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_GetVehicleDimensions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ResponseStatus(
        full_bounded, current_alignment);
    }
  }

  // Member: dimensions
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleDimensions(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetVehicleDimensions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetVehicleDimensions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetVehicleDimensions_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetVehicleDimensions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetVehicleDimensions_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetVehicleDimensions_Response__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions_Response",
  _GetVehicleDimensions_Response__cdr_serialize,
  _GetVehicleDimensions_Response__cdr_deserialize,
  _GetVehicleDimensions_Response__get_serialized_size,
  _GetVehicleDimensions_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVehicleDimensions_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVehicleDimensions_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_adapi_v1_msgs::srv::GetVehicleDimensions_Response>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Response)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace autoware_adapi_v1_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetVehicleDimensions__callbacks = {
  "autoware_adapi_v1_msgs::srv",
  "GetVehicleDimensions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, GetVehicleDimensions_Response)(),
};

static rosidl_service_type_support_t _GetVehicleDimensions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetVehicleDimensions__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<autoware_adapi_v1_msgs::srv::GetVehicleDimensions>()
{
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, srv, GetVehicleDimensions)() {
  return &autoware_adapi_v1_msgs::srv::typesupport_fastrtps_cpp::_GetVehicleDimensions__handle;
}

#ifdef __cplusplus
}
#endif
