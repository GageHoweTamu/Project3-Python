// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "project3_interfaces/msg/detail/person_candidates__rosidl_typesupport_introspection_c.h"
#include "project3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "project3_interfaces/msg/detail/person_candidates__functions.h"
#include "project3_interfaces/msg/detail/person_candidates__struct.h"


// Include directives for member types
// Member `positions`
#include "geometry_msgs/msg/point.h"
// Member `positions`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project3_interfaces__msg__PersonCandidates__init(message_memory);
}

void project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_fini_function(void * message_memory)
{
  project3_interfaces__msg__PersonCandidates__fini(message_memory);
}

size_t project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__size_function__PersonCandidates__positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_const_function__PersonCandidates__positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_function__PersonCandidates__positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__fetch_function__PersonCandidates__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_const_function__PersonCandidates__positions(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__assign_function__PersonCandidates__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_function__PersonCandidates__positions(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__resize_function__PersonCandidates__positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonCandidates, positions),  // bytes offset in struct
    NULL,  // default value
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__size_function__PersonCandidates__positions,  // size() function pointer
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_const_function__PersonCandidates__positions,  // get_const(index) function pointer
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__get_function__PersonCandidates__positions,  // get(index) function pointer
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__fetch_function__PersonCandidates__positions,  // fetch(index, &value) function pointer
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__assign_function__PersonCandidates__positions,  // assign(index, value) function pointer
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__resize_function__PersonCandidates__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_members = {
  "project3_interfaces__msg",  // message namespace
  "PersonCandidates",  // message name
  1,  // number of fields
  sizeof(project3_interfaces__msg__PersonCandidates),
  false,  // has_any_key_member_
  project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_member_array,  // message members
  project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_init_function,  // function to initialize message memory (memory has to be allocated)
  project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_type_support_handle = {
  0,
  &project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_members,
  get_message_typesupport_handle_function,
  &project3_interfaces__msg__PersonCandidates__get_type_hash,
  &project3_interfaces__msg__PersonCandidates__get_type_description,
  &project3_interfaces__msg__PersonCandidates__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project3_interfaces, msg, PersonCandidates)() {
  project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_type_support_handle.typesupport_identifier) {
    project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &project3_interfaces__msg__PersonCandidates__rosidl_typesupport_introspection_c__PersonCandidates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
