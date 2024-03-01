// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/OperationModeState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/operation_mode_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::OperationModeState>()
{
  return "autoware_adapi_v1_msgs::msg::OperationModeState";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::OperationModeState>()
{
  return "autoware_adapi_v1_msgs/msg/OperationModeState";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::OperationModeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OPERATION_MODE_STATE__TRAITS_HPP_