// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:srv/SetPanTiltSpeed.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__BUILDER_HPP_
#define PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPanTiltSpeed_Request_tilt_speed
{
public:
  explicit Init_SetPanTiltSpeed_Request_tilt_speed(::ptu_interfaces::srv::SetPanTiltSpeed_Request & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::srv::SetPanTiltSpeed_Request tilt_speed(::ptu_interfaces::srv::SetPanTiltSpeed_Request::_tilt_speed_type arg)
  {
    msg_.tilt_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetPanTiltSpeed_Request msg_;
};

class Init_SetPanTiltSpeed_Request_pan_speed
{
public:
  Init_SetPanTiltSpeed_Request_pan_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPanTiltSpeed_Request_tilt_speed pan_speed(::ptu_interfaces::srv::SetPanTiltSpeed_Request::_pan_speed_type arg)
  {
    msg_.pan_speed = std::move(arg);
    return Init_SetPanTiltSpeed_Request_tilt_speed(msg_);
  }

private:
  ::ptu_interfaces::srv::SetPanTiltSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetPanTiltSpeed_Request>()
{
  return ptu_interfaces::srv::builder::Init_SetPanTiltSpeed_Request_pan_speed();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetPanTiltSpeed_Response_ret
{
public:
  Init_SetPanTiltSpeed_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::srv::SetPanTiltSpeed_Response ret(::ptu_interfaces::srv::SetPanTiltSpeed_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::SetPanTiltSpeed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::SetPanTiltSpeed_Response>()
{
  return ptu_interfaces::srv::builder::Init_SetPanTiltSpeed_Response_ret();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__BUILDER_HPP_
