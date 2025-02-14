// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ptu_interfaces:action/SetPan.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__ACTION__DETAIL__SET_PAN__BUILDER_HPP_
#define PTU_INTERFACES__ACTION__DETAIL__SET_PAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ptu_interfaces/action/detail/set_pan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_Goal_pan
{
public:
  Init_SetPan_Goal_pan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::action::SetPan_Goal pan(::ptu_interfaces::action::SetPan_Goal::_pan_type arg)
  {
    msg_.pan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_Goal>()
{
  return ptu_interfaces::action::builder::Init_SetPan_Goal_pan();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_Result_ret
{
public:
  Init_SetPan_Result_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::action::SetPan_Result ret(::ptu_interfaces::action::SetPan_Result::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_Result>()
{
  return ptu_interfaces::action::builder::Init_SetPan_Result_ret();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_Feedback_percentage_of_completing
{
public:
  Init_SetPan_Feedback_percentage_of_completing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::action::SetPan_Feedback percentage_of_completing(::ptu_interfaces::action::SetPan_Feedback::_percentage_of_completing_type arg)
  {
    msg_.percentage_of_completing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_Feedback>()
{
  return ptu_interfaces::action::builder::Init_SetPan_Feedback_percentage_of_completing();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_SendGoal_Request_goal
{
public:
  explicit Init_SetPan_SendGoal_Request_goal(::ptu_interfaces::action::SetPan_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::action::SetPan_SendGoal_Request goal(::ptu_interfaces::action::SetPan_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_SendGoal_Request msg_;
};

class Init_SetPan_SendGoal_Request_goal_id
{
public:
  Init_SetPan_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPan_SendGoal_Request_goal goal_id(::ptu_interfaces::action::SetPan_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetPan_SendGoal_Request_goal(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_SendGoal_Request>()
{
  return ptu_interfaces::action::builder::Init_SetPan_SendGoal_Request_goal_id();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_SendGoal_Response_stamp
{
public:
  explicit Init_SetPan_SendGoal_Response_stamp(::ptu_interfaces::action::SetPan_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::action::SetPan_SendGoal_Response stamp(::ptu_interfaces::action::SetPan_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_SendGoal_Response msg_;
};

class Init_SetPan_SendGoal_Response_accepted
{
public:
  Init_SetPan_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPan_SendGoal_Response_stamp accepted(::ptu_interfaces::action::SetPan_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetPan_SendGoal_Response_stamp(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_SendGoal_Response>()
{
  return ptu_interfaces::action::builder::Init_SetPan_SendGoal_Response_accepted();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_GetResult_Request_goal_id
{
public:
  Init_SetPan_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ptu_interfaces::action::SetPan_GetResult_Request goal_id(::ptu_interfaces::action::SetPan_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_GetResult_Request>()
{
  return ptu_interfaces::action::builder::Init_SetPan_GetResult_Request_goal_id();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_GetResult_Response_result
{
public:
  explicit Init_SetPan_GetResult_Response_result(::ptu_interfaces::action::SetPan_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::action::SetPan_GetResult_Response result(::ptu_interfaces::action::SetPan_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_GetResult_Response msg_;
};

class Init_SetPan_GetResult_Response_status
{
public:
  Init_SetPan_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPan_GetResult_Response_result status(::ptu_interfaces::action::SetPan_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetPan_GetResult_Response_result(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_GetResult_Response>()
{
  return ptu_interfaces::action::builder::Init_SetPan_GetResult_Response_status();
}

}  // namespace ptu_interfaces


namespace ptu_interfaces
{

namespace action
{

namespace builder
{

class Init_SetPan_FeedbackMessage_feedback
{
public:
  explicit Init_SetPan_FeedbackMessage_feedback(::ptu_interfaces::action::SetPan_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ptu_interfaces::action::SetPan_FeedbackMessage feedback(::ptu_interfaces::action::SetPan_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_FeedbackMessage msg_;
};

class Init_SetPan_FeedbackMessage_goal_id
{
public:
  Init_SetPan_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPan_FeedbackMessage_feedback goal_id(::ptu_interfaces::action::SetPan_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetPan_FeedbackMessage_feedback(msg_);
  }

private:
  ::ptu_interfaces::action::SetPan_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ptu_interfaces::action::SetPan_FeedbackMessage>()
{
  return ptu_interfaces::action::builder::Init_SetPan_FeedbackMessage_goal_id();
}

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__ACTION__DETAIL__SET_PAN__BUILDER_HPP_
