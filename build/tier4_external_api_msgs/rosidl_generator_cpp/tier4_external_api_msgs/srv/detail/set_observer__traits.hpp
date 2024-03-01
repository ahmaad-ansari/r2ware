// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/SetObserver.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__TRAITS_HPP_

#include "tier4_external_api_msgs/srv/detail/set_observer__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'mode'
#include "tier4_external_api_msgs/msg/detail/observer__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::SetObserver_Request>()
{
  return "tier4_external_api_msgs::srv::SetObserver_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::SetObserver_Request>()
{
  return "tier4_external_api_msgs/srv/SetObserver_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::SetObserver_Request>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::Observer>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::SetObserver_Request>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::Observer>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::SetObserver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::SetObserver_Response>()
{
  return "tier4_external_api_msgs::srv::SetObserver_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::SetObserver_Response>()
{
  return "tier4_external_api_msgs/srv/SetObserver_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::SetObserver_Response>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::SetObserver_Response>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::SetObserver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::SetObserver>()
{
  return "tier4_external_api_msgs::srv::SetObserver";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::SetObserver>()
{
  return "tier4_external_api_msgs/srv/SetObserver";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::SetObserver>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::SetObserver_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::SetObserver_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::SetObserver>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::SetObserver_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::SetObserver_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::SetObserver>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::SetObserver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::SetObserver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__TRAITS_HPP_