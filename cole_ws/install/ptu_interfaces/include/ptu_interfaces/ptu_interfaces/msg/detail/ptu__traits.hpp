// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__MSG__DETAIL__PTU__TRAITS_HPP_
#define PTU_INTERFACES__MSG__DETAIL__PTU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ptu_interfaces/msg/detail/ptu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace ptu_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PTU & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pan
  {
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << ", ";
  }

  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << ", ";
  }

  // member: pan_speed
  {
    out << "pan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_speed, out);
    out << ", ";
  }

  // member: tilt_speed
  {
    out << "tilt_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PTU & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << "\n";
  }

  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }

  // member: pan_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_speed, out);
    out << "\n";
  }

  // member: tilt_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PTU & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::msg::PTU & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::msg::PTU & msg)
{
  return ptu_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::msg::PTU>()
{
  return "ptu_interfaces::msg::PTU";
}

template<>
inline const char * name<ptu_interfaces::msg::PTU>()
{
  return "ptu_interfaces/msg/PTU";
}

template<>
struct has_fixed_size<ptu_interfaces::msg::PTU>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::msg::PTU>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ptu_interfaces::msg::PTU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PTU_INTERFACES__MSG__DETAIL__PTU__TRAITS_HPP_
