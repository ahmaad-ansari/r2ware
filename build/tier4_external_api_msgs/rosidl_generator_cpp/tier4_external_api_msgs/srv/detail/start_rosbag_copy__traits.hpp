// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:srv/StartRosbagCopy.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__START_ROSBAG_COPY__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__START_ROSBAG_COPY__TRAITS_HPP_

#include "tier4_external_api_msgs/srv/detail/start_rosbag_copy__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::StartRosbagCopy_Request>()
{
  return "tier4_external_api_msgs::srv::StartRosbagCopy_Request";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::StartRosbagCopy_Request>()
{
  return "tier4_external_api_msgs/srv/StartRosbagCopy_Request";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::StartRosbagCopy_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::StartRosbagCopy_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::srv::StartRosbagCopy_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::StartRosbagCopy_Response>()
{
  return "tier4_external_api_msgs::srv::StartRosbagCopy_Response";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::StartRosbagCopy_Response>()
{
  return "tier4_external_api_msgs/srv/StartRosbagCopy_Response";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::StartRosbagCopy_Response>
  : std::integral_constant<bool, has_fixed_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::StartRosbagCopy_Response>
  : std::integral_constant<bool, has_bounded_size<tier4_external_api_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<tier4_external_api_msgs::srv::StartRosbagCopy_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::srv::StartRosbagCopy>()
{
  return "tier4_external_api_msgs::srv::StartRosbagCopy";
}

template<>
inline const char * name<tier4_external_api_msgs::srv::StartRosbagCopy>()
{
  return "tier4_external_api_msgs/srv/StartRosbagCopy";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::srv::StartRosbagCopy>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_external_api_msgs::srv::StartRosbagCopy_Request>::value &&
    has_fixed_size<tier4_external_api_msgs::srv::StartRosbagCopy_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_external_api_msgs::srv::StartRosbagCopy>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_external_api_msgs::srv::StartRosbagCopy_Request>::value &&
    has_bounded_size<tier4_external_api_msgs::srv::StartRosbagCopy_Response>::value
  >
{
};

template<>
struct is_service<tier4_external_api_msgs::srv::StartRosbagCopy>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_external_api_msgs::srv::StartRosbagCopy_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_external_api_msgs::srv::StartRosbagCopy_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__START_ROSBAG_COPY__TRAITS_HPP_
