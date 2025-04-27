// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from project3_interfaces:msg/PersonTrack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "project3_interfaces/msg/detail/person_track__rosidl_typesupport_introspection_c.h"
#include "project3_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "project3_interfaces/msg/detail/person_track__functions.h"
#include "project3_interfaces/msg/detail/person_track__struct.h"


// Include directives for member types
// Member `position`
// Member `velocity`
#include "geometry_msgs/msg/point.h"
// Member `position`
// Member `velocity`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `first_seen`
#include "builtin_interfaces/msg/time.h"
// Member `first_seen`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project3_interfaces__msg__PersonTrack__init(message_memory);
}

void project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_fini_function(void * message_memory)
{
  project3_interfaces__msg__PersonTrack__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonTrack, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonTrack, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonTrack, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "first_seen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project3_interfaces__msg__PersonTrack, first_seen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_members = {
  "project3_interfaces__msg",  // message namespace
  "PersonTrack",  // message name
  4,  // number of fields
  sizeof(project3_interfaces__msg__PersonTrack),
  false,  // has_any_key_member_
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_member_array,  // message members
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_init_function,  // function to initialize message memory (memory has to be allocated)
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_type_support_handle = {
  0,
  &project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_members,
  get_message_typesupport_handle_function,
  &project3_interfaces__msg__PersonTrack__get_type_hash,
  &project3_interfaces__msg__PersonTrack__get_type_description,
  &project3_interfaces__msg__PersonTrack__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project3_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project3_interfaces, msg, PersonTrack)() {
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_type_support_handle.typesupport_identifier) {
    project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &project3_interfaces__msg__PersonTrack__rosidl_typesupport_introspection_c__PersonTrack_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
