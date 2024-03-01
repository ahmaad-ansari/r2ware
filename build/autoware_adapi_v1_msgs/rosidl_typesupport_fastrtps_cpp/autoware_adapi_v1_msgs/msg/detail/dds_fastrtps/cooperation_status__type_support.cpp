// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationStatus.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_status__struct.hpp"

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
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::CooperationDecision &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::CooperationDecision &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::CooperationDecision &,
  size_t current_alignment);
size_t
max_serialized_size_CooperationDecision(
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
  const autoware_adapi_v1_msgs::msg::CooperationDecision &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::CooperationDecision &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::CooperationDecision &,
  size_t current_alignment);
size_t
max_serialized_size_CooperationDecision(
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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_serialize(
  const autoware_adapi_v1_msgs::msg::CooperationStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uuid
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.uuid,
    cdr);
  // Member: autonomous
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.autonomous,
    cdr);
  // Member: cooperator
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cooperator,
    cdr);
  // Member: cancellable
  cdr << (ros_message.cancellable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::msg::CooperationStatus & ros_message)
{
  // Member: uuid
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.uuid);

  // Member: autonomous
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.autonomous);

  // Member: cooperator
  autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cooperator);

  // Member: cancellable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cancellable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::msg::CooperationStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uuid

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.uuid, current_alignment);
  // Member: autonomous

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.autonomous, current_alignment);
  // Member: cooperator

  current_alignment +=
    autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cooperator, current_alignment);
  // Member: cancellable
  {
    size_t item_size = sizeof(ros_message.cancellable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_CooperationStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: uuid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: autonomous
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CooperationDecision(
        full_bounded, current_alignment);
    }
  }

  // Member: cooperator
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CooperationDecision(
        full_bounded, current_alignment);
    }
  }

  // Member: cancellable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CooperationStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::msg::CooperationStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CooperationStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::msg::CooperationStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CooperationStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::msg::CooperationStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CooperationStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CooperationStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _CooperationStatus__callbacks = {
  "autoware_adapi_v1_msgs::msg",
  "CooperationStatus",
  _CooperationStatus__cdr_serialize,
  _CooperationStatus__cdr_deserialize,
  _CooperationStatus__get_serialized_size,
  _CooperationStatus__max_serialized_size
};

static rosidl_message_type_support_t _CooperationStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CooperationStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_adapi_v1_msgs::msg::CooperationStatus>()
{
  return &autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::_CooperationStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, msg, CooperationStatus)() {
  return &autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::_CooperationStatus__handle;
}

#ifdef __cplusplus
}
#endif
