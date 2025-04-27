// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_candidates.hpp"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_HPP_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__project3_interfaces__msg__PersonCandidates __attribute__((deprecated))
#else
# define DEPRECATED__project3_interfaces__msg__PersonCandidates __declspec(deprecated)
#endif

namespace project3_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PersonCandidates_
{
  using Type = PersonCandidates_<ContainerAllocator>;

  explicit PersonCandidates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PersonCandidates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _positions_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _positions_type positions;

  // setters for named parameter idiom
  Type & set__positions(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    project3_interfaces::msg::PersonCandidates_<ContainerAllocator> *;
  using ConstRawPtr =
    const project3_interfaces::msg::PersonCandidates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonCandidates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      project3_interfaces::msg::PersonCandidates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__project3_interfaces__msg__PersonCandidates
    std::shared_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__project3_interfaces__msg__PersonCandidates
    std::shared_ptr<project3_interfaces::msg::PersonCandidates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PersonCandidates_ & other) const
  {
    if (this->positions != other.positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const PersonCandidates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PersonCandidates_

// alias to use template instance with default allocator
using PersonCandidates =
  project3_interfaces::msg::PersonCandidates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace project3_interfaces

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_HPP_
