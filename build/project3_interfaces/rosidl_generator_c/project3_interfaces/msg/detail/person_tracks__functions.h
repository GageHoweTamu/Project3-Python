// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "project3_interfaces/msg/person_tracks.h"


#ifndef PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__FUNCTIONS_H_
#define PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "project3_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "project3_interfaces/msg/detail/person_tracks__struct.h"

/// Initialize msg/PersonTracks message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * project3_interfaces__msg__PersonTracks
 * )) before or use
 * project3_interfaces__msg__PersonTracks__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__init(project3_interfaces__msg__PersonTracks * msg);

/// Finalize msg/PersonTracks message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
void
project3_interfaces__msg__PersonTracks__fini(project3_interfaces__msg__PersonTracks * msg);

/// Create msg/PersonTracks message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * project3_interfaces__msg__PersonTracks__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
project3_interfaces__msg__PersonTracks *
project3_interfaces__msg__PersonTracks__create(void);

/// Destroy msg/PersonTracks message.
/**
 * It calls
 * project3_interfaces__msg__PersonTracks__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
void
project3_interfaces__msg__PersonTracks__destroy(project3_interfaces__msg__PersonTracks * msg);

/// Check for msg/PersonTracks message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__are_equal(const project3_interfaces__msg__PersonTracks * lhs, const project3_interfaces__msg__PersonTracks * rhs);

/// Copy a msg/PersonTracks message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__copy(
  const project3_interfaces__msg__PersonTracks * input,
  project3_interfaces__msg__PersonTracks * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_type_hash_t *
project3_interfaces__msg__PersonTracks__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
project3_interfaces__msg__PersonTracks__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_runtime_c__type_description__TypeSource *
project3_interfaces__msg__PersonTracks__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
project3_interfaces__msg__PersonTracks__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PersonTracks messages.
/**
 * It allocates the memory for the number of elements and calls
 * project3_interfaces__msg__PersonTracks__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__Sequence__init(project3_interfaces__msg__PersonTracks__Sequence * array, size_t size);

/// Finalize array of msg/PersonTracks messages.
/**
 * It calls
 * project3_interfaces__msg__PersonTracks__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
void
project3_interfaces__msg__PersonTracks__Sequence__fini(project3_interfaces__msg__PersonTracks__Sequence * array);

/// Create array of msg/PersonTracks messages.
/**
 * It allocates the memory for the array and calls
 * project3_interfaces__msg__PersonTracks__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
project3_interfaces__msg__PersonTracks__Sequence *
project3_interfaces__msg__PersonTracks__Sequence__create(size_t size);

/// Destroy array of msg/PersonTracks messages.
/**
 * It calls
 * project3_interfaces__msg__PersonTracks__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
void
project3_interfaces__msg__PersonTracks__Sequence__destroy(project3_interfaces__msg__PersonTracks__Sequence * array);

/// Check for msg/PersonTracks message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__Sequence__are_equal(const project3_interfaces__msg__PersonTracks__Sequence * lhs, const project3_interfaces__msg__PersonTracks__Sequence * rhs);

/// Copy an array of msg/PersonTracks messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_project3_interfaces
bool
project3_interfaces__msg__PersonTracks__Sequence__copy(
  const project3_interfaces__msg__PersonTracks__Sequence * input,
  project3_interfaces__msg__PersonTracks__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PROJECT3_INTERFACES__MSG__DETAIL__PERSON_TRACKS__FUNCTIONS_H_
