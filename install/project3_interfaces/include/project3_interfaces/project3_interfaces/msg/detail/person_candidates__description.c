// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice

#include "project3_interfaces/msg/detail/person_candidates__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_type_hash_t *
project3_interfaces__msg__PersonCandidates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0x37, 0x40, 0x8b, 0xc8, 0xa8, 0x7f, 0x25,
      0xc7, 0xa8, 0x1f, 0x5d, 0x60, 0x57, 0xdd, 0x84,
      0x4a, 0x91, 0xd0, 0xa2, 0xbf, 0x1d, 0x39, 0xcd,
      0xfb, 0x77, 0xd4, 0xdd, 0x97, 0xfc, 0x67, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char project3_interfaces__msg__PersonCandidates__TYPE_NAME[] = "project3_interfaces/msg/PersonCandidates";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char project3_interfaces__msg__PersonCandidates__FIELD_NAME__positions[] = "positions";

static rosidl_runtime_c__type_description__Field project3_interfaces__msg__PersonCandidates__FIELDS[] = {
  {
    {project3_interfaces__msg__PersonCandidates__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription project3_interfaces__msg__PersonCandidates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
project3_interfaces__msg__PersonCandidates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {project3_interfaces__msg__PersonCandidates__TYPE_NAME, 40, 40},
      {project3_interfaces__msg__PersonCandidates__FIELDS, 1, 1},
    },
    {project3_interfaces__msg__PersonCandidates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# a set of raw detections from the lidar processor\n"
  "geometry_msgs/Point[] positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
project3_interfaces__msg__PersonCandidates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {project3_interfaces__msg__PersonCandidates__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 83, 83},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
project3_interfaces__msg__PersonCandidates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *project3_interfaces__msg__PersonCandidates__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
