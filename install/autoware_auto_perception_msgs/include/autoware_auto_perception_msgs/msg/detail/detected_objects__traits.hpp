// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/detected_objects__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::DetectedObjects>()
{
  return "autoware_auto_perception_msgs::msg::DetectedObjects";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::DetectedObjects>()
{
  return "autoware_auto_perception_msgs/msg/DetectedObjects";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::DetectedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::DetectedObjects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::DetectedObjects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__TRAITS_HPP_