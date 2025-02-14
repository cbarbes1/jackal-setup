// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__MSG__DETAIL__PTU__BUILDER_HPP_
#define PTU_INTERFACES__MSG__DETAIL__PTU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/msg/detail/ptu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace msg
{

namespace builder
{

class Init_PTU_tilt_speed
{
public:
  explicit Init_PTU_tilt_speed(::ptu_interfaces::msg::PTU & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::msg::PTU tilt_speed(::ptu_interfaces::msg::PTU::_tilt_speed_type arg)
  {
    msg_.tilt_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::msg::PTU msg_;
};

class Init_PTU_pan_speed
{
public:
  explicit Init_PTU_pan_speed(::ptu_interfaces::msg::PTU & msg)
  : msg_(msg)
  {}
  Init_PTU_tilt_speed pan_speed(::ptu_interfaces::msg::PTU::_pan_speed_type arg)
  {
    msg_.pan_speed = std::move(arg);
    return Init_PTU_tilt_speed(msg_);
  }

private:
  ::ptu_interfaces::msg::PTU msg_;
};

class Init_PTU_tilt
{
public:
  explicit Init_PTU_tilt(::ptu_interfaces::msg::PTU & msg)
  : msg_(msg)
  {}
  Init_PTU_pan_speed tilt(::ptu_interfaces::msg::PTU::_tilt_type arg)
  {
    msg_.tilt = std::move(arg);
    return Init_PTU_pan_speed(msg_);
  }

private:
  ::ptu_interfaces::msg::PTU msg_;
};

class Init_PTU_pan
{
public:
  explicit Init_PTU_pan(::ptu_interfaces::msg::PTU & msg)
  : msg_(msg)
  {}
  Init_PTU_tilt pan(::ptu_interfaces::msg::PTU::_pan_type arg)
  {
    msg_.pan = std::move(arg);
    return Init_PTU_tilt(msg_);
  }

private:
  ::ptu_interfaces::msg::PTU msg_;
};

class Init_PTU_header
{
public:
  Init_PTU_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PTU_pan header(::ptu_interfaces::msg::PTU::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PTU_pan(msg_);
  }

private:
  ::ptu_interfaces::msg::PTU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::msg::PTU>()
{
  return ptu_interfaces::msg::builder::Init_PTU_header();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__MSG__DETAIL__PTU__BUILDER_HPP_
