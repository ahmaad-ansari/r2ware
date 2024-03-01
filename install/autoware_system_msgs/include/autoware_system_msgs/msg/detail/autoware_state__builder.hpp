// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_
#define AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_

#include "autoware_system_msgs/msg/detail/autoware_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_system_msgs
{

namespace msg
{

namespace builder
{

class Init_AutowareState_state
{
public:
  explicit Init_AutowareState_state(::autoware_system_msgs::msg::AutowareState & msg)
  : msg_(msg)
  {}
  ::autoware_system_msgs::msg::AutowareState state(::autoware_system_msgs::msg::AutowareState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_system_msgs::msg::AutowareState msg_;
};

class Init_AutowareState_stamp
{
public:
  Init_AutowareState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutowareState_state stamp(::autoware_system_msgs::msg::AutowareState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_AutowareState_state(msg_);
  }

private:
  ::autoware_system_msgs::msg::AutowareState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_system_msgs::msg::AutowareState>()
{
  return autoware_system_msgs::msg::builder::Init_AutowareState_stamp();
}

}  // namespace autoware_system_msgs

#endif  // AUTOWARE_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__BUILDER_HPP_
