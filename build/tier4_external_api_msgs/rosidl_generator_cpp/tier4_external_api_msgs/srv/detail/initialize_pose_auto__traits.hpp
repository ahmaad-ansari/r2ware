// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/InitializePoseAuto.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__TRAITS_HPP_

#include "tier4_external_api_msgs/srv/detail/initialize_pose_auto__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::InitializePoseAuto_Request>()
{
  return "tier4_external_api_msgs::srv::InitializePoseAuto_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::InitializePoseAuto_Request>()
{
  return "tier4_external_api_msgs/srv/InitializePoseAuto_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::InitializePoseAuto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::InitializePoseAuto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::InitializePoseAuto_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::InitializePoseAuto_Response>()
{
  return "tier4_external_api_msgs::srv::InitializePoseAuto_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::InitializePoseAuto_Response>()
{
  return "tier4_external_api_msgs/srv/InitializePoseAuto_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::InitializePoseAuto_Response>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::InitializePoseAuto_Response>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::InitializePoseAuto_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::InitializePoseAuto>()
{
  return "tier4_external_api_msgs::srv::InitializePoseAuto";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::InitializePoseAuto>()
{
  return "tier4_external_api_msgs/srv/InitializePoseAuto";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::InitializePoseAuto>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::InitializePoseAuto_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::InitializePoseAuto_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::InitializePoseAuto>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::InitializePoseAuto_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::InitializePoseAuto_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::InitializePoseAuto>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::InitializePoseAuto_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::InitializePoseAuto_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__INITIALIZE_POSE_AUTO__TRAITS_HPP_