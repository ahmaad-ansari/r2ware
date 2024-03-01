// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_vehicle_msgs:msg/Engage.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_HPP_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_HPP_

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
# define DEPRECATED__autoware_vehicle_msgs__msg__Engage __attribute__((deprecated))
#else
# define DEPRECATED__autoware_vehicle_msgs__msg__Engage __declspec(deprecated)
#endif

namespace autoware_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Engage_
{
  using Type = Engage_<ContainerAllocator>;

  explicit Engage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engage = false;
    }
  }

  explicit Engage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->engage = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _engage_type =
    bool;
  _engage_type engage;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__engage(
    const bool & _arg)
  {
    this->engage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_vehicle_msgs__msg__Engage
    std::shared_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_vehicle_msgs__msg__Engage
    std::shared_ptr<autoware_vehicle_msgs::msg::Engage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Engage_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->engage != other.engage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Engage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Engage_

// alias to use template instance with default allocator
using Engage =
  autoware_vehicle_msgs::msg::Engage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_vehicle_msgs

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__STRUCT_HPP_
