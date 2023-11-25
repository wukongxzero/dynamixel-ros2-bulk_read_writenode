// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SyncGetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__STRUCT_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request __declspec(deprecated)
#endif

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SyncGetPosition_Request_
{
  using Type = SyncGetPosition_Request_<ContainerAllocator>;

  explicit SyncGetPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id1 = 0;
      this->id2 = 0;
      this->id3 = 0;
      this->id4 = 0;
    }
  }

  explicit SyncGetPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id1 = 0;
      this->id2 = 0;
      this->id3 = 0;
      this->id4 = 0;
    }
  }

  // field types and members
  using _id1_type =
    uint8_t;
  _id1_type id1;
  using _id2_type =
    uint8_t;
  _id2_type id2;
  using _id3_type =
    uint8_t;
  _id3_type id3;
  using _id4_type =
    uint8_t;
  _id4_type id4;

  // setters for named parameter idiom
  Type & set__id1(
    const uint8_t & _arg)
  {
    this->id1 = _arg;
    return *this;
  }
  Type & set__id2(
    const uint8_t & _arg)
  {
    this->id2 = _arg;
    return *this;
  }
  Type & set__id3(
    const uint8_t & _arg)
  {
    this->id3 = _arg;
    return *this;
  }
  Type & set__id4(
    const uint8_t & _arg)
  {
    this->id4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Request
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncGetPosition_Request_ & other) const
  {
    if (this->id1 != other.id1) {
      return false;
    }
    if (this->id2 != other.id2) {
      return false;
    }
    if (this->id3 != other.id3) {
      return false;
    }
    if (this->id4 != other.id4) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncGetPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncGetPosition_Request_

// alias to use template instance with default allocator
using SyncGetPosition_Request =
  dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response __declspec(deprecated)
#endif

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SyncGetPosition_Response_
{
  using Type = SyncGetPosition_Response_<ContainerAllocator>;

  explicit SyncGetPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position1 = 0l;
      this->position2 = 0l;
      this->position3 = 0l;
      this->position4 = 0l;
    }
  }

  explicit SyncGetPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position1 = 0l;
      this->position2 = 0l;
      this->position3 = 0l;
      this->position4 = 0l;
    }
  }

  // field types and members
  using _position1_type =
    int32_t;
  _position1_type position1;
  using _position2_type =
    int32_t;
  _position2_type position2;
  using _position3_type =
    int32_t;
  _position3_type position3;
  using _position4_type =
    int32_t;
  _position4_type position4;

  // setters for named parameter idiom
  Type & set__position1(
    const int32_t & _arg)
  {
    this->position1 = _arg;
    return *this;
  }
  Type & set__position2(
    const int32_t & _arg)
  {
    this->position2 = _arg;
    return *this;
  }
  Type & set__position3(
    const int32_t & _arg)
  {
    this->position3 = _arg;
    return *this;
  }
  Type & set__position4(
    const int32_t & _arg)
  {
    this->position4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__srv__SyncGetPosition_Response
    std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncGetPosition_Response_ & other) const
  {
    if (this->position1 != other.position1) {
      return false;
    }
    if (this->position2 != other.position2) {
      return false;
    }
    if (this->position3 != other.position3) {
      return false;
    }
    if (this->position4 != other.position4) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncGetPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncGetPosition_Response_

// alias to use template instance with default allocator
using SyncGetPosition_Response =
  dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

struct SyncGetPosition
{
  using Request = dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Request;
  using Response = dynamixel_sdk_custom_interfaces::srv::SyncGetPosition_Response;
};

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SYNC_GET_POSITION__STRUCT_HPP_
