// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_tracks.h"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_H_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'tracks'
#include "project3_interfaces/msg/detail/person_track__struct.h"

/// Struct defined in msg/PersonTracks in the package project3_interfaces.
/**
  * an array of PersonTrack
 */
typedef struct project3_interfaces__msg__PersonTracks
{
  project3_interfaces__msg__PersonTrack__Sequence tracks;
} project3_interfaces__msg__PersonTracks;

// Struct for a sequence of project3_interfaces__msg__PersonTracks.
typedef struct project3_interfaces__msg__PersonTracks__Sequence
{
  project3_interfaces__msg__PersonTracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project3_interfaces__msg__PersonTracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__STRUCT_H_
