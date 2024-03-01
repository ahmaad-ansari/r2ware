// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_system_msgs:msg/DiagnosticGraph.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_system_msgs/msg/detail/diagnostic_graph__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_system_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DiagnosticGraph_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_system_msgs::msg::DiagnosticGraph(_init);
}

void DiagnosticGraph_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_system_msgs::msg::DiagnosticGraph *>(message_memory);
  typed_message->~DiagnosticGraph();
}

size_t size_function__DiagnosticGraph__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tier4_system_msgs::msg::DiagnosticNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DiagnosticGraph__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tier4_system_msgs::msg::DiagnosticNode> *>(untyped_member);
  return &member[index];
}

void * get_function__DiagnosticGraph__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tier4_system_msgs::msg::DiagnosticNode> *>(untyped_member);
  return &member[index];
}

void resize_function__DiagnosticGraph__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tier4_system_msgs::msg::DiagnosticNode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DiagnosticGraph_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs::msg::DiagnosticGraph, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_system_msgs::msg::DiagnosticNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs::msg::DiagnosticGraph, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__DiagnosticGraph__nodes,  // size() function pointer
    get_const_function__DiagnosticGraph__nodes,  // get_const(index) function pointer
    get_function__DiagnosticGraph__nodes,  // get(index) function pointer
    resize_function__DiagnosticGraph__nodes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DiagnosticGraph_message_members = {
  "tier4_system_msgs::msg",  // message namespace
  "DiagnosticGraph",  // message name
  2,  // number of fields
  sizeof(tier4_system_msgs::msg::DiagnosticGraph),
  DiagnosticGraph_message_member_array,  // message members
  DiagnosticGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticGraph_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DiagnosticGraph_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DiagnosticGraph_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_system_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_system_msgs::msg::DiagnosticGraph>()
{
  return &::tier4_system_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticGraph_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_system_msgs, msg, DiagnosticGraph)() {
  return &::tier4_system_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticGraph_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
