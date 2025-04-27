// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_candidates.h"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_H_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PersonCandidates in the package project3_interfaces.
/**
  * a set of raw detections from the lidar processor
 */
typedef struct project3_interfaces__msg__PersonCandidates
{
  geometry_msgs__msg__Point__Sequence positions;
} project3_interfaces__msg__PersonCandidates;

// Struct for a sequence of project3_interfaces__msg__PersonCandidates.
typedef struct project3_interfaces__msg__PersonCandidates__Sequence
{
  project3_interfaces__msg__PersonCandidates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project3_interfaces__msg__PersonCandidates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_CANDIDATES__STRUCT_H_
