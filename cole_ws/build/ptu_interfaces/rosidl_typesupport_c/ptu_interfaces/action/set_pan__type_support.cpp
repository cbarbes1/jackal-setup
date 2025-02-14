// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ptu_interfaces:action/SetPan.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ptu_interfaces/action/detail/set_pan__struct.h"
#include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_Goal_type_support_ids_t;

static const _SetPan_Goal_type_support_ids_t _SetPan_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_Goal_type_support_symbol_names_t _SetPan_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_Goal)),
  }
};

typedef struct _SetPan_Goal_type_support_data_t
{
  void * data[2];
} _SetPan_Goal_type_support_data_t;

static _SetPan_Goal_type_support_data_t _SetPan_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_Goal_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_Goal_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_Goal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_Result_type_support_ids_t;

static const _SetPan_Result_type_support_ids_t _SetPan_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_Result_type_support_symbol_names_t _SetPan_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_Result)),
  }
};

typedef struct _SetPan_Result_type_support_data_t
{
  void * data[2];
} _SetPan_Result_type_support_data_t;

static _SetPan_Result_type_support_data_t _SetPan_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_Result_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_Result_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_Result)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_Feedback_type_support_ids_t;

static const _SetPan_Feedback_type_support_ids_t _SetPan_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_Feedback_type_support_symbol_names_t _SetPan_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_Feedback)),
  }
};

typedef struct _SetPan_Feedback_type_support_data_t
{
  void * data[2];
} _SetPan_Feedback_type_support_data_t;

static _SetPan_Feedback_type_support_data_t _SetPan_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_Feedback_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_Feedback_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_Feedback)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_SendGoal_Request_type_support_ids_t;

static const _SetPan_SendGoal_Request_type_support_ids_t _SetPan_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_SendGoal_Request_type_support_symbol_names_t _SetPan_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_SendGoal_Request)),
  }
};

typedef struct _SetPan_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetPan_SendGoal_Request_type_support_data_t;

static _SetPan_SendGoal_Request_type_support_data_t _SetPan_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_SendGoal_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_SendGoal_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_SendGoal_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_SendGoal_Response_type_support_ids_t;

static const _SetPan_SendGoal_Response_type_support_ids_t _SetPan_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_SendGoal_Response_type_support_symbol_names_t _SetPan_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_SendGoal_Response)),
  }
};

typedef struct _SetPan_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetPan_SendGoal_Response_type_support_data_t;

static _SetPan_SendGoal_Response_type_support_data_t _SetPan_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_SendGoal_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_SendGoal_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_SendGoal_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_SendGoal_type_support_ids_t;

static const _SetPan_SendGoal_type_support_ids_t _SetPan_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_SendGoal_type_support_symbol_names_t _SetPan_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_SendGoal)),
  }
};

typedef struct _SetPan_SendGoal_type_support_data_t
{
  void * data[2];
} _SetPan_SendGoal_type_support_data_t;

static _SetPan_SendGoal_type_support_data_t _SetPan_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_SendGoal_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetPan_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetPan_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPan_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_SendGoal_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_SendGoal)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_GetResult_Request_type_support_ids_t;

static const _SetPan_GetResult_Request_type_support_ids_t _SetPan_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_GetResult_Request_type_support_symbol_names_t _SetPan_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_GetResult_Request)),
  }
};

typedef struct _SetPan_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetPan_GetResult_Request_type_support_data_t;

static _SetPan_GetResult_Request_type_support_data_t _SetPan_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_GetResult_Request_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_GetResult_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_GetResult_Request)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_GetResult_Response_type_support_ids_t;

static const _SetPan_GetResult_Response_type_support_ids_t _SetPan_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_GetResult_Response_type_support_symbol_names_t _SetPan_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_GetResult_Response)),
  }
};

typedef struct _SetPan_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetPan_GetResult_Response_type_support_data_t;

static _SetPan_GetResult_Response_type_support_data_t _SetPan_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_GetResult_Response_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_GetResult_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_GetResult_Response)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_GetResult_type_support_ids_t;

static const _SetPan_GetResult_type_support_ids_t _SetPan_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_GetResult_type_support_symbol_names_t _SetPan_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_GetResult)),
  }
};

typedef struct _SetPan_GetResult_type_support_data_t
{
  void * data[2];
} _SetPan_GetResult_type_support_data_t;

static _SetPan_GetResult_type_support_data_t _SetPan_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_GetResult_service_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetPan_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetPan_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetPan_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_GetResult_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_GetResult)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__struct.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"
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

typedef struct _SetPan_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetPan_FeedbackMessage_type_support_ids_t;

static const _SetPan_FeedbackMessage_type_support_ids_t _SetPan_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetPan_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetPan_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetPan_FeedbackMessage_type_support_symbol_names_t _SetPan_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ptu_interfaces, action, SetPan_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ptu_interfaces, action, SetPan_FeedbackMessage)),
  }
};

typedef struct _SetPan_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetPan_FeedbackMessage_type_support_data_t;

static _SetPan_FeedbackMessage_type_support_data_t _SetPan_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetPan_FeedbackMessage_message_typesupport_map = {
  2,
  "ptu_interfaces",
  &_SetPan_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetPan_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetPan_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetPan_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetPan_FeedbackMessage_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ptu_interfaces, action, SetPan_FeedbackMessage)() {
  return &::ptu_interfaces::action::rosidl_typesupport_c::SetPan_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "ptu_interfaces/action/set_pan.h"
// already included above
// #include "ptu_interfaces/action/detail/set_pan__type_support.h"

static rosidl_action_type_support_t _ptu_interfaces__action__SetPan__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, ptu_interfaces, action, SetPan)()
{
  // Thread-safe by always writing the same values to the static struct
  _ptu_interfaces__action__SetPan__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPan_SendGoal)();
  _ptu_interfaces__action__SetPan__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPan_GetResult)();
  _ptu_interfaces__action__SetPan__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _ptu_interfaces__action__SetPan__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, ptu_interfaces, action, SetPan_FeedbackMessage)();
  _ptu_interfaces__action__SetPan__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_ptu_interfaces__action__SetPan__typesupport_c;
}

#ifdef __cplusplus
}
#endif
