// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drivable_area'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_planning_msgs::msg::Path>()
{
  return "tier4_planning_msgs::msg::Path";
}

template<>
inline const char * name<tier4_planning_msgs::msg::Path>()
{
  return "tier4_planning_msgs/msg/Path";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::Path>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::Path>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH__TRAITS_HPP_
