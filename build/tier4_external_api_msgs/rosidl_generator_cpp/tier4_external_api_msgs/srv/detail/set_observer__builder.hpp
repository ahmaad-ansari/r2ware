// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/SetObserver.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__BUILDER_HPP_

#include "tier4_external_api_msgs/srv/detail/set_observer__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObserver_Request_mode
{
public:
  Init_SetObserver_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetObserver_Request mode(::tier4_external_api_msgs::srv::SetObserver_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetObserver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetObserver_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetObserver_Request_mode();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObserver_Response_status
{
public:
  Init_SetObserver_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::SetObserver_Response status(::tier4_external_api_msgs::srv::SetObserver_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::SetObserver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::SetObserver_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_SetObserver_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_OBSERVER__BUILDER_HPP_
