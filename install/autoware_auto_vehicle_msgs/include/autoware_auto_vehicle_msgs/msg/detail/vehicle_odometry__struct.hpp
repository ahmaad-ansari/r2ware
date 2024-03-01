// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleOdometry __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleOdometry __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleOdometry_
{
  using Type = VehicleOdometry_<ContainerAllocator>;

  explicit VehicleOdometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity_mps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->velocity_mps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    }
  }

  explicit VehicleOdometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity_mps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->velocity_mps = 0.0f;
      this->front_wheel_angle_rad = 0.0f;
      this->rear_wheel_angle_rad = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _velocity_mps_type =
    float;
  _velocity_mps_type velocity_mps;
  using _front_wheel_angle_rad_type =
    float;
  _front_wheel_angle_rad_type front_wheel_angle_rad;
  using _rear_wheel_angle_rad_type =
    float;
  _rear_wheel_angle_rad_type rear_wheel_angle_rad;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__velocity_mps(
    const float & _arg)
  {
    this->velocity_mps = _arg;
    return *this;
  }
  Type & set__front_wheel_angle_rad(
    const float & _arg)
  {
    this->front_wheel_angle_rad = _arg;
    return *this;
  }
  Type & set__rear_wheel_angle_rad(
    const float & _arg)
  {
    this->rear_wheel_angle_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleOdometry
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__VehicleOdometry
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::VehicleOdometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleOdometry_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->velocity_mps != other.velocity_mps) {
      return false;
    }
    if (this->front_wheel_angle_rad != other.front_wheel_angle_rad) {
      return false;
    }
    if (this->rear_wheel_angle_rad != other.rear_wheel_angle_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleOdometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleOdometry_

// alias to use template instance with default allocator
using VehicleOdometry =
  autoware_auto_vehicle_msgs::msg::VehicleOdometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__STRUCT_HPP_
