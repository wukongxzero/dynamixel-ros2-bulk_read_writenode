// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_BulkGetItem_Request_item4
{
public:
  explicit Init_BulkGetItem_Request_item4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request item4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_item4_type arg)
  {
    msg_.item4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_item3
{
public:
  explicit Init_BulkGetItem_Request_item3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_item4 item3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_item3_type arg)
  {
    msg_.item3 = std::move(arg);
    return Init_BulkGetItem_Request_item4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_item2
{
public:
  explicit Init_BulkGetItem_Request_item2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_item3 item2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_item2_type arg)
  {
    msg_.item2 = std::move(arg);
    return Init_BulkGetItem_Request_item3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_item1
{
public:
  explicit Init_BulkGetItem_Request_item1(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_item2 item1(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_item1_type arg)
  {
    msg_.item1 = std::move(arg);
    return Init_BulkGetItem_Request_item2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_id4
{
public:
  explicit Init_BulkGetItem_Request_id4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_item1 id4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_id4_type arg)
  {
    msg_.id4 = std::move(arg);
    return Init_BulkGetItem_Request_item1(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_id3
{
public:
  explicit Init_BulkGetItem_Request_id3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_id4 id3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_id3_type arg)
  {
    msg_.id3 = std::move(arg);
    return Init_BulkGetItem_Request_id4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_id2
{
public:
  explicit Init_BulkGetItem_Request_id2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Request_id3 id2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_id2_type arg)
  {
    msg_.id2 = std::move(arg);
    return Init_BulkGetItem_Request_id3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

class Init_BulkGetItem_Request_id1
{
public:
  Init_BulkGetItem_Request_id1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulkGetItem_Request_id2 id1(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request::_id1_type arg)
  {
    msg_.id1 = std::move(arg);
    return Init_BulkGetItem_Request_id2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_BulkGetItem_Request_id1();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_BulkGetItem_Response_value4
{
public:
  explicit Init_BulkGetItem_Response_value4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response value4(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response::_value4_type arg)
  {
    msg_.value4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response msg_;
};

class Init_BulkGetItem_Response_value3
{
public:
  explicit Init_BulkGetItem_Response_value3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Response_value4 value3(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response::_value3_type arg)
  {
    msg_.value3 = std::move(arg);
    return Init_BulkGetItem_Response_value4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response msg_;
};

class Init_BulkGetItem_Response_value2
{
public:
  explicit Init_BulkGetItem_Response_value2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response & msg)
  : msg_(msg)
  {}
  Init_BulkGetItem_Response_value3 value2(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response::_value2_type arg)
  {
    msg_.value2 = std::move(arg);
    return Init_BulkGetItem_Response_value3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response msg_;
};

class Init_BulkGetItem_Response_value1
{
public:
  Init_BulkGetItem_Response_value1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulkGetItem_Response_value2 value1(::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response::_value1_type arg)
  {
    msg_.value1 = std::move(arg);
    return Init_BulkGetItem_Response_value2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_BulkGetItem_Response_value1();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__BUILDER_HPP_
