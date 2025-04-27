// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project3_interfaces:msg/PersonTrack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_track.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__TRAITS_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project3_interfaces/msg/detail/person_track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'first_seen'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace project3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PersonTrack & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: first_seen
  {
    out << "first_seen: ";
    to_flow_style_yaml(msg.first_seen, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PersonTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: first_seen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_seen:\n";
    to_block_style_yaml(msg.first_seen, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PersonTrack & msg, bool use_flow_style = false)
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

}  // namespace project3_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use project3_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const project3_interfaces::msg::PersonTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  project3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const project3_interfaces::msg::PersonTrack & msg)
{
  return project3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<project3_interfaces::msg::PersonTrack>()
{
  return "project3_interfaces::msg::PersonTrack";
}

template<>
inline const char * name<project3_interfaces::msg::PersonTrack>()
{
  return "project3_interfaces/msg/PersonTrack";
}

template<>
struct has_fixed_size<project3_interfaces::msg::PersonTrack>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<project3_interfaces::msg::PersonTrack>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<project3_interfaces::msg::PersonTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__TRAITS_HPP_
