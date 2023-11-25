// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/BulkGetItem.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__TRAITS_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamixel_sdk_custom_interfaces/srv/detail/bulk_get_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BulkGetItem_Request & msg,
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

  // member: item1
  {
    out << "item1: ";
    rosidl_generator_traits::value_to_yaml(msg.item1, out);
    out << ", ";
  }

  // member: item2
  {
    out << "item2: ";
    rosidl_generator_traits::value_to_yaml(msg.item2, out);
    out << ", ";
  }

  // member: item3
  {
    out << "item3: ";
    rosidl_generator_traits::value_to_yaml(msg.item3, out);
    out << ", ";
  }

  // member: item4
  {
    out << "item4: ";
    rosidl_generator_traits::value_to_yaml(msg.item4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BulkGetItem_Request & msg,
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

  // member: item1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item1: ";
    rosidl_generator_traits::value_to_yaml(msg.item1, out);
    out << "\n";
  }

  // member: item2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item2: ";
    rosidl_generator_traits::value_to_yaml(msg.item2, out);
    out << "\n";
  }

  // member: item3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item3: ";
    rosidl_generator_traits::value_to_yaml(msg.item3, out);
    out << "\n";
  }

  // member: item4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item4: ";
    rosidl_generator_traits::value_to_yaml(msg.item4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BulkGetItem_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request & msg)
{
  return dynamixel_sdk_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>()
{
  return "dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>()
{
  return "dynamixel_sdk_custom_interfaces/srv/BulkGetItem_Request";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BulkGetItem_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: value1
  {
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << ", ";
  }

  // member: value2
  {
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << ", ";
  }

  // member: value3
  {
    out << "value3: ";
    rosidl_generator_traits::value_to_yaml(msg.value3, out);
    out << ", ";
  }

  // member: value4
  {
    out << "value4: ";
    rosidl_generator_traits::value_to_yaml(msg.value4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BulkGetItem_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << "\n";
  }

  // member: value2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << "\n";
  }

  // member: value3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value3: ";
    rosidl_generator_traits::value_to_yaml(msg.value3, out);
    out << "\n";
  }

  // member: value4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value4: ";
    rosidl_generator_traits::value_to_yaml(msg.value4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BulkGetItem_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamixel_sdk_custom_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamixel_sdk_custom_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response & msg)
{
  return dynamixel_sdk_custom_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>()
{
  return "dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>()
{
  return "dynamixel_sdk_custom_interfaces/srv/BulkGetItem_Response";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>()
{
  return "dynamixel_sdk_custom_interfaces::srv::BulkGetItem";
}

template<>
inline const char * name<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>()
{
  return "dynamixel_sdk_custom_interfaces/srv/BulkGetItem";
}

template<>
struct has_fixed_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>::value &&
    has_fixed_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>::value &&
    has_bounded_size<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>::value
  >
{
};

template<>
struct is_service<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>
  : std::true_type
{
};

template<>
struct is_service_request<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamixel_sdk_custom_interfaces::srv::BulkGetItem_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__BULK_GET_ITEM__TRAITS_HPP_
