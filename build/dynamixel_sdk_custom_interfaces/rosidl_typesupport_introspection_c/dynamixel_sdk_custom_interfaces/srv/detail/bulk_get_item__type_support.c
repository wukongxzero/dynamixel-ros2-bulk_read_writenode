// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__rosidl_typesupport_introspection_c.h"
#include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__functions.h"
#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.h"


// Include directives for member types
// Member `item1`
// Member `item2`
// Member `item3`
// Member `item4`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__init(message_memory);
}

void dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_fini_function(void * message_memory)
{
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_member_array[8] = {
  {
    "id1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, id1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, id2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, id3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, id4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, item1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, item2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, item3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request, item4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_members = {
  "dynamixel_sdk_custom_interfaces__srv",  // message namespace
  "BulkGetItem_Request",  // message name
  8,  // number of fields
  sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request),
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_member_array,  // message members
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_type_support_handle = {
  0,
  &dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_sdk_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Request)() {
  if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_type_support_handle.typesupport_identifier) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Request__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__functions.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__init(message_memory);
}

void dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_fini_function(void * message_memory)
{
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_member_array[4] = {
  {
    "value1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response, value1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response, value2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response, value3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response, value4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_members = {
  "dynamixel_sdk_custom_interfaces__srv",  // message namespace
  "BulkGetItem_Response",  // message name
  4,  // number of fields
  sizeof(dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response),
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_member_array,  // message members
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_type_support_handle = {
  0,
  &dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_sdk_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Response)() {
  if (!dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_type_support_handle.typesupport_identifier) {
    dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dynamixel_sdk_custom_interfaces__srv__BulkGetItem_Response__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_members = {
  "dynamixel_sdk_custom_interfaces__srv",  // service namespace
  "BulkGetItem",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_Request_message_type_support_handle,
  NULL  // response message
  // dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_Response_message_type_support_handle
};

static rosidl_service_type_support_t dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_type_support_handle = {
  0,
  &dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dynamixel_sdk_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem)() {
  if (!dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_type_support_handle.typesupport_identifier) {
    dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dynamixel_sdk_custom_interfaces, srv, BulkGetItem_Response)()->data;
  }

  return &dynamixel_sdk_custom_interfaces__srv__detail__bulk_get_item__rosidl_typesupport_introspection_c__BulkGetItem_service_type_support_handle;
}
