// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/BulkSetItem.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__BULK_SET_ITEM__STRUCT_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__BULK_SET_ITEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamixel_sdk_custom_interfaces__msg__BulkSetItem __attribute__((deprecated))
#else
# define DEPRECATED__dynamixel_sdk_custom_interfaces__msg__BulkSetItem __declspec(deprecated)
#endif

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BulkSetItem_
{
  using Type = BulkSetItem_<ContainerAllocator>;

  explicit BulkSetItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id1 = 0;
      this->id2 = 0;
      this->id3 = 0;
      this->id4 = 0;
      this->item1 = "";
      this->item2 = "";
      this->item3 = "";
      this->item4 = "";
      this->value1 = 0l;
      this->value2 = 0l;
      this->value3 = 0l;
      this->value4 = 0l;
    }
  }

  explicit BulkSetItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item1(_alloc),
    item2(_alloc),
    item3(_alloc),
    item4(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id1 = 0;
      this->id2 = 0;
      this->id3 = 0;
      this->id4 = 0;
      this->item1 = "";
      this->item2 = "";
      this->item3 = "";
      this->item4 = "";
      this->value1 = 0l;
      this->value2 = 0l;
      this->value3 = 0l;
      this->value4 = 0l;
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
  using _item1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item1_type item1;
  using _item2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item2_type item2;
  using _item3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item3_type item3;
  using _item4_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item4_type item4;
  using _value1_type =
    int32_t;
  _value1_type value1;
  using _value2_type =
    int32_t;
  _value2_type value2;
  using _value3_type =
    int32_t;
  _value3_type value3;
  using _value4_type =
    int32_t;
  _value4_type value4;

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
  Type & set__item1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item1 = _arg;
    return *this;
  }
  Type & set__item2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item2 = _arg;
    return *this;
  }
  Type & set__item3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item3 = _arg;
    return *this;
  }
  Type & set__item4(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item4 = _arg;
    return *this;
  }
  Type & set__value1(
    const int32_t & _arg)
  {
    this->value1 = _arg;
    return *this;
  }
  Type & set__value2(
    const int32_t & _arg)
  {
    this->value2 = _arg;
    return *this;
  }
  Type & set__value3(
    const int32_t & _arg)
  {
    this->value3 = _arg;
    return *this;
  }
  Type & set__value4(
    const int32_t & _arg)
  {
    this->value4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__msg__BulkSetItem
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamixel_sdk_custom_interfaces__msg__BulkSetItem
    std::shared_ptr<dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BulkSetItem_ & other) const
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
    if (this->item1 != other.item1) {
      return false;
    }
    if (this->item2 != other.item2) {
      return false;
    }
    if (this->item3 != other.item3) {
      return false;
    }
    if (this->item4 != other.item4) {
      return false;
    }
    if (this->value1 != other.value1) {
      return false;
    }
    if (this->value2 != other.value2) {
      return false;
    }
    if (this->value3 != other.value3) {
      return false;
    }
    if (this->value4 != other.value4) {
      return false;
    }
    return true;
  }
  bool operator!=(const BulkSetItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BulkSetItem_

// alias to use template instance with default allocator
using BulkSetItem =
  dynamixel_sdk_custom_interfaces::msg::BulkSetItem_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__BULK_SET_ITEM__STRUCT_HPP_
