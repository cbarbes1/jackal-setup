// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ptu_interfaces:action/SetPanTilt.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__STRUCT_H_
#define PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_Goal
{
  float pan;
  float tilt;
} ptu_interfaces__action__SetPanTilt_Goal;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_Goal.
typedef struct ptu_interfaces__action__SetPanTilt_Goal__Sequence
{
  ptu_interfaces__action__SetPanTilt_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_Result
{
  bool ret;
} ptu_interfaces__action__SetPanTilt_Result;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_Result.
typedef struct ptu_interfaces__action__SetPanTilt_Result__Sequence
{
  ptu_interfaces__action__SetPanTilt_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_Feedback
{
  float percentage_of_completing_pan;
  float percentage_of_completing_tilt;
} ptu_interfaces__action__SetPanTilt_Feedback;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_Feedback.
typedef struct ptu_interfaces__action__SetPanTilt_Feedback__Sequence
{
  ptu_interfaces__action__SetPanTilt_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ptu_interfaces__action__SetPanTilt_Goal goal;
} ptu_interfaces__action__SetPanTilt_SendGoal_Request;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_SendGoal_Request.
typedef struct ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence
{
  ptu_interfaces__action__SetPanTilt_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ptu_interfaces__action__SetPanTilt_SendGoal_Response;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_SendGoal_Response.
typedef struct ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence
{
  ptu_interfaces__action__SetPanTilt_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ptu_interfaces__action__SetPanTilt_GetResult_Request;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_GetResult_Request.
typedef struct ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence
{
  ptu_interfaces__action__SetPanTilt_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_GetResult_Response
{
  int8_t status;
  ptu_interfaces__action__SetPanTilt_Result result;
} ptu_interfaces__action__SetPanTilt_GetResult_Response;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_GetResult_Response.
typedef struct ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence
{
  ptu_interfaces__action__SetPanTilt_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"

/// Struct defined in action/SetPanTilt in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPanTilt_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ptu_interfaces__action__SetPanTilt_Feedback feedback;
} ptu_interfaces__action__SetPanTilt_FeedbackMessage;

// Struct for a sequence of ptu_interfaces__action__SetPanTilt_FeedbackMessage.
typedef struct ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence
{
  ptu_interfaces__action__SetPanTilt_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__STRUCT_H_
