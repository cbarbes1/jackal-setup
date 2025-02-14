// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:srv/GetLimits.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__BUILDER_HPP_
#define PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/srv/detail/get_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::GetLimits_Request>()
{
  return ::ptu_interfaces::srv::GetLimits_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLimits_Response_tilt_max
{
public:
  explicit Init_GetLimits_Response_tilt_max(::ptu_interfaces::srv::GetLimits_Response & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::srv::GetLimits_Response tilt_max(::ptu_interfaces::srv::GetLimits_Response::_tilt_max_type arg)
  {
    msg_.tilt_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::srv::GetLimits_Response msg_;
};

class Init_GetLimits_Response_pan_max
{
public:
  explicit Init_GetLimits_Response_pan_max(::ptu_interfaces::srv::GetLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetLimits_Response_tilt_max pan_max(::ptu_interfaces::srv::GetLimits_Response::_pan_max_type arg)
  {
    msg_.pan_max = std::move(arg);
    return Init_GetLimits_Response_tilt_max(msg_);
  }

private:
  ::ptu_interfaces::srv::GetLimits_Response msg_;
};

class Init_GetLimits_Response_tilt_min
{
public:
  explicit Init_GetLimits_Response_tilt_min(::ptu_interfaces::srv::GetLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetLimits_Response_pan_max tilt_min(::ptu_interfaces::srv::GetLimits_Response::_tilt_min_type arg)
  {
    msg_.tilt_min = std::move(arg);
    return Init_GetLimits_Response_pan_max(msg_);
  }

private:
  ::ptu_interfaces::srv::GetLimits_Response msg_;
};

class Init_GetLimits_Response_pan_min
{
public:
  Init_GetLimits_Response_pan_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLimits_Response_tilt_min pan_min(::ptu_interfaces::srv::GetLimits_Response::_pan_min_type arg)
  {
    msg_.pan_min = std::move(arg);
    return Init_GetLimits_Response_tilt_min(msg_);
  }

private:
  ::ptu_interfaces::srv::GetLimits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::srv::GetLimits_Response>()
{
  return ptu_interfaces::srv::builder::Init_GetLimits_Response_pan_min();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__BUILDER_HPP_
