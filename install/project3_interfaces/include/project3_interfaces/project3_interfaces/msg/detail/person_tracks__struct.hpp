// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_tracks.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tracks'
#include "project3_interfaces/msg/detail/person_track__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__project3_interfaces__msg__PersonTracks __attribute__((deprecated))
#else
# define DEPRECATED__project3_interfaces__msg__PersonTracks __declspec(deprecated)
#endif

namespace project3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonTracks_
{
  using Type = PersonTracks_<ContainerAllocator>;

  explicit PersonTracks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PersonTracks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tracks_type =
    std::vector<project3_interfaces::msg::PersonTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<project3_interfaces::msg::PersonTrack_<ContainerAllocator>>>;
  _tracks_type tracks;

  // setters for named parameter idiom
  Type & set__tracks(
    const std::vector<project3_interfaces::msg::PersonTrack_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<project3_interfaces::msg::PersonTrack_<ContainerAllocator>>> & _arg)
  {
    this->tracks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project3_interfaces::msg::PersonTracks_<ContainerAllocator> *;
  using ConstRawPtr =
    const project3_interfaces::msg::PersonTracks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonTracks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonTracks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project3_interfaces__msg__PersonTracks
    std::shared_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project3_interfaces__msg__PersonTracks
    std::shared_ptr<project3_interfaces::msg::PersonTracks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonTracks_ & other) const
  {
    if (this->tracks != other.tracks) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonTracks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonTracks_

// alias to use template instance with default allocator
using PersonTracks =
  project3_interfaces::msg::PersonTracks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_HPP_
