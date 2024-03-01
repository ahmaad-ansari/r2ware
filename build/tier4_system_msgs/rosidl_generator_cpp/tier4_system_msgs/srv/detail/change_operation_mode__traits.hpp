// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:srv/ChangeOperationMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__TRAITS_HPP_

#include "tier4_system_msgs/srv/detail/change_operation_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeOperationMode_Request>()
{
  return "tier4_system_msgs::srv::ChangeOperationMode_Request";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeOperationMode_Request>()
{
  return "tier4_system_msgs/srv/ChangeOperationMode_Request";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeOperationMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeOperationMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_system_msgs::srv::ChangeOperationMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeOperationMode_Response>()
{
  return "tier4_system_msgs::srv::ChangeOperationMode_Response";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeOperationMode_Response>()
{
  return "tier4_system_msgs/srv/ChangeOperationMode_Response";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeOperationMode_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeOperationMode_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_common_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_system_msgs::srv::ChangeOperationMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::srv::ChangeOperationMode>()
{
  return "tier4_system_msgs::srv::ChangeOperationMode";
}

template<>
inline const char * name<tier4_system_msgs::srv::ChangeOperationMode>()
{
  return "tier4_system_msgs/srv/ChangeOperationMode";
}

template<>
struct has_fixed_size<tier4_system_msgs::srv::ChangeOperationMode>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_system_msgs::srv::ChangeOperationMode_Request>::value &&
    has_fixed_size<tier4_system_msgs::srv::ChangeOperationMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_system_msgs::srv::ChangeOperationMode>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_system_msgs::srv::ChangeOperationMode_Request>::value &&
    has_bounded_size<tier4_system_msgs::srv::ChangeOperationMode_Response>::value
  >
{
};

template<>
struct is_service<tier4_system_msgs::srv::ChangeOperationMode>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_system_msgs::srv::ChangeOperationMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_system_msgs::srv::ChangeOperationMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__SRV__DETAIL__CHANGE_OPERATION_MODE__TRAITS_HPP_
