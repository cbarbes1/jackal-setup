// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ptu_interfaces/msg/detail/ptu__rosidl_typesupport_introspection_c.h"
#include "ptu_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ptu_interfaces/msg/detail/ptu__functions.h"
#include "ptu_interfaces/msg/detail/ptu__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ptu_interfaces__msg__PTU__init(message_memory);
}

void ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_fini_function(void * message_memory)
{
  ptu_interfaces__msg__PTU__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ptu_interfaces__msg__PTU, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ptu_interfaces__msg__PTU, pan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tilt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ptu_interfaces__msg__PTU, tilt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pan_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ptu_interfaces__msg__PTU, pan_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tilt_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ptu_interfaces__msg__PTU, tilt_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_members = {
  "ptu_interfaces__msg",  // message namespace
  "PTU",  // message name
  5,  // number of fields
  sizeof(ptu_interfaces__msg__PTU),
  ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_member_array,  // message members
  ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_init_function,  // function to initialize message memory (memory has to be allocated)
  ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_type_support_handle = {
  0,
  &ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ptu_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, msg, PTU)() {
  ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_type_support_handle.typesupport_identifier) {
    ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ptu_interfaces__msg__PTU__rosidl_typesupport_introspection_c__PTU_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
