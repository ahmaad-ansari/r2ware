// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_perception_msgs/msg/detail/predicted_object_kinematics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"

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
  const geometry_msgs::msg::PoseWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PoseWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::PoseWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_PoseWithCovariance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::TwistWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::TwistWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::TwistWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_TwistWithCovariance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::AccelWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::AccelWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::AccelWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_AccelWithCovariance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace autoware_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_perception_msgs::msg::PredictedPath &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_perception_msgs::msg::PredictedPath &);
size_t get_serialized_size(
  const autoware_perception_msgs::msg::PredictedPath &,
  size_t current_alignment);
size_t
max_serialized_size_PredictedPath(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_perception_msgs


namespace autoware_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_perception_msgs
cdr_serialize(
  const autoware_perception_msgs::msg::PredictedObjectKinematics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: initial_pose_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_pose_with_covariance,
    cdr);
  // Member: initial_twist_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_twist_with_covariance,
    cdr);
  // Member: initial_acceleration_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.initial_acceleration_with_covariance,
    cdr);
  // Member: predicted_paths
  {
    size_t size = ros_message.predicted_paths.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autoware_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.predicted_paths[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_perception_msgs::msg::PredictedObjectKinematics & ros_message)
{
  // Member: initial_pose_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_pose_with_covariance);

  // Member: initial_twist_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_twist_with_covariance);

  // Member: initial_acceleration_with_covariance
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.initial_acceleration_with_covariance);

  // Member: predicted_paths
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.predicted_paths.resize(size);
    for (size_t i = 0; i < size; i++) {
      autoware_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.predicted_paths[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_perception_msgs
get_serialized_size(
  const autoware_perception_msgs::msg::PredictedObjectKinematics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: initial_pose_with_covariance

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_pose_with_covariance, current_alignment);
  // Member: initial_twist_with_covariance

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_twist_with_covariance, current_alignment);
  // Member: initial_acceleration_with_covariance

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.initial_acceleration_with_covariance, current_alignment);
  // Member: predicted_paths
  {
    size_t array_size = ros_message.predicted_paths.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.predicted_paths[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_perception_msgs
max_serialized_size_PredictedObjectKinematics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: initial_pose_with_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseWithCovariance(
        full_bounded, current_alignment);
    }
  }

  // Member: initial_twist_with_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TwistWithCovariance(
        full_bounded, current_alignment);
    }
  }

  // Member: initial_acceleration_with_covariance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelWithCovariance(
        full_bounded, current_alignment);
    }
  }

  // Member: predicted_paths
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PredictedPath(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PredictedObjectKinematics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_perception_msgs::msg::PredictedObjectKinematics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PredictedObjectKinematics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_perception_msgs::msg::PredictedObjectKinematics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PredictedObjectKinematics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_perception_msgs::msg::PredictedObjectKinematics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PredictedObjectKinematics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PredictedObjectKinematics(full_bounded, 0);
}

static message_type_support_callbacks_t _PredictedObjectKinematics__callbacks = {
  "autoware_perception_msgs::msg",
  "PredictedObjectKinematics",
  _PredictedObjectKinematics__cdr_serialize,
  _PredictedObjectKinematics__cdr_deserialize,
  _PredictedObjectKinematics__get_serialized_size,
  _PredictedObjectKinematics__max_serialized_size
};

static rosidl_message_type_support_t _PredictedObjectKinematics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PredictedObjectKinematics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_perception_msgs::msg::PredictedObjectKinematics>()
{
  return &autoware_perception_msgs::msg::typesupport_fastrtps_cpp::_PredictedObjectKinematics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_perception_msgs, msg, PredictedObjectKinematics)() {
  return &autoware_perception_msgs::msg::typesupport_fastrtps_cpp::_PredictedObjectKinematics__handle;
}

#ifdef __cplusplus
}
#endif
