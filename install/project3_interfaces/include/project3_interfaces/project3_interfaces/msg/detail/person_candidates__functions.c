// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project3_interfaces:msg/PersonCandidates.idl
// generated code does not contain a copyright notice
#include "project3_interfaces/msg/detail/person_candidates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
project3_interfaces__msg__PersonCandidates__init(project3_interfaces__msg__PersonCandidates * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->positions, 0)) {
    project3_interfaces__msg__PersonCandidates__fini(msg);
    return false;
  }
  return true;
}

void
project3_interfaces__msg__PersonCandidates__fini(project3_interfaces__msg__PersonCandidates * msg)
{
  if (!msg) {
    return;
  }
  // positions
  geometry_msgs__msg__Point__Sequence__fini(&msg->positions);
}

bool
project3_interfaces__msg__PersonCandidates__are_equal(const project3_interfaces__msg__PersonCandidates * lhs, const project3_interfaces__msg__PersonCandidates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  return true;
}

bool
project3_interfaces__msg__PersonCandidates__copy(
  const project3_interfaces__msg__PersonCandidates * input,
  project3_interfaces__msg__PersonCandidates * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  return true;
}

project3_interfaces__msg__PersonCandidates *
project3_interfaces__msg__PersonCandidates__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonCandidates * msg = (project3_interfaces__msg__PersonCandidates *)allocator.allocate(sizeof(project3_interfaces__msg__PersonCandidates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project3_interfaces__msg__PersonCandidates));
  bool success = project3_interfaces__msg__PersonCandidates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project3_interfaces__msg__PersonCandidates__destroy(project3_interfaces__msg__PersonCandidates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project3_interfaces__msg__PersonCandidates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project3_interfaces__msg__PersonCandidates__Sequence__init(project3_interfaces__msg__PersonCandidates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonCandidates * data = NULL;

  if (size) {
    data = (project3_interfaces__msg__PersonCandidates *)allocator.zero_allocate(size, sizeof(project3_interfaces__msg__PersonCandidates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project3_interfaces__msg__PersonCandidates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project3_interfaces__msg__PersonCandidates__fini(&data[i - 1]);
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
project3_interfaces__msg__PersonCandidates__Sequence__fini(project3_interfaces__msg__PersonCandidates__Sequence * array)
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
      project3_interfaces__msg__PersonCandidates__fini(&array->data[i]);
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

project3_interfaces__msg__PersonCandidates__Sequence *
project3_interfaces__msg__PersonCandidates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project3_interfaces__msg__PersonCandidates__Sequence * array = (project3_interfaces__msg__PersonCandidates__Sequence *)allocator.allocate(sizeof(project3_interfaces__msg__PersonCandidates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project3_interfaces__msg__PersonCandidates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project3_interfaces__msg__PersonCandidates__Sequence__destroy(project3_interfaces__msg__PersonCandidates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project3_interfaces__msg__PersonCandidates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project3_interfaces__msg__PersonCandidates__Sequence__are_equal(const project3_interfaces__msg__PersonCandidates__Sequence * lhs, const project3_interfaces__msg__PersonCandidates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project3_interfaces__msg__PersonCandidates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project3_interfaces__msg__PersonCandidates__Sequence__copy(
  const project3_interfaces__msg__PersonCandidates__Sequence * input,
  project3_interfaces__msg__PersonCandidates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(project3_interfaces__msg__PersonCandidates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project3_interfaces__msg__PersonCandidates * data =
      (project3_interfaces__msg__PersonCandidates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project3_interfaces__msg__PersonCandidates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project3_interfaces__msg__PersonCandidates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project3_interfaces__msg__PersonCandidates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
