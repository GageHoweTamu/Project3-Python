// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project3_interfaces:msg/PersonTracks.idl
// generated code does not contain a copyright notice
#include "project3_interfaces/msg/detail/person_tracks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tracks`
#include "project3_interfaces/msg/detail/person_track__functions.h"

bool
project3_interfaces__msg__PersonTracks__init(project3_interfaces__msg__PersonTracks * msg)
{
  if (!msg) {
    return false;
  }
  // tracks
  if (!project3_interfaces__msg__PersonTrack__Sequence__init(&msg->tracks, 0)) {
    project3_interfaces__msg__PersonTracks__fini(msg);
    return false;
  }
  return true;
}

void
project3_interfaces__msg__PersonTracks__fini(project3_interfaces__msg__PersonTracks * msg)
{
  if (!msg) {
    return;
  }
  // tracks
  project3_interfaces__msg__PersonTrack__Sequence__fini(&msg->tracks);
}

bool
project3_interfaces__msg__PersonTracks__are_equal(const project3_interfaces__msg__PersonTracks * lhs, const project3_interfaces__msg__PersonTracks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tracks
  if (!project3_interfaces__msg__PersonTrack__Sequence__are_equal(
      &(lhs->tracks), &(rhs->tracks)))
  {
    return false;
  }
  return true;
}

bool
project3_interfaces__msg__PersonTracks__copy(
  const project3_interfaces__msg__PersonTracks * input,
  project3_interfaces__msg__PersonTracks * output)
{
  if (!input || !output) {
    return false;
  }
  // tracks
  if (!project3_interfaces__msg__PersonTrack__Sequence__copy(
      &(input->tracks), &(output->tracks)))
  {
    return false;
  }
  return true;
}

project3_interfaces__msg__PersonTracks *
project3_interfaces__msg__PersonTracks__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonTracks * msg = (project3_interfaces__msg__PersonTracks *)allocator.allocate(sizeof(project3_interfaces__msg__PersonTracks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project3_interfaces__msg__PersonTracks));
  bool success = project3_interfaces__msg__PersonTracks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project3_interfaces__msg__PersonTracks__destroy(project3_interfaces__msg__PersonTracks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project3_interfaces__msg__PersonTracks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project3_interfaces__msg__PersonTracks__Sequence__init(project3_interfaces__msg__PersonTracks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonTracks * data = NULL;

  if (size) {
    data = (project3_interfaces__msg__PersonTracks *)allocator.zero_allocate(size, sizeof(project3_interfaces__msg__PersonTracks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project3_interfaces__msg__PersonTracks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project3_interfaces__msg__PersonTracks__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
project3_interfaces__msg__PersonTracks__Sequence__fini(project3_interfaces__msg__PersonTracks__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      project3_interfaces__msg__PersonTracks__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

project3_interfaces__msg__PersonTracks__Sequence *
project3_interfaces__msg__PersonTracks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonTracks__Sequence * array = (project3_interfaces__msg__PersonTracks__Sequence *)allocator.allocate(sizeof(project3_interfaces__msg__PersonTracks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project3_interfaces__msg__PersonTracks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project3_interfaces__msg__PersonTracks__Sequence__destroy(project3_interfaces__msg__PersonTracks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project3_interfaces__msg__PersonTracks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project3_interfaces__msg__PersonTracks__Sequence__are_equal(const project3_interfaces__msg__PersonTracks__Sequence * lhs, const project3_interfaces__msg__PersonTracks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project3_interfaces__msg__PersonTracks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project3_interfaces__msg__PersonTracks__Sequence__copy(
  const project3_interfaces__msg__PersonTracks__Sequence * input,
  project3_interfaces__msg__PersonTracks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project3_interfaces__msg__PersonTracks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project3_interfaces__msg__PersonTracks * data =
      (project3_interfaces__msg__PersonTracks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project3_interfaces__msg__PersonTracks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project3_interfaces__msg__PersonTracks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project3_interfaces__msg__PersonTracks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
