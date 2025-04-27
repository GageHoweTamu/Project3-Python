// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

#include "project3_interfaces/msg/detail/person_tracks__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_type_hash_t *
project3_interfaces__msg__PersonTracks__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0x84, 0x5d, 0x98, 0x08, 0x18, 0xd8, 0x93,
      0xea, 0xc2, 0x1c, 0x79, 0xe8, 0x3a, 0x4f, 0x2e,
      0x1e, 0xf4, 0xaa, 0x6b, 0x0e, 0xdb, 0x45, 0x8d,
      0x82, 0x50, 0x30, 0xfb, 0x00, 0xca, 0x78, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "project3_interfaces/msg/detail/person_track__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t project3_interfaces__msg__PersonTrack__EXPECTED_HASH = {1, {
    0xc7, 0x78, 0xa1, 0xb9, 0x5e, 0x88, 0xa6, 0x4c,
    0xb4, 0x56, 0xdc, 0xf9, 0xb2, 0x31, 0xd1, 0x03,
    0xeb, 0x06, 0xab, 0xfd, 0x98, 0x32, 0xfd, 0xae,
    0x5c, 0x96, 0xc9, 0xd0, 0x1d, 0x5c, 0x02, 0xa3,
  }};
#endif

static char project3_interfaces__msg__PersonTracks__TYPE_NAME[] = "project3_interfaces/msg/PersonTracks";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char project3_interfaces__msg__PersonTrack__TYPE_NAME[] = "project3_interfaces/msg/PersonTrack";

// Define type names, field names, and default values
static char project3_interfaces__msg__PersonTracks__FIELD_NAME__tracks[] = "tracks";

static rosidl_runtime_c__type_description__Field project3_interfaces__msg__PersonTracks__FIELDS[] = {
  {
    {project3_interfaces__msg__PersonTracks__FIELD_NAME__tracks, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {project3_interfaces__msg__PersonTrack__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription project3_interfaces__msg__PersonTracks__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {project3_interfaces__msg__PersonTrack__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
project3_interfaces__msg__PersonTracks__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {project3_interfaces__msg__PersonTracks__TYPE_NAME, 36, 36},
      {project3_interfaces__msg__PersonTracks__FIELDS, 1, 1},
    },
    {project3_interfaces__msg__PersonTracks__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&project3_interfaces__msg__PersonTrack__EXPECTED_HASH, project3_interfaces__msg__PersonTrack__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = project3_interfaces__msg__PersonTrack__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# an array of PersonTrack\n"
  "project3_interfaces/PersonTrack[] tracks";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
project3_interfaces__msg__PersonTracks__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {project3_interfaces__msg__PersonTracks__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
project3_interfaces__msg__PersonTracks__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *project3_interfaces__msg__PersonTracks__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *project3_interfaces__msg__PersonTrack__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
