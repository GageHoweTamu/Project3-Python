// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project3_interfaces:msg/PersonTrack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_track.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'first_seen'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__project3_interfaces__msg__PersonTrack __attribute__((deprecated))
#else
# define DEPRECATED__project3_interfaces__msg__PersonTrack __declspec(deprecated)
#endif

namespace project3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonTrack_
{
  using Type = PersonTrack_<ContainerAllocator>;

  explicit PersonTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    first_seen(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit PersonTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    first_seen(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _velocity_type velocity;
  using _first_seen_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _first_seen_type first_seen;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__first_seen(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->first_seen = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project3_interfaces::msg::PersonTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const project3_interfaces::msg::PersonTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project3_interfaces__msg__PersonTrack
    std::shared_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project3_interfaces__msg__PersonTrack
    std::shared_ptr<project3_interfaces::msg::PersonTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonTrack_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->first_seen != other.first_seen) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonTrack_

// alias to use template instance with default allocator
using PersonTrack =
  project3_interfaces::msg::PersonTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_HPP_
