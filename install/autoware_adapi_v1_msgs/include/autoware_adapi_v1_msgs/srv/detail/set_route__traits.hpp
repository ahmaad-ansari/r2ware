// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/srv/detail/set_route__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'option'
#include "autoware_adapi_v1_msgs/msg/detail/route_option__traits.hpp"
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetRoute_Request>()
{
  return "autoware_adapi_v1_msgs::srv::SetRoute_Request";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetRoute_Request>()
{
  return "autoware_adapi_v1_msgs/srv/SetRoute_Request";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::SetRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetRoute_Response>()
{
  return "autoware_adapi_v1_msgs::srv::SetRoute_Response";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetRoute_Response>()
{
  return "autoware_adapi_v1_msgs/srv/SetRoute_Response";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetRoute_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetRoute_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::SetRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetRoute>()
{
  return "autoware_adapi_v1_msgs::srv::SetRoute";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetRoute>()
{
  return "autoware_adapi_v1_msgs/srv/SetRoute";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_v1_msgs::srv::SetRoute_Request>::value &&
    has_fixed_size<autoware_adapi_v1_msgs::srv::SetRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_v1_msgs::srv::SetRoute_Request>::value &&
    has_bounded_size<autoware_adapi_v1_msgs::srv::SetRoute_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_v1_msgs::srv::SetRoute>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_v1_msgs::srv::SetRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_v1_msgs::srv::SetRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__TRAITS_HPP_