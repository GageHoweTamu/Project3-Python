// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice
#include "project3_interfaces/msg/detail/person_tracks__rosidl_typesupport_fastrtps_cpp.hpp"
#include "project3_interfaces/msg/detail/person_tracks__functions.h"
#include "project3_interfaces/msg/detail/person_tracks__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace project3_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const project3_interfaces::msg::PersonTrack &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  project3_interfaces::msg::PersonTrack &);
size_t get_serialized_size(
  const project3_interfaces::msg::PersonTrack &,
  size_t current_alignment);
size_t
max_serialized_size_PersonTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const project3_interfaces::msg::PersonTrack &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const project3_interfaces::msg::PersonTrack &,
  size_t current_alignment);
size_t
max_serialized_size_key_PersonTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace project3_interfaces


namespace project3_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
cdr_serialize(
  const project3_interfaces::msg::PersonTracks & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tracks
  {
    size_t size = ros_message.tracks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      project3_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tracks[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  project3_interfaces::msg::PersonTracks & ros_message)
{
  // Member: tracks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.tracks.resize(size);
    for (size_t i = 0; i < size; i++) {
      project3_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tracks[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
get_serialized_size(
  const project3_interfaces::msg::PersonTracks & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tracks
  {
    size_t array_size = ros_message.tracks.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        project3_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tracks[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
max_serialized_size_PersonTracks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        project3_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_PersonTrack(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = project3_interfaces::msg::PersonTracks;
    is_plain =
      (
      offsetof(DataType, tracks) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
cdr_serialize_key(
  const project3_interfaces::msg::PersonTracks & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tracks
  {
    size_t size = ros_message.tracks.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      project3_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.tracks[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
get_serialized_size_key(
  const project3_interfaces::msg::PersonTracks & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tracks
  {
    size_t array_size = ros_message.tracks.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        project3_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.tracks[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_project3_interfaces
max_serialized_size_key_PersonTracks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        project3_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_PersonTrack(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = project3_interfaces::msg::PersonTracks;
    is_plain =
      (
      offsetof(DataType, tracks) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _PersonTracks__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const project3_interfaces::msg::PersonTracks *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PersonTracks__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<project3_interfaces::msg::PersonTracks *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PersonTracks__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const project3_interfaces::msg::PersonTracks *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PersonTracks__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PersonTracks(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PersonTracks__callbacks = {
  "project3_interfaces::msg",
  "PersonTracks",
  _PersonTracks__cdr_serialize,
  _PersonTracks__cdr_deserialize,
  _PersonTracks__get_serialized_size,
  _PersonTracks__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PersonTracks__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PersonTracks__callbacks,
  get_message_typesupport_handle_function,
  &project3_interfaces__msg__PersonTracks__get_type_hash,
  &project3_interfaces__msg__PersonTracks__get_type_description,
  &project3_interfaces__msg__PersonTracks__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace project3_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_project3_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<project3_interfaces::msg::PersonTracks>()
{
  return &project3_interfaces::msg::typesupport_fastrtps_cpp::_PersonTracks__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, project3_interfaces, msg, PersonTracks)() {
  return &project3_interfaces::msg::typesupport_fastrtps_cpp::_PersonTracks__handle;
}

#ifdef __cplusplus
}
#endif
