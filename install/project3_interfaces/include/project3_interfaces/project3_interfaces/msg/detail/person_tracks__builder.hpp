// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_tracks.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__BUILDER_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project3_interfaces/msg/detail/person_tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project3_interfaces
{

namespace msg
{

namespace builder
{

class Init_PersonTracks_tracks
{
public:
  Init_PersonTracks_tracks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project3_interfaces::msg::PersonTracks tracks(::project3_interfaces::msg::PersonTracks::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project3_interfaces::msg::PersonTracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::project3_interfaces::msg::PersonTracks>()
{
  return project3_interfaces::msg::builder::Init_PersonTracks_tracks();
}

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__BUILDER_HPP_
