// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_vehicle_msgs:msg/VelocityReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__TRAITS_HPP_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__TRAITS_HPP_

#include "autoware_vehicle_msgs/msg/detail/velocity_report__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_vehicle_msgs::msg::VelocityReport>()
{
  return "autoware_vehicle_msgs::msg::VelocityReport";
}

template<>
inline const char * name<autoware_vehicle_msgs::msg::VelocityReport>()
{
  return "autoware_vehicle_msgs/msg/VelocityReport";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::msg::VelocityReport>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_vehicle_msgs::msg::VelocityReport>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_vehicle_msgs::msg::VelocityReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__VELOCITY_REPORT__TRAITS_HPP_
