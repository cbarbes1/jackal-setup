// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:srv/SetPan.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_PAN__BUILDER_HPP_
#define PTU_INTERFACES__SRV__DETAIL__SET_PAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/srv/detail/set_pan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPan_Request_pan
{
public:
  Init_SetPan_Request_pan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::srv::SetPan_Request pan(::ptu_interfaces::srv::SetPan_Request::_pan_type arg)
  {
    msg_.pan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetPan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetPan_Request>()
{
  return ptu_interfaces::srv::builder::Init_SetPan_Request_pan();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPan_Response_ret
{
public:
  Init_SetPan_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::srv::SetPan_Response ret(::ptu_interfaces::srv::SetPan_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetPan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetPan_Response>()
{
  return ptu_interfaces::srv::builder::Init_SetPan_Response_ret();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_PAN__BUILDER_HPP_
