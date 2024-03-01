// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::SteeringFactorArray>()
{
  return "autoware_adapi_v1_msgs::msg::SteeringFactorArray";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::SteeringFactorArray>()
{
  return "autoware_adapi_v1_msgs/msg/SteeringFactorArray";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::SteeringFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::SteeringFactorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::SteeringFactorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__STEERING_FACTOR_ARRAY__TRAITS_HPP_
