// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ptu_interfaces:srv/SetPanTiltSpeed.idl
// generated code does not contain a copyright notice
#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ptu_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__struct.h"
#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPanTiltSpeed_Request__ros_msg_type = ptu_interfaces__srv__SetPanTiltSpeed_Request;

static bool _SetPanTiltSpeed_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPanTiltSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetPanTiltSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pan_speed
  {
    cdr << ros_message->pan_speed;
  }

  // Field name: tilt_speed
  {
    cdr << ros_message->tilt_speed;
  }

  return true;
}

static bool _SetPanTiltSpeed_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPanTiltSpeed_Request__ros_msg_type * ros_message = static_cast<_SetPanTiltSpeed_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pan_speed
  {
    cdr >> ros_message->pan_speed;
  }

  // Field name: tilt_speed
  {
    cdr >> ros_message->tilt_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ptu_interfaces
size_t get_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPanTiltSpeed_Request__ros_msg_type * ros_message = static_cast<const _SetPanTiltSpeed_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pan_speed
  {
    size_t item_size = sizeof(ros_message->pan_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tilt_speed
  {
    size_t item_size = sizeof(ros_message->tilt_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPanTiltSpeed_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ptu_interfaces
size_t max_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pan_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tilt_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ptu_interfaces__srv__SetPanTiltSpeed_Request;
    is_plain =
      (
      offsetof(DataType, tilt_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetPanTiltSpeed_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPanTiltSpeed_Request = {
  "ptu_interfaces::srv",
  "SetPanTiltSpeed_Request",
  _SetPanTiltSpeed_Request__cdr_serialize,
  _SetPanTiltSpeed_Request__cdr_deserialize,
  _SetPanTiltSpeed_Request__get_serialized_size,
  _SetPanTiltSpeed_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPanTiltSpeed_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPanTiltSpeed_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, srv, SetPanTiltSpeed_Request)() {
  return &_SetPanTiltSpeed_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ptu_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ptu_interfaces/srv/detail/set_pan_tilt_speed__struct.h"
// already included above
// #include "ptu_interfaces/srv/detail/set_pan_tilt_speed__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPanTiltSpeed_Response__ros_msg_type = ptu_interfaces__srv__SetPanTiltSpeed_Response;

static bool _SetPanTiltSpeed_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPanTiltSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetPanTiltSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << (ros_message->ret ? true : false);
  }

  return true;
}

static bool _SetPanTiltSpeed_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPanTiltSpeed_Response__ros_msg_type * ros_message = static_cast<_SetPanTiltSpeed_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ret = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ptu_interfaces
size_t get_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPanTiltSpeed_Response__ros_msg_type * ros_message = static_cast<const _SetPanTiltSpeed_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPanTiltSpeed_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ptu_interfaces
size_t max_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: ret
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ptu_interfaces__srv__SetPanTiltSpeed_Response;
    is_plain =
      (
      offsetof(DataType, ret) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetPanTiltSpeed_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ptu_interfaces__srv__SetPanTiltSpeed_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPanTiltSpeed_Response = {
  "ptu_interfaces::srv",
  "SetPanTiltSpeed_Response",
  _SetPanTiltSpeed_Response__cdr_serialize,
  _SetPanTiltSpeed_Response__cdr_deserialize,
  _SetPanTiltSpeed_Response__get_serialized_size,
  _SetPanTiltSpeed_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPanTiltSpeed_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPanTiltSpeed_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, srv, SetPanTiltSpeed_Response)() {
  return &_SetPanTiltSpeed_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ptu_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ptu_interfaces/srv/set_pan_tilt_speed.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPanTiltSpeed__callbacks = {
  "ptu_interfaces::srv",
  "SetPanTiltSpeed",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, srv, SetPanTiltSpeed_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, srv, SetPanTiltSpeed_Response)(),
};

static rosidl_service_type_support_t SetPanTiltSpeed__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPanTiltSpeed__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, srv, SetPanTiltSpeed)() {
  return &SetPanTiltSpeed__handle;
}

#if defined(__cplusplus)
}
#endif
