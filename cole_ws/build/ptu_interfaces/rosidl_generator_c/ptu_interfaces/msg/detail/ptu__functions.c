// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice
#include "ptu_interfaces/msg/detail/ptu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ptu_interfaces__msg__PTU__init(ptu_interfaces__msg__PTU * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ptu_interfaces__msg__PTU__fini(msg);
    return false;
  }
  // pan
  // tilt
  // pan_speed
  // tilt_speed
  return true;
}

void
ptu_interfaces__msg__PTU__fini(ptu_interfaces__msg__PTU * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pan
  // tilt
  // pan_speed
  // tilt_speed
}

bool
ptu_interfaces__msg__PTU__are_equal(const ptu_interfaces__msg__PTU * lhs, const ptu_interfaces__msg__PTU * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pan
  if (lhs->pan != rhs->pan) {
    return false;
  }
  // tilt
  if (lhs->tilt != rhs->tilt) {
    return false;
  }
  // pan_speed
  if (lhs->pan_speed != rhs->pan_speed) {
    return false;
  }
  // tilt_speed
  if (lhs->tilt_speed != rhs->tilt_speed) {
    return false;
  }
  return true;
}

bool
ptu_interfaces__msg__PTU__copy(
  const ptu_interfaces__msg__PTU * input,
  ptu_interfaces__msg__PTU * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pan
  output->pan = input->pan;
  // tilt
  output->tilt = input->tilt;
  // pan_speed
  output->pan_speed = input->pan_speed;
  // tilt_speed
  output->tilt_speed = input->tilt_speed;
  return true;
}

ptu_interfaces__msg__PTU *
ptu_interfaces__msg__PTU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__msg__PTU * msg = (ptu_interfaces__msg__PTU *)allocator.allocate(sizeof(ptu_interfaces__msg__PTU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__msg__PTU));
  bool success = ptu_interfaces__msg__PTU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__msg__PTU__destroy(ptu_interfaces__msg__PTU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__msg__PTU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__msg__PTU__Sequence__init(ptu_interfaces__msg__PTU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__msg__PTU * data = NULL;

  if (size) {
    data = (ptu_interfaces__msg__PTU *)allocator.zero_allocate(size, sizeof(ptu_interfaces__msg__PTU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__msg__PTU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__msg__PTU__fini(&data[i - 1]);
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
ptu_interfaces__msg__PTU__Sequence__fini(ptu_interfaces__msg__PTU__Sequence * array)
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
      ptu_interfaces__msg__PTU__fini(&array->data[i]);
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

ptu_interfaces__msg__PTU__Sequence *
ptu_interfaces__msg__PTU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__msg__PTU__Sequence * array = (ptu_interfaces__msg__PTU__Sequence *)allocator.allocate(sizeof(ptu_interfaces__msg__PTU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__msg__PTU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__msg__PTU__Sequence__destroy(ptu_interfaces__msg__PTU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__msg__PTU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__msg__PTU__Sequence__are_equal(const ptu_interfaces__msg__PTU__Sequence * lhs, const ptu_interfaces__msg__PTU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__msg__PTU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__msg__PTU__Sequence__copy(
  const ptu_interfaces__msg__PTU__Sequence * input,
  ptu_interfaces__msg__PTU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__msg__PTU);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__msg__PTU * data =
      (ptu_interfaces__msg__PTU *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__msg__PTU__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__msg__PTU__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__msg__PTU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
