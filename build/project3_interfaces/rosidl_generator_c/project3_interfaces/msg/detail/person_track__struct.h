// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project3_interfaces:msg/PersonTrack.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_track.h"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_H_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'first_seen'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PersonTrack in the package project3_interfaces.
/**
  * one tracked person
 */
typedef struct project3_interfaces__msg__PersonTrack
{
  uint32_t id;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Point velocity;
  builtin_interfaces__msg__Time first_seen;
} project3_interfaces__msg__PersonTrack;

// Struct for a sequence of project3_interfaces__msg__PersonTrack.
typedef struct project3_interfaces__msg__PersonTrack__Sequence
{
  project3_interfaces__msg__PersonTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project3_interfaces__msg__PersonTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACK__STRUCT_H_
