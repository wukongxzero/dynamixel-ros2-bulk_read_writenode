// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SyncGetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/sync_get_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SyncGetPosition_Request_id4
{
public:
  explicit Init_SyncGetPosition_Request_id4(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request id4(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request::_id4_type arg)
  {
    msg_.id4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request msg_;
};

class Init_SyncGetPosition_Request_id3
{
public:
  explicit Init_SyncGetPosition_Request_id3(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SyncGetPosition_Request_id4 id3(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request::_id3_type arg)
  {
    msg_.id3 = std::move(arg);
    return Init_SyncGetPosition_Request_id4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request msg_;
};

class Init_SyncGetPosition_Request_id2
{
public:
  explicit Init_SyncGetPosition_Request_id2(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SyncGetPosition_Request_id3 id2(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request::_id2_type arg)
  {
    msg_.id2 = std::move(arg);
    return Init_SyncGetPosition_Request_id3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request msg_;
};

class Init_SyncGetPosition_Request_id1
{
public:
  Init_SyncGetPosition_Request_id1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncGetPosition_Request_id2 id1(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request::_id1_type arg)
  {
    msg_.id1 = std::move(arg);
    return Init_SyncGetPosition_Request_id2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SyncGetPosition_Request_id1();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SyncGetPosition_Response_position4
{
public:
  explicit Init_SyncGetPosition_Response_position4(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response position4(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response::_position4_type arg)
  {
    msg_.position4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response msg_;
};

class Init_SyncGetPosition_Response_position3
{
public:
  explicit Init_SyncGetPosition_Response_position3(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response & msg)
  : msg_(msg)
  {}
  Init_SyncGetPosition_Response_position4 position3(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response::_position3_type arg)
  {
    msg_.position3 = std::move(arg);
    return Init_SyncGetPosition_Response_position4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response msg_;
};

class Init_SyncGetPosition_Response_position2
{
public:
  explicit Init_SyncGetPosition_Response_position2(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response & msg)
  : msg_(msg)
  {}
  Init_SyncGetPosition_Response_position3 position2(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response::_position2_type arg)
  {
    msg_.position2 = std::move(arg);
    return Init_SyncGetPosition_Response_position3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response msg_;
};

class Init_SyncGetPosition_Response_position1
{
public:
  Init_SyncGetPosition_Response_position1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncGetPosition_Response_position2 position1(::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response::_position1_type arg)
  {
    msg_.position1 = std::move(arg);
    return Init_SyncGetPosition_Response_position2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SyncGetPosition_Response_position1();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__BUILDER_HPP_
