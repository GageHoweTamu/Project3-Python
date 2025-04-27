// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project3_interfaces:msg/PersonTrack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_track.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__BUILDER_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project3_interfaces/msg/detail/person_track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project3_interfaces
{

namespace msg
{

namespace builder
{

class Init_PersonTrack_first_seen
{
public:
  explicit Init_PersonTrack_first_seen(::project3_interfaces::msg::PersonTrack & msg)
  : msg_(msg)
  {}
  ::project3_interfaces::msg::PersonTrack first_seen(::project3_interfaces::msg::PersonTrack::_first_seen_type arg)
  {
    msg_.first_seen = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project3_interfaces::msg::PersonTrack msg_;
};

class Init_PersonTrack_velocity
{
public:
  explicit Init_PersonTrack_velocity(::project3_interfaces::msg::PersonTrack & msg)
  : msg_(msg)
  {}
  Init_PersonTrack_first_seen velocity(::project3_interfaces::msg::PersonTrack::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_PersonTrack_first_seen(msg_);
  }

private:
  ::project3_interfaces::msg::PersonTrack msg_;
};

class Init_PersonTrack_position
{
public:
  explicit Init_PersonTrack_position(::project3_interfaces::msg::PersonTrack & msg)
  : msg_(msg)
  {}
  Init_PersonTrack_velocity position(::project3_interfaces::msg::PersonTrack::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PersonTrack_velocity(msg_);
  }

private:
  ::project3_interfaces::msg::PersonTrack msg_;
};

class Init_PersonTrack_id
{
public:
  Init_PersonTrack_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PersonTrack_position id(::project3_interfaces::msg::PersonTrack::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PersonTrack_position(msg_);
  }

private:
  ::project3_interfaces::msg::PersonTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::project3_interfaces::msg::PersonTrack>()
{
  return project3_interfaces::msg::builder::Init_PersonTrack_id();
}

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__BUILDER_HPP_
