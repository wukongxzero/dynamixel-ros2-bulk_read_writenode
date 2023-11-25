// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SyncSetPosition_position4
{
public:
  explicit Init_SyncSetPosition_position4(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition position4(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_position4_type arg)
  {
    msg_.position4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_position3
{
public:
  explicit Init_SyncSetPosition_position3(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_position4 position3(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_position3_type arg)
  {
    msg_.position3 = std::move(arg);
    return Init_SyncSetPosition_position4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_position2
{
public:
  explicit Init_SyncSetPosition_position2(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_position3 position2(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_position2_type arg)
  {
    msg_.position2 = std::move(arg);
    return Init_SyncSetPosition_position3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_position1
{
public:
  explicit Init_SyncSetPosition_position1(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_position2 position1(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_position1_type arg)
  {
    msg_.position1 = std::move(arg);
    return Init_SyncSetPosition_position2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_id4
{
public:
  explicit Init_SyncSetPosition_id4(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_position1 id4(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_id4_type arg)
  {
    msg_.id4 = std::move(arg);
    return Init_SyncSetPosition_position1(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_id3
{
public:
  explicit Init_SyncSetPosition_id3(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_id4 id3(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_id3_type arg)
  {
    msg_.id3 = std::move(arg);
    return Init_SyncSetPosition_id4(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_id2
{
public:
  explicit Init_SyncSetPosition_id2(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
  : msg_(msg)
  {}
  Init_SyncSetPosition_id3 id2(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_id2_type arg)
  {
    msg_.id2 = std::move(arg);
    return Init_SyncSetPosition_id3(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

class Init_SyncSetPosition_id1
{
public:
  Init_SyncSetPosition_id1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncSetPosition_id2 id1(::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition::_id1_type arg)
  {
    msg_.id1 = std::move(arg);
    return Init_SyncSetPosition_id2(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>()
{
  return dynamixel_sdk_custom_interfaces::msg::builder::Init_SyncSetPosition_id1();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__BUILDER_HPP_
