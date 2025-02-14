// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ptu_interfaces:action/SetTilt.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__ACTION__DETAIL__SET_TILT__TRAITS_HPP_
#define PTU_INTERFACES__ACTION__DETAIL__SET_TILT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ptu_interfaces/action/detail/set_tilt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_Goal & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_Goal>()
{
  return "ptu_interfaces::action::SetTilt_Goal";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_Goal>()
{
  return "ptu_interfaces/action/SetTilt_Goal";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_Result & msg,
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
  const SetTilt_Result & msg,
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

inline std::string to_yaml(const SetTilt_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_Result & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_Result>()
{
  return "ptu_interfaces::action::SetTilt_Result";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_Result>()
{
  return "ptu_interfaces/action/SetTilt_Result";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: percentage_of_completing
  {
    out << "percentage_of_completing: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage_of_completing, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: percentage_of_completing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage_of_completing: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage_of_completing, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_Feedback & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_Feedback>()
{
  return "ptu_interfaces::action::SetTilt_Feedback";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_Feedback>()
{
  return "ptu_interfaces/action/SetTilt_Feedback";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ptu_interfaces/action/detail/set_tilt__traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_SendGoal_Request & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_SendGoal_Request>()
{
  return "ptu_interfaces::action::SetTilt_SendGoal_Request";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_SendGoal_Request>()
{
  return "ptu_interfaces/action/SetTilt_SendGoal_Request";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ptu_interfaces::action::SetTilt_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ptu_interfaces::action::SetTilt_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_SendGoal_Response & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_SendGoal_Response>()
{
  return "ptu_interfaces::action::SetTilt_SendGoal_Response";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_SendGoal_Response>()
{
  return "ptu_interfaces/action/SetTilt_SendGoal_Response";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_SendGoal>()
{
  return "ptu_interfaces::action::SetTilt_SendGoal";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_SendGoal>()
{
  return "ptu_interfaces/action/SetTilt_SendGoal";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ptu_interfaces::action::SetTilt_SendGoal_Request>::value &&
    has_fixed_size<ptu_interfaces::action::SetTilt_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ptu_interfaces::action::SetTilt_SendGoal_Request>::value &&
    has_bounded_size<ptu_interfaces::action::SetTilt_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ptu_interfaces::action::SetTilt_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ptu_interfaces::action::SetTilt_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ptu_interfaces::action::SetTilt_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_GetResult_Request & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_GetResult_Request>()
{
  return "ptu_interfaces::action::SetTilt_GetResult_Request";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_GetResult_Request>()
{
  return "ptu_interfaces/action/SetTilt_GetResult_Request";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_GetResult_Response & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_GetResult_Response>()
{
  return "ptu_interfaces::action::SetTilt_GetResult_Response";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_GetResult_Response>()
{
  return "ptu_interfaces/action/SetTilt_GetResult_Response";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ptu_interfaces::action::SetTilt_Result>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ptu_interfaces::action::SetTilt_Result>::value> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_GetResult>()
{
  return "ptu_interfaces::action::SetTilt_GetResult";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_GetResult>()
{
  return "ptu_interfaces/action/SetTilt_GetResult";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ptu_interfaces::action::SetTilt_GetResult_Request>::value &&
    has_fixed_size<ptu_interfaces::action::SetTilt_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ptu_interfaces::action::SetTilt_GetResult_Request>::value &&
    has_bounded_size<ptu_interfaces::action::SetTilt_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ptu_interfaces::action::SetTilt_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ptu_interfaces::action::SetTilt_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ptu_interfaces::action::SetTilt_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__traits.hpp"

namespace ptu_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const SetTilt_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTilt_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTilt_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ptu_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ptu_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ptu_interfaces::action::SetTilt_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ptu_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ptu_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ptu_interfaces::action::SetTilt_FeedbackMessage & msg)
{
  return ptu_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ptu_interfaces::action::SetTilt_FeedbackMessage>()
{
  return "ptu_interfaces::action::SetTilt_FeedbackMessage";
}

template<>
inline const char * name<ptu_interfaces::action::SetTilt_FeedbackMessage>()
{
  return "ptu_interfaces/action/SetTilt_FeedbackMessage";
}

template<>
struct has_fixed_size<ptu_interfaces::action::SetTilt_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ptu_interfaces::action::SetTilt_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ptu_interfaces::action::SetTilt_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ptu_interfaces::action::SetTilt_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ptu_interfaces::action::SetTilt_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ptu_interfaces::action::SetTilt>
  : std::true_type
{
};

template<>
struct is_action_goal<ptu_interfaces::action::SetTilt_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ptu_interfaces::action::SetTilt_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ptu_interfaces::action::SetTilt_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PTU_INTERFACES__ACTION__DETAIL__SET_TILT__TRAITS_HPP_
