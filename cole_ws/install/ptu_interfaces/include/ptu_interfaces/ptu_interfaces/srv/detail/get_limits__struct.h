// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ptu_interfaces:srv/GetLimits.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_H_
#define PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLimits in the package ptu_interfaces.
typedef struct ptu_interfaces__srv__GetLimits_Request
{
  uint8_t structure_needs_at_least_one_member;
} ptu_interfaces__srv__GetLimits_Request;

// Struct for a sequence of ptu_interfaces__srv__GetLimits_Request.
typedef struct ptu_interfaces__srv__GetLimits_Request__Sequence
{
  ptu_interfaces__srv__GetLimits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__srv__GetLimits_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetLimits in the package ptu_interfaces.
typedef struct ptu_interfaces__srv__GetLimits_Response
{
  float pan_min;
  float tilt_min;
  float pan_max;
  float tilt_max;
} ptu_interfaces__srv__GetLimits_Response;

// Struct for a sequence of ptu_interfaces__srv__GetLimits_Response.
typedef struct ptu_interfaces__srv__GetLimits_Response__Sequence
{
  ptu_interfaces__srv__GetLimits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__srv__GetLimits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_H_
