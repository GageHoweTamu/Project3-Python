// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_tracks.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__TRAITS_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "project3_interfaces/msg/detail/person_tracks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tracks'
#include "project3_interfaces/msg/detail/person_track__traits.hpp"

namespace project3_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PersonTracks & msg,
  std::ostream & out)
{
  out << "{";
  // member: tracks
  {
    if (msg.tracks.size() == 0) {
      out << "tracks: []";
    } else {
      out << "tracks: [";
      size_t pending_items = msg.tracks.size();
      for (auto item : msg.tracks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PersonTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracks.size() == 0) {
      out << "tracks: []\n";
    } else {
      out << "tracks:\n";
      for (auto item : msg.tracks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PersonTracks & msg, bool use_flow_style = false)
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
  const project3_interfaces::msg::PersonTracks & msg,
  std::ostream & out, size_t indentation = 0)
{
  project3_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use project3_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const project3_interfaces::msg::PersonTracks & msg)
{
  return project3_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<project3_interfaces::msg::PersonTracks>()
{
  return "project3_interfaces::msg::PersonTracks";
}

template<>
inline const char * name<project3_interfaces::msg::PersonTracks>()
{
  return "project3_interfaces/msg/PersonTracks";
}

template<>
struct has_fixed_size<project3_interfaces::msg::PersonTracks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project3_interfaces::msg::PersonTracks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project3_interfaces::msg::PersonTracks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__TRAITS_HPP_
