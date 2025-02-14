// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_H_
#define PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PTU in the package ptu_interfaces.
typedef struct ptu_interfaces__msg__PTU
{
  std_msgs__msg__Header header;
  float pan;
  float tilt;
  float pan_speed;
  float tilt_speed;
} ptu_interfaces__msg__PTU;

// Struct for a sequence of ptu_interfaces__msg__PTU.
typedef struct ptu_interfaces__msg__PTU__Sequence
{
  ptu_interfaces__msg__PTU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ptu_interfaces__msg__PTU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_H_
