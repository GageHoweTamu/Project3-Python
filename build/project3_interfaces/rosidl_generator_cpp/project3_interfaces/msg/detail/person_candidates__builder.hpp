// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_candidates.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__BUILDER_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "project3_interfaces/msg/detail/person_candidates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace project3_interfaces
{

namespace msg
{

namespace builder
{

class Init_PersonCandidates_positions
{
public:
  Init_PersonCandidates_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project3_interfaces::msg::PersonCandidates positions(::project3_interfaces::msg::PersonCandidates::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project3_interfaces::msg::PersonCandidates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::project3_interfaces::msg::PersonCandidates>()
{
  return project3_interfaces::msg::builder::Init_PersonCandidates_positions();
}

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__BUILDER_HPP_
