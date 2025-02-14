// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ptu_interfaces:action/SetPan.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__ACTION__DETAIL__SET_PAN__STRUCT_H_
#define PTU_INTERFACES__ACTION__DETAIL__SET_PAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_Goal
{
  float pan;
} ptu_interfaces__action__SetPan_Goal;

// Struct for a sequence of ptu_interfaces__action__SetPan_Goal.
typedef struct ptu_interfaces__action__SetPan_Goal__Sequence
{
  ptu_interfaces__action__SetPan_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_Result
{
  bool ret;
} ptu_interfaces__action__SetPan_Result;

// Struct for a sequence of ptu_interfaces__action__SetPan_Result.
typedef struct ptu_interfaces__action__SetPan_Result__Sequence
{
  ptu_interfaces__action__SetPan_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_Feedback
{
  float percentage_of_completing;
} ptu_interfaces__action__SetPan_Feedback;

// Struct for a sequence of ptu_interfaces__action__SetPan_Feedback.
typedef struct ptu_interfaces__action__SetPan_Feedback__Sequence
{
  ptu_interfaces__action__SetPan_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ptu_interfaces/action/detail/set_pan__struct.h"

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ptu_interfaces__action__SetPan_Goal goal;
} ptu_interfaces__action__SetPan_SendGoal_Request;

// Struct for a sequence of ptu_interfaces__action__SetPan_SendGoal_Request.
typedef struct ptu_interfaces__action__SetPan_SendGoal_Request__Sequence
{
  ptu_interfaces__action__SetPan_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ptu_interfaces__action__SetPan_SendGoal_Response;

// Struct for a sequence of ptu_interfaces__action__SetPan_SendGoal_Response.
typedef struct ptu_interfaces__action__SetPan_SendGoal_Response__Sequence
{
  ptu_interfaces__action__SetPan_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ptu_interfaces__action__SetPan_GetResult_Request;

// Struct for a sequence of ptu_interfaces__action__SetPan_GetResult_Request.
typedef struct ptu_interfaces__action__SetPan_GetResult_Request__Sequence
{
  ptu_interfaces__action__SetPan_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_GetResult_Response
{
  int8_t status;
  ptu_interfaces__action__SetPan_Result result;
} ptu_interfaces__action__SetPan_GetResult_Response;

// Struct for a sequence of ptu_interfaces__action__SetPan_GetResult_Response.
typedef struct ptu_interfaces__action__SetPan_GetResult_Response__Sequence
{
  ptu_interfaces__action__SetPan_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"

/// Struct defined in action/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__action__SetPan_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ptu_interfaces__action__SetPan_Feedback feedback;
} ptu_interfaces__action__SetPan_FeedbackMessage;

// Struct for a sequence of ptu_interfaces__action__SetPan_FeedbackMessage.
typedef struct ptu_interfaces__action__SetPan_FeedbackMessage__Sequence
{
  ptu_interfaces__action__SetPan_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__action__SetPan_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__ACTION__DETAIL__SET_PAN__STRUCT_H_
