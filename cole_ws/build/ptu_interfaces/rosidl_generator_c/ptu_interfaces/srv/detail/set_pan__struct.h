// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ptu_interfaces:srv/SetPan.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_PAN__STRUCT_H_
#define PTU_INTERFACES__SRV__DETAIL__SET_PAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__srv__SetPan_Request
{
  float pan;
} ptu_interfaces__srv__SetPan_Request;

// Struct for a sequence of ptu_interfaces__srv__SetPan_Request.
typedef struct ptu_interfaces__srv__SetPan_Request__Sequence
{
  ptu_interfaces__srv__SetPan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__srv__SetPan_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPan in the package ptu_interfaces.
typedef struct ptu_interfaces__srv__SetPan_Response
{
  bool ret;
} ptu_interfaces__srv__SetPan_Response;

// Struct for a sequence of ptu_interfaces__srv__SetPan_Response.
typedef struct ptu_interfaces__srv__SetPan_Response__Sequence
{
  ptu_interfaces__srv__SetPan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__srv__SetPan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_PAN__STRUCT_H_
