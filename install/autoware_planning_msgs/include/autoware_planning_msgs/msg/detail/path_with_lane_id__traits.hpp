// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/PathWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/path_with_lane_id__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::msg::PathWithLaneId>()
{
  return "autoware_planning_msgs::msg::PathWithLaneId";
}

template<>
inline const char * name<autoware_planning_msgs::msg::PathWithLaneId>()
{
  return "autoware_planning_msgs/msg/PathWithLaneId";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::PathWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::PathWithLaneId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::msg::PathWithLaneId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__PATH_WITH_LANE_ID__TRAITS_HPP_