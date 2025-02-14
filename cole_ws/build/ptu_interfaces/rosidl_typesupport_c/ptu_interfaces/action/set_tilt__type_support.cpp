// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ptu_interfaces:action/SetTilt.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ptu_interfaces/action/detail/set_tilt__struct.h"
#include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_Goal_type_support_ids_t;

static const _SetTilt_Goal_type_support_ids_t _SetTilt_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_Goal_type_support_symbol_names_t _SetTilt_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_Goal)),
  }
};

typedef struct _SetTilt_Goal_type_support_data_t
{
  void * data[2];
} _SetTilt_Goal_type_support_data_t;

static _SetTilt_Goal_type_support_data_t _SetTilt_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_Goal_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_Goal_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_Goal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_Result_type_support_ids_t;

static const _SetTilt_Result_type_support_ids_t _SetTilt_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_Result_type_support_symbol_names_t _SetTilt_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_Result)),
  }
};

typedef struct _SetTilt_Result_type_support_data_t
{
  void * data[2];
} _SetTilt_Result_type_support_data_t;

static _SetTilt_Result_type_support_data_t _SetTilt_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_Result_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_Result_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_Result)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_Feedback_type_support_ids_t;

static const _SetTilt_Feedback_type_support_ids_t _SetTilt_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_Feedback_type_support_symbol_names_t _SetTilt_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_Feedback)),
  }
};

typedef struct _SetTilt_Feedback_type_support_data_t
{
  void * data[2];
} _SetTilt_Feedback_type_support_data_t;

static _SetTilt_Feedback_type_support_data_t _SetTilt_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_Feedback_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_Feedback_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_Feedback)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_SendGoal_Request_type_support_ids_t;

static const _SetTilt_SendGoal_Request_type_support_ids_t _SetTilt_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_SendGoal_Request_type_support_symbol_names_t _SetTilt_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_SendGoal_Request)),
  }
};

typedef struct _SetTilt_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetTilt_SendGoal_Request_type_support_data_t;

static _SetTilt_SendGoal_Request_type_support_data_t _SetTilt_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_SendGoal_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_SendGoal_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_SendGoal_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_SendGoal_Response_type_support_ids_t;

static const _SetTilt_SendGoal_Response_type_support_ids_t _SetTilt_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_SendGoal_Response_type_support_symbol_names_t _SetTilt_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_SendGoal_Response)),
  }
};

typedef struct _SetTilt_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetTilt_SendGoal_Response_type_support_data_t;

static _SetTilt_SendGoal_Response_type_support_data_t _SetTilt_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_SendGoal_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_SendGoal_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_SendGoal_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_SendGoal_type_support_ids_t;

static const _SetTilt_SendGoal_type_support_ids_t _SetTilt_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_SendGoal_type_support_symbol_names_t _SetTilt_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_SendGoal)),
  }
};

typedef struct _SetTilt_SendGoal_type_support_data_t
{
  void * data[2];
} _SetTilt_SendGoal_type_support_data_t;

static _SetTilt_SendGoal_type_support_data_t _SetTilt_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_SendGoal_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetTilt_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_SendGoal_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_SendGoal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_GetResult_Request_type_support_ids_t;

static const _SetTilt_GetResult_Request_type_support_ids_t _SetTilt_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_GetResult_Request_type_support_symbol_names_t _SetTilt_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_GetResult_Request)),
  }
};

typedef struct _SetTilt_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetTilt_GetResult_Request_type_support_data_t;

static _SetTilt_GetResult_Request_type_support_data_t _SetTilt_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_GetResult_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_GetResult_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_GetResult_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_GetResult_Response_type_support_ids_t;

static const _SetTilt_GetResult_Response_type_support_ids_t _SetTilt_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_GetResult_Response_type_support_symbol_names_t _SetTilt_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_GetResult_Response)),
  }
};

typedef struct _SetTilt_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetTilt_GetResult_Response_type_support_data_t;

static _SetTilt_GetResult_Response_type_support_data_t _SetTilt_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_GetResult_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_GetResult_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_GetResult_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_GetResult_type_support_ids_t;

static const _SetTilt_GetResult_type_support_ids_t _SetTilt_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_GetResult_type_support_symbol_names_t _SetTilt_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_GetResult)),
  }
};

typedef struct _SetTilt_GetResult_type_support_data_t
{
  void * data[2];
} _SetTilt_GetResult_type_support_data_t;

static _SetTilt_GetResult_type_support_data_t _SetTilt_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_GetResult_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetTilt_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_GetResult_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_GetResult)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"
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

typedef struct _SetTilt_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTilt_FeedbackMessage_type_support_ids_t;

static const _SetTilt_FeedbackMessage_type_support_ids_t _SetTilt_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTilt_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTilt_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTilt_FeedbackMessage_type_support_symbol_names_t _SetTilt_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetTilt_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetTilt_FeedbackMessage)),
  }
};

typedef struct _SetTilt_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetTilt_FeedbackMessage_type_support_data_t;

static _SetTilt_FeedbackMessage_type_support_data_t _SetTilt_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTilt_FeedbackMessage_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetTilt_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetTilt_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetTilt_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTilt_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTilt_FeedbackMessage_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetTilt_FeedbackMessage)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetTilt_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ptu_interfaces/action/set_tilt.h"
// already included above
// #include "ptu_interfaces/action/detail/set_tilt__type_support.h"

static rosidl_action_type_support_t _ptu_interfaces__action__SetTilt__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ptu_interfaces, action, SetTilt)()
{
  // Thread-safe by always writing the same values to the static struct
  _ptu_interfaces__action__SetTilt__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetTilt_SendGoal)();
  _ptu_interfaces__action__SetTilt__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetTilt_GetResult)();
  _ptu_interfaces__action__SetTilt__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ptu_interfaces__action__SetTilt__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetTilt_FeedbackMessage)();
  _ptu_interfaces__action__SetTilt__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ptu_interfaces__action__SetTilt__typesupport_c;
}

#ifdef __cplusplus
}
#endif
