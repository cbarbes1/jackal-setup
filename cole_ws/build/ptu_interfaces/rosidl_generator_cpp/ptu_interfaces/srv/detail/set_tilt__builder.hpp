// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:srv/SetTilt.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_TILT__BUILDER_HPP_
#define PTU_INTERFACES__SRV__DETAIL__SET_TILT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/srv/detail/set_tilt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTilt_Request_tilt
{
public:
  Init_SetTilt_Request_tilt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::srv::SetTilt_Request tilt(::ptu_interfaces::srv::SetTilt_Request::_tilt_type arg)
  {
    msg_.tilt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetTilt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetTilt_Request>()
{
  return ptu_interfaces::srv::builder::Init_SetTilt_Request_tilt();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTilt_Response_ret
{
public:
  Init_SetTilt_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::srv::SetTilt_Response ret(::ptu_interfaces::srv::SetTilt_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetTilt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetTilt_Response>()
{
  return ptu_interfaces::srv::builder::Init_SetTilt_Response_ret();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_TILT__BUILDER_HPP_
