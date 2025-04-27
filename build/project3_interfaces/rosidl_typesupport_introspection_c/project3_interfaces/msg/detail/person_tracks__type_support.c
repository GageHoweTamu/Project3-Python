// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "project3_interfaces/msg/detail/person_tracks__rosidl_typesupport_introspection_c.h"
#include "project3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "project3_interfaces/msg/detail/person_tracks__functions.h"
#include "project3_interfaces/msg/detail/person_tracks__struct.h"


// Include directives for member types
// Member `tracks`
#include "project3_interfaces/msg/person_track.h"
// Member `tracks`
#include "project3_interfaces/msg/detail/person_track__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project3_interfaces__msg__PersonTracks__init(message_memory);
}

void project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_fini_function(void * message_memory)
{
  project3_interfaces__msg__PersonTracks__fini(message_memory);
}

size_t project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__size_function__PersonTracks__tracks(
  const void * untyped_member)
{
  const project3_interfaces__msg__PersonTrack__Sequence * member =
    (const project3_interfaces__msg__PersonTrack__Sequence *)(untyped_member);
  return member->size;
}

const void * project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_const_function__PersonTracks__tracks(
  const void * untyped_member, size_t index)
{
  const project3_interfaces__msg__PersonTrack__Sequence * member =
    (const project3_interfaces__msg__PersonTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void * project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_function__PersonTracks__tracks(
  void * untyped_member, size_t index)
{
  project3_interfaces__msg__PersonTrack__Sequence * member =
    (project3_interfaces__msg__PersonTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__fetch_function__PersonTracks__tracks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const project3_interfaces__msg__PersonTrack * item =
    ((const project3_interfaces__msg__PersonTrack *)
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_const_function__PersonTracks__tracks(untyped_member, index));
  project3_interfaces__msg__PersonTrack * value =
    (project3_interfaces__msg__PersonTrack *)(untyped_value);
  *value = *item;
}

void project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__assign_function__PersonTracks__tracks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  project3_interfaces__msg__PersonTrack * item =
    ((project3_interfaces__msg__PersonTrack *)
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_function__PersonTracks__tracks(untyped_member, index));
  const project3_interfaces__msg__PersonTrack * value =
    (const project3_interfaces__msg__PersonTrack *)(untyped_value);
  *item = *value;
}

bool project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__resize_function__PersonTracks__tracks(
  void * untyped_member, size_t size)
{
  project3_interfaces__msg__PersonTrack__Sequence * member =
    (project3_interfaces__msg__PersonTrack__Sequence *)(untyped_member);
  project3_interfaces__msg__PersonTrack__Sequence__fini(member);
  return project3_interfaces__msg__PersonTrack__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_member_array[1] = {
  {
    "tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonTracks, tracks),  // bytes offset in struct
    NULL,  // default value
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__size_function__PersonTracks__tracks,  // size() function pointer
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_const_function__PersonTracks__tracks,  // get_const(index) function pointer
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__get_function__PersonTracks__tracks,  // get(index) function pointer
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__fetch_function__PersonTracks__tracks,  // fetch(index, &value) function pointer
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__assign_function__PersonTracks__tracks,  // assign(index, value) function pointer
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__resize_function__PersonTracks__tracks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_members = {
  "project3_interfaces__msg",  // message namespace
  "PersonTracks",  // message name
  1,  // number of fields
  sizeof(project3_interfaces__msg__PersonTracks),
  false,  // has_any_key_member_
  project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_member_array,  // message members
  project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_init_function,  // function to initialize message memory (memory has to be allocated)
  project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_type_support_handle = {
  0,
  &project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_members,
  get_message_typesupport_handle_function,
  &project3_interfaces__msg__PersonTracks__get_type_hash,
  &project3_interfaces__msg__PersonTracks__get_type_description,
  &project3_interfaces__msg__PersonTracks__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project3_interfaces, msg, PersonTracks)() {
  project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project3_interfaces, msg, PersonTrack)();
  if (!project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_type_support_handle.typesupport_identifier) {
    project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &project3_interfaces__msg__PersonTracks__rosidl_typesupport_introspection_c__PersonTracks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
