// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/SyncGetPosition.idl
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
#include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__struct.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_sdk_custom_interfaces__srv__sync_get_position__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("dynamixel_sdk_custom_interfaces.srv._sync_get_position.SyncGetPosition_Request", full_classname_dest, 78) == 0);
  }
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * ros_message = _ros_message;
  {  // id1
    PyObject * field = PyObject_GetAttrString(_pymsg, "id1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id2
    PyObject * field = PyObject_GetAttrString(_pymsg, "id2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id3
    PyObject * field = PyObject_GetAttrString(_pymsg, "id3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id4
    PyObject * field = PyObject_GetAttrString(_pymsg, "id4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_sdk_custom_interfaces__srv__sync_get_position__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SyncGetPosition_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_sdk_custom_interfaces.srv._sync_get_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SyncGetPosition_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request * ros_message = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request *)raw_ros_message;
  {  // id1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id4", field);
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
// #include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_sdk_custom_interfaces__srv__sync_get_position__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
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
    assert(strncmp("dynamixel_sdk_custom_interfaces.srv._sync_get_position.SyncGetPosition_Response", full_classname_dest, 79) == 0);
  }
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * ros_message = _ros_message;
  {  // position1
    PyObject * field = PyObject_GetAttrString(_pymsg, "position1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position2
    PyObject * field = PyObject_GetAttrString(_pymsg, "position2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position3
    PyObject * field = PyObject_GetAttrString(_pymsg, "position3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // position4
    PyObject * field = PyObject_GetAttrString(_pymsg, "position4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->position4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_sdk_custom_interfaces__srv__sync_get_position__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SyncGetPosition_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_sdk_custom_interfaces.srv._sync_get_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SyncGetPosition_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response * ros_message = (dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response *)raw_ros_message;
  {  // position1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->position4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
