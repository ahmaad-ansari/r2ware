// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactor.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace autoware_adapi_v1_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_adapi_v1_msgs::msg::CooperationStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_adapi_v1_msgs::msg::CooperationStatus &);
size_t get_serialized_size(
  const autoware_adapi_v1_msgs::msg::CooperationStatus &,
  size_t current_alignment);
size_t
max_serialized_size_CooperationStatus(
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
  const autoware_adapi_v1_msgs::msg::SteeringFactor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose
  {
    for (size_t i = 0; i < 2; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pose[i],
        cdr);
    }
  }
  // Member: distance
  {
    cdr << ros_message.distance;
  }
  // Member: direction
  cdr << ros_message.direction;
  // Member: status
  cdr << ros_message.status;
  // Member: behavior
  cdr << ros_message.behavior;
  // Member: sequence
  cdr << ros_message.sequence;
  // Member: detail
  cdr << ros_message.detail;
  // Member: cooperation
  {
    size_t size = ros_message.cooperation.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cooperation[i],
        cdr);
    }
  }
  // Member: type
  cdr << ros_message.type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_adapi_v1_msgs::msg::SteeringFactor & ros_message)
{
  // Member: pose
  {
    for (size_t i = 0; i < 2; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.pose[i]);
    }
  }

  // Member: distance
  {
    cdr >> ros_message.distance;
  }

  // Member: direction
  cdr >> ros_message.direction;

  // Member: status
  cdr >> ros_message.status;

  // Member: behavior
  cdr >> ros_message.behavior;

  // Member: sequence
  cdr >> ros_message.sequence;

  // Member: detail
  cdr >> ros_message.detail;

  // Member: cooperation
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cooperation.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cooperation[i]);
    }
  }

  // Member: type
  cdr >> ros_message.type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
get_serialized_size(
  const autoware_adapi_v1_msgs::msg::SteeringFactor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose
  {
    size_t array_size = 2;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pose[index], current_alignment);
    }
  }
  // Member: distance
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.distance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: behavior
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.behavior.size() + 1);
  // Member: sequence
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.sequence.size() + 1);
  // Member: detail
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.detail.size() + 1);
  // Member: cooperation
  {
    size_t array_size = ros_message.cooperation.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cooperation[index], current_alignment);
    }
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_adapi_v1_msgs
max_serialized_size_SteeringFactor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pose
  {
    size_t array_size = 2;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  // Member: distance
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: behavior
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sequence
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: detail
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: cooperation
  {
    size_t array_size = 1;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CooperationStatus(
        full_bounded, current_alignment);
    }
  }

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SteeringFactor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::msg::SteeringFactor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SteeringFactor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_adapi_v1_msgs::msg::SteeringFactor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SteeringFactor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_adapi_v1_msgs::msg::SteeringFactor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SteeringFactor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SteeringFactor(full_bounded, 0);
}

static message_type_support_callbacks_t _SteeringFactor__callbacks = {
  "autoware_adapi_v1_msgs::msg",
  "SteeringFactor",
  _SteeringFactor__cdr_serialize,
  _SteeringFactor__cdr_deserialize,
  _SteeringFactor__get_serialized_size,
  _SteeringFactor__max_serialized_size
};

static rosidl_message_type_support_t _SteeringFactor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SteeringFactor__callbacks,
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
get_message_type_support_handle<autoware_adapi_v1_msgs::msg::SteeringFactor>()
{
  return &autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::_SteeringFactor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_adapi_v1_msgs, msg, SteeringFactor)() {
  return &autoware_adapi_v1_msgs::msg::typesupport_fastrtps_cpp::_SteeringFactor__handle;
}

#ifdef __cplusplus
}
#endif
