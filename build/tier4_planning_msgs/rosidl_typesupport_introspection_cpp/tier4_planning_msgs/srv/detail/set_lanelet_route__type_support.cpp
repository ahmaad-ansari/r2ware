// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_planning_msgs:srv/SetLaneletRoute.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_planning_msgs/srv/detail/set_lanelet_route__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_planning_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetLaneletRoute_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_planning_msgs::srv::SetLaneletRoute_Request(_init);
}

void SetLaneletRoute_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_planning_msgs::srv::SetLaneletRoute_Request *>(message_memory);
  typed_message->~SetLaneletRoute_Request();
}

size_t size_function__SetLaneletRoute_Request__segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLaneletRoute_Request__segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLaneletRoute_Request__segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  return &member[index];
}

void resize_function__SetLaneletRoute_Request__segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_planning_msgs::msg::LaneletSegment> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetLaneletRoute_Request_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Request, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Request, goal_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_planning_msgs::msg::LaneletSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Request, segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLaneletRoute_Request__segments,  // size() function pointer
    get_const_function__SetLaneletRoute_Request__segments,  // get_const(index) function pointer
    get_function__SetLaneletRoute_Request__segments,  // get(index) function pointer
    resize_function__SetLaneletRoute_Request__segments  // resize(index) function pointer
  },
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Request, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "allow_modification",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Request, allow_modification),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetLaneletRoute_Request_message_members = {
  "tier4_planning_msgs::srv",  // message namespace
  "SetLaneletRoute_Request",  // message name
  5,  // number of fields
  sizeof(tier4_planning_msgs::srv::SetLaneletRoute_Request),
  SetLaneletRoute_Request_message_member_array,  // message members
  SetLaneletRoute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLaneletRoute_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetLaneletRoute_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLaneletRoute_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_planning_msgs::srv::SetLaneletRoute_Request>()
{
  return &::tier4_planning_msgs::srv::rosidl_typesupport_introspection_cpp::SetLaneletRoute_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_planning_msgs, srv, SetLaneletRoute_Request)() {
  return &::tier4_planning_msgs::srv::rosidl_typesupport_introspection_cpp::SetLaneletRoute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_planning_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetLaneletRoute_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_planning_msgs::srv::SetLaneletRoute_Response(_init);
}

void SetLaneletRoute_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_planning_msgs::srv::SetLaneletRoute_Response *>(message_memory);
  typed_message->~SetLaneletRoute_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetLaneletRoute_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_common_msgs::msg::ResponseStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs::srv::SetLaneletRoute_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetLaneletRoute_Response_message_members = {
  "tier4_planning_msgs::srv",  // message namespace
  "SetLaneletRoute_Response",  // message name
  1,  // number of fields
  sizeof(tier4_planning_msgs::srv::SetLaneletRoute_Response),
  SetLaneletRoute_Response_message_member_array,  // message members
  SetLaneletRoute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLaneletRoute_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetLaneletRoute_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLaneletRoute_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_planning_msgs::srv::SetLaneletRoute_Response>()
{
  return &::tier4_planning_msgs::srv::rosidl_typesupport_introspection_cpp::SetLaneletRoute_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_planning_msgs, srv, SetLaneletRoute_Response)() {
  return &::tier4_planning_msgs::srv::rosidl_typesupport_introspection_cpp::SetLaneletRoute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tier4_planning_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetLaneletRoute_service_members = {
  "tier4_planning_msgs::srv",  // service namespace
  "SetLaneletRoute",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tier4_planning_msgs::srv::SetLaneletRoute>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetLaneletRoute_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLaneletRoute_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tier4_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tier4_planning_msgs::srv::SetLaneletRoute>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tier4_planning_msgs::srv::rosidl_typesupport_introspection_cpp::SetLaneletRoute_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tier4_planning_msgs::srv::SetLaneletRoute_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tier4_planning_msgs::srv::SetLaneletRoute_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_planning_msgs, srv, SetLaneletRoute)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tier4_planning_msgs::srv::SetLaneletRoute>();
}

#ifdef __cplusplus
}
#endif
