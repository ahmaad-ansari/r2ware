// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_vehicle_msgs:msg/GearCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__BUILDER_HPP_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__BUILDER_HPP_

#include "autoware_vehicle_msgs/msg/detail/gear_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_GearCommand_command
{
public:
  explicit Init_GearCommand_command(::autoware_vehicle_msgs::msg::GearCommand & msg)
  : msg_(msg)
  {}
  ::autoware_vehicle_msgs::msg::GearCommand command(::autoware_vehicle_msgs::msg::GearCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_vehicle_msgs::msg::GearCommand msg_;
};

class Init_GearCommand_stamp
{
public:
  Init_GearCommand_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GearCommand_command stamp(::autoware_vehicle_msgs::msg::GearCommand::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_GearCommand_command(msg_);
  }

private:
  ::autoware_vehicle_msgs::msg::GearCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_vehicle_msgs::msg::GearCommand>()
{
  return autoware_vehicle_msgs::msg::builder::Init_GearCommand_stamp();
}

}  // namespace autoware_vehicle_msgs

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__GEAR_COMMAND__BUILDER_HPP_
