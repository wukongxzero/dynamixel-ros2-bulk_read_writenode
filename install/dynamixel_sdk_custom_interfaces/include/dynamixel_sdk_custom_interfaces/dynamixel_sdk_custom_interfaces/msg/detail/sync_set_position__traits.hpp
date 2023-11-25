// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SyncSetPosition.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__TRAITS_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_custom_interfaces/msg/detail/sync_set_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SyncSetPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: id1
  {
    out << "id1: ";
    rosidl_generator_traits::value_to_yaml(msg.id1, out);
    out << ", ";
  }

  // member: id2
  {
    out << "id2: ";
    rosidl_generator_traits::value_to_yaml(msg.id2, out);
    out << ", ";
  }

  // member: id3
  {
    out << "id3: ";
    rosidl_generator_traits::value_to_yaml(msg.id3, out);
    out << ", ";
  }

  // member: id4
  {
    out << "id4: ";
    rosidl_generator_traits::value_to_yaml(msg.id4, out);
    out << ", ";
  }

  // member: position1
  {
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << ", ";
  }

  // member: position2
  {
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << ", ";
  }

  // member: position3
  {
    out << "position3: ";
    rosidl_generator_traits::value_to_yaml(msg.position3, out);
    out << ", ";
  }

  // member: position4
  {
    out << "position4: ";
    rosidl_generator_traits::value_to_yaml(msg.position4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SyncSetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id1: ";
    rosidl_generator_traits::value_to_yaml(msg.id1, out);
    out << "\n";
  }

  // member: id2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id2: ";
    rosidl_generator_traits::value_to_yaml(msg.id2, out);
    out << "\n";
  }

  // member: id3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id3: ";
    rosidl_generator_traits::value_to_yaml(msg.id3, out);
    out << "\n";
  }

  // member: id4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id4: ";
    rosidl_generator_traits::value_to_yaml(msg.id4, out);
    out << "\n";
  }

  // member: position1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << "\n";
  }

  // member: position2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << "\n";
  }

  // member: position3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position3: ";
    rosidl_generator_traits::value_to_yaml(msg.position3, out);
    out << "\n";
  }

  // member: position4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position4: ";
    rosidl_generator_traits::value_to_yaml(msg.position4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SyncSetPosition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_custom_interfaces::msg::SyncSetPosition & msg)
{
  return dynamixel_sdk_custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>()
{
  return "dynamixel_sdk_custom_interfaces::msg::SyncSetPosition";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>()
{
  return "dynamixel_sdk_custom_interfaces/msg/SyncSetPosition";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_custom_interfaces::msg::SyncSetPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__MSG__DETAIL__SYNC_SET_POSITION__TRAITS_HPP_
