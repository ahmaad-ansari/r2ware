// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__BUILDER_HPP_

#include "autoware_planning_msgs/msg/detail/path_with_lane_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathWithLaneId_right_bound
{
public:
  explicit Init_PathWithLaneId_right_bound(::autoware_planning_msgs::msg::PathWithLaneId & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::msg::PathWithLaneId right_bound(::autoware_planning_msgs::msg::PathWithLaneId::_right_bound_type arg)
  {
    msg_.right_bound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PathWithLaneId msg_;
};

class Init_PathWithLaneId_left_bound
{
public:
  explicit Init_PathWithLaneId_left_bound(::autoware_planning_msgs::msg::PathWithLaneId & msg)
  : msg_(msg)
  {}
  Init_PathWithLaneId_right_bound left_bound(::autoware_planning_msgs::msg::PathWithLaneId::_left_bound_type arg)
  {
    msg_.left_bound = std::move(arg);
    return Init_PathWithLaneId_right_bound(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PathWithLaneId msg_;
};

class Init_PathWithLaneId_points
{
public:
  explicit Init_PathWithLaneId_points(::autoware_planning_msgs::msg::PathWithLaneId & msg)
  : msg_(msg)
  {}
  Init_PathWithLaneId_left_bound points(::autoware_planning_msgs::msg::PathWithLaneId::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_PathWithLaneId_left_bound(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PathWithLaneId msg_;
};

class Init_PathWithLaneId_header
{
public:
  Init_PathWithLaneId_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathWithLaneId_points header(::autoware_planning_msgs::msg::PathWithLaneId::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathWithLaneId_points(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PathWithLaneId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::msg::PathWithLaneId>()
{
  return autoware_planning_msgs::msg::builder::Init_PathWithLaneId_header();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__BUILDER_HPP_
