// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/lane_change_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_planning_msgs::msg::LaneChangeCommand>()
{
  return "tier4_planning_msgs::msg::LaneChangeCommand";
}

template<>
inline const char * name<tier4_planning_msgs::msg::LaneChangeCommand>()
{
  return "tier4_planning_msgs/msg/LaneChangeCommand";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::LaneChangeCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::LaneChangeCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tier4_planning_msgs::msg::LaneChangeCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_COMMAND__TRAITS_HPP_
