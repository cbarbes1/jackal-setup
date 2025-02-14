// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ptu_interfaces:srv/SetPan.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_PAN__TRAITS_HPP_
#define PTU_INTERFACES__SRV__DETAIL__SET_PAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ptu_interfaces/srv/detail/set_pan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ptu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pan
  {
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPan_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::srv::SetPan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::srv::SetPan_Request & msg)
{
  return ptu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::srv::SetPan_Request>()
{
  return "ptu_interfaces::srv::SetPan_Request";
}

template<>
inline const char * name<ptu_interfaces::srv::SetPan_Request>()
{
  return "ptu_interfaces/srv/SetPan_Request";
}

template<>
struct has_fixed_size<ptu_interfaces::srv::SetPan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ptu_interfaces::srv::SetPan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ptu_interfaces::srv::SetPan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ptu_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPan_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::srv::SetPan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::srv::SetPan_Response & msg)
{
  return ptu_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::srv::SetPan_Response>()
{
  return "ptu_interfaces::srv::SetPan_Response";
}

template<>
inline const char * name<ptu_interfaces::srv::SetPan_Response>()
{
  return "ptu_interfaces/srv/SetPan_Response";
}

template<>
struct has_fixed_size<ptu_interfaces::srv::SetPan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ptu_interfaces::srv::SetPan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ptu_interfaces::srv::SetPan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ptu_interfaces::srv::SetPan>()
{
  return "ptu_interfaces::srv::SetPan";
}

template<>
inline const char * name<ptu_interfaces::srv::SetPan>()
{
  return "ptu_interfaces/srv/SetPan";
}

template<>
struct has_fixed_size<ptu_interfaces::srv::SetPan>
  : std::integral_constant<
    bool,
    has_fixed_size<ptu_interfaces::srv::SetPan_Request>::value &&
    has_fixed_size<ptu_interfaces::srv::SetPan_Response>::value
  >
{
};

template<>
struct has_bounded_size<ptu_interfaces::srv::SetPan>
  : std::integral_constant<
    bool,
    has_bounded_size<ptu_interfaces::srv::SetPan_Request>::value &&
    has_bounded_size<ptu_interfaces::srv::SetPan_Response>::value
  >
{
};

template<>
struct is_service<ptu_interfaces::srv::SetPan>
  : std::true_type
{
};

template<>
struct is_service_request<ptu_interfaces::srv::SetPan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ptu_interfaces::srv::SetPan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_PAN__TRAITS_HPP_
