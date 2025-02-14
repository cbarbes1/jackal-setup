// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ptu_interfaces:action/SetPanTilt.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
#include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_Goal_type_support_ids_t;

static const _SetPanTilt_Goal_type_support_ids_t _SetPanTilt_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_Goal_type_support_symbol_names_t _SetPanTilt_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_Goal)),
  }
};

typedef struct _SetPanTilt_Goal_type_support_data_t
{
  void * data[2];
} _SetPanTilt_Goal_type_support_data_t;

static _SetPanTilt_Goal_type_support_data_t _SetPanTilt_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_Goal_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_Goal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_Result_type_support_ids_t;

static const _SetPanTilt_Result_type_support_ids_t _SetPanTilt_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_Result_type_support_symbol_names_t _SetPanTilt_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_Result)),
  }
};

typedef struct _SetPanTilt_Result_type_support_data_t
{
  void * data[2];
} _SetPanTilt_Result_type_support_data_t;

static _SetPanTilt_Result_type_support_data_t _SetPanTilt_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_Result_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_Result)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_Feedback_type_support_ids_t;

static const _SetPanTilt_Feedback_type_support_ids_t _SetPanTilt_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_Feedback_type_support_symbol_names_t _SetPanTilt_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_Feedback)),
  }
};

typedef struct _SetPanTilt_Feedback_type_support_data_t
{
  void * data[2];
} _SetPanTilt_Feedback_type_support_data_t;

static _SetPanTilt_Feedback_type_support_data_t _SetPanTilt_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_Feedback_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_Feedback)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_SendGoal_Request_type_support_ids_t;

static const _SetPanTilt_SendGoal_Request_type_support_ids_t _SetPanTilt_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_SendGoal_Request_type_support_symbol_names_t _SetPanTilt_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_SendGoal_Request)),
  }
};

typedef struct _SetPanTilt_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetPanTilt_SendGoal_Request_type_support_data_t;

static _SetPanTilt_SendGoal_Request_type_support_data_t _SetPanTilt_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_SendGoal_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_SendGoal_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_SendGoal_Response_type_support_ids_t;

static const _SetPanTilt_SendGoal_Response_type_support_ids_t _SetPanTilt_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_SendGoal_Response_type_support_symbol_names_t _SetPanTilt_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_SendGoal_Response)),
  }
};

typedef struct _SetPanTilt_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetPanTilt_SendGoal_Response_type_support_data_t;

static _SetPanTilt_SendGoal_Response_type_support_data_t _SetPanTilt_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_SendGoal_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_SendGoal_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_SendGoal_type_support_ids_t;

static const _SetPanTilt_SendGoal_type_support_ids_t _SetPanTilt_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_SendGoal_type_support_symbol_names_t _SetPanTilt_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_SendGoal)),
  }
};

typedef struct _SetPanTilt_SendGoal_type_support_data_t
{
  void * data[2];
} _SetPanTilt_SendGoal_type_support_data_t;

static _SetPanTilt_SendGoal_type_support_data_t _SetPanTilt_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_SendGoal_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPanTilt_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_SendGoal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_GetResult_Request_type_support_ids_t;

static const _SetPanTilt_GetResult_Request_type_support_ids_t _SetPanTilt_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_GetResult_Request_type_support_symbol_names_t _SetPanTilt_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_GetResult_Request)),
  }
};

typedef struct _SetPanTilt_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetPanTilt_GetResult_Request_type_support_data_t;

static _SetPanTilt_GetResult_Request_type_support_data_t _SetPanTilt_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_GetResult_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_GetResult_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_GetResult_Response_type_support_ids_t;

static const _SetPanTilt_GetResult_Response_type_support_ids_t _SetPanTilt_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_GetResult_Response_type_support_symbol_names_t _SetPanTilt_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_GetResult_Response)),
  }
};

typedef struct _SetPanTilt_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetPanTilt_GetResult_Response_type_support_data_t;

static _SetPanTilt_GetResult_Response_type_support_data_t _SetPanTilt_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_GetResult_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_GetResult_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_GetResult_type_support_ids_t;

static const _SetPanTilt_GetResult_type_support_ids_t _SetPanTilt_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_GetResult_type_support_symbol_names_t _SetPanTilt_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_GetResult)),
  }
};

typedef struct _SetPanTilt_GetResult_type_support_data_t
{
  void * data[2];
} _SetPanTilt_GetResult_type_support_data_t;

static _SetPanTilt_GetResult_type_support_data_t _SetPanTilt_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_GetResult_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPanTilt_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_GetResult)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ptu_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _SetPanTilt_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPanTilt_FeedbackMessage_type_support_ids_t;

static const _SetPanTilt_FeedbackMessage_type_support_ids_t _SetPanTilt_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPanTilt_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPanTilt_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPanTilt_FeedbackMessage_type_support_symbol_names_t _SetPanTilt_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPanTilt_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPanTilt_FeedbackMessage)),
  }
};

typedef struct _SetPanTilt_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetPanTilt_FeedbackMessage_type_support_data_t;

static _SetPanTilt_FeedbackMessage_type_support_data_t _SetPanTilt_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPanTilt_FeedbackMessage_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPanTilt_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetPanTilt_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetPanTilt_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPanTilt_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPanTilt_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace ptu_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_FeedbackMessage)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPanTilt_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ptu_interfaces/action/set_pan_tilt.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan_tilt__type_support.h"

static rosidl_action_type_support_t _ptu_interfaces__action__SetPanTilt__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt)()
{
  // Thread-safe by always writing the same values to the static struct
  _ptu_interfaces__action__SetPanTilt__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_SendGoal)();
  _ptu_interfaces__action__SetPanTilt__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_GetResult)();
  _ptu_interfaces__action__SetPanTilt__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ptu_interfaces__action__SetPanTilt__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPanTilt_FeedbackMessage)();
  _ptu_interfaces__action__SetPanTilt__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ptu_interfaces__action__SetPanTilt__typesupport_c;
}

#ifdef __cplusplus
}
#endif
