// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dynamixel_sdk_custom_interfaces:msg/BulkSetItem.idl
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
#include "dynamixel_sdk_custom_interfaces/msg/detail/bulk_set_item__struct.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/bulk_set_item__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool dynamixel_sdk_custom_interfaces__msg__bulk_set_item__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dynamixel_sdk_custom_interfaces.msg._bulk_set_item.BulkSetItem", full_classname_dest, 62) == 0);
  }
  dynamixel_sdk_custom_interfaces__msg__BulkSetItem * ros_message = _ros_message;
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
  {  // item1
    PyObject * field = PyObject_GetAttrString(_pymsg, "item1");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->item1, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // item2
    PyObject * field = PyObject_GetAttrString(_pymsg, "item2");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->item2, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // item3
    PyObject * field = PyObject_GetAttrString(_pymsg, "item3");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->item3, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // item4
    PyObject * field = PyObject_GetAttrString(_pymsg, "item4");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->item4, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // value1
    PyObject * field = PyObject_GetAttrString(_pymsg, "value1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value2
    PyObject * field = PyObject_GetAttrString(_pymsg, "value2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value3
    PyObject * field = PyObject_GetAttrString(_pymsg, "value3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value4
    PyObject * field = PyObject_GetAttrString(_pymsg, "value4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dynamixel_sdk_custom_interfaces__msg__bulk_set_item__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BulkSetItem */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dynamixel_sdk_custom_interfaces.msg._bulk_set_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BulkSetItem");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dynamixel_sdk_custom_interfaces__msg__BulkSetItem * ros_message = (dynamixel_sdk_custom_interfaces__msg__BulkSetItem *)raw_ros_message;
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
  {  // item1
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->item1.data,
      strlen(ros_message->item1.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item2
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->item2.data,
      strlen(ros_message->item2.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item3
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->item3.data,
      strlen(ros_message->item3.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item4
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->item4.data,
      strlen(ros_message->item4.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
