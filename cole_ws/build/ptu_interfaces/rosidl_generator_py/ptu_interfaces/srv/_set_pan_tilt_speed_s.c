// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ptu_interfaces:srv/SetPanTiltSpeed.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__struct.h"
#include "ptu_interfaces/srv/detail/set_pan_tilt_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ptu_interfaces__srv__set_pan_tilt_speed__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ptu_interfaces.srv._set_pan_tilt_speed.SetPanTiltSpeed_Request", full_classname_dest, 62) == 0);
  }
  ptu_interfaces__srv__SetPanTiltSpeed_Request * ros_message = _ros_message;
  {  // pan_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "pan_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pan_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tilt_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tilt_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ptu_interfaces__srv__set_pan_tilt_speed__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPanTiltSpeed_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ptu_interfaces.srv._set_pan_tilt_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPanTiltSpeed_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ptu_interfaces__srv__SetPanTiltSpeed_Request * ros_message = (ptu_interfaces__srv__SetPanTiltSpeed_Request *)raw_ros_message;
  {  // pan_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pan_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pan_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tilt_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "ptu_interfaces/srv/detail/set_pan_tilt_speed__struct.h"
// already included above
// #include "ptu_interfaces/srv/detail/set_pan_tilt_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ptu_interfaces__srv__set_pan_tilt_speed__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ptu_interfaces.srv._set_pan_tilt_speed.SetPanTiltSpeed_Response", full_classname_dest, 63) == 0);
  }
  ptu_interfaces__srv__SetPanTiltSpeed_Response * ros_message = _ros_message;
  {  // ret
    PyObject * field = PyObject_GetAttrString(_pymsg, "ret");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ret = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ptu_interfaces__srv__set_pan_tilt_speed__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPanTiltSpeed_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ptu_interfaces.srv._set_pan_tilt_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPanTiltSpeed_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ptu_interfaces__srv__SetPanTiltSpeed_Response * ros_message = (ptu_interfaces__srv__SetPanTiltSpeed_Response *)raw_ros_message;
  {  // ret
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ret ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ret", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
