// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ptu_interfaces:srv/SetPanTilt.idl
// generated code does not contain a copyright notice
#include "ptu_interfaces/srv/detail/set_pan_tilt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ptu_interfaces__srv__SetPanTilt_Request__init(ptu_interfaces__srv__SetPanTilt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pan
  // tilt
  return true;
}

void
ptu_interfaces__srv__SetPanTilt_Request__fini(ptu_interfaces__srv__SetPanTilt_Request * msg)
{
  if (!msg) {
    return;
  }
  // pan
  // tilt
}

bool
ptu_interfaces__srv__SetPanTilt_Request__are_equal(const ptu_interfaces__srv__SetPanTilt_Request * lhs, const ptu_interfaces__srv__SetPanTilt_Request * rhs)
{
  if (!lhs || !rhs) {
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
  return true;
}

bool
ptu_interfaces__srv__SetPanTilt_Request__copy(
  const ptu_interfaces__srv__SetPanTilt_Request * input,
  ptu_interfaces__srv__SetPanTilt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pan
  output->pan = input->pan;
  // tilt
  output->tilt = input->tilt;
  return true;
}

ptu_interfaces__srv__SetPanTilt_Request *
ptu_interfaces__srv__SetPanTilt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Request * msg = (ptu_interfaces__srv__SetPanTilt_Request *)allocator.allocate(sizeof(ptu_interfaces__srv__SetPanTilt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__srv__SetPanTilt_Request));
  bool success = ptu_interfaces__srv__SetPanTilt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__srv__SetPanTilt_Request__destroy(ptu_interfaces__srv__SetPanTilt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__srv__SetPanTilt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__srv__SetPanTilt_Request__Sequence__init(ptu_interfaces__srv__SetPanTilt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Request * data = NULL;

  if (size) {
    data = (ptu_interfaces__srv__SetPanTilt_Request *)allocator.zero_allocate(size, sizeof(ptu_interfaces__srv__SetPanTilt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__srv__SetPanTilt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__srv__SetPanTilt_Request__fini(&data[i - 1]);
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
ptu_interfaces__srv__SetPanTilt_Request__Sequence__fini(ptu_interfaces__srv__SetPanTilt_Request__Sequence * array)
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
      ptu_interfaces__srv__SetPanTilt_Request__fini(&array->data[i]);
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

ptu_interfaces__srv__SetPanTilt_Request__Sequence *
ptu_interfaces__srv__SetPanTilt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Request__Sequence * array = (ptu_interfaces__srv__SetPanTilt_Request__Sequence *)allocator.allocate(sizeof(ptu_interfaces__srv__SetPanTilt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__srv__SetPanTilt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__srv__SetPanTilt_Request__Sequence__destroy(ptu_interfaces__srv__SetPanTilt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__srv__SetPanTilt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__srv__SetPanTilt_Request__Sequence__are_equal(const ptu_interfaces__srv__SetPanTilt_Request__Sequence * lhs, const ptu_interfaces__srv__SetPanTilt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__srv__SetPanTilt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__srv__SetPanTilt_Request__Sequence__copy(
  const ptu_interfaces__srv__SetPanTilt_Request__Sequence * input,
  ptu_interfaces__srv__SetPanTilt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__srv__SetPanTilt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__srv__SetPanTilt_Request * data =
      (ptu_interfaces__srv__SetPanTilt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__srv__SetPanTilt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__srv__SetPanTilt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__srv__SetPanTilt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ptu_interfaces__srv__SetPanTilt_Response__init(ptu_interfaces__srv__SetPanTilt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
ptu_interfaces__srv__SetPanTilt_Response__fini(ptu_interfaces__srv__SetPanTilt_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
ptu_interfaces__srv__SetPanTilt_Response__are_equal(const ptu_interfaces__srv__SetPanTilt_Response * lhs, const ptu_interfaces__srv__SetPanTilt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  return true;
}

bool
ptu_interfaces__srv__SetPanTilt_Response__copy(
  const ptu_interfaces__srv__SetPanTilt_Response * input,
  ptu_interfaces__srv__SetPanTilt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

ptu_interfaces__srv__SetPanTilt_Response *
ptu_interfaces__srv__SetPanTilt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Response * msg = (ptu_interfaces__srv__SetPanTilt_Response *)allocator.allocate(sizeof(ptu_interfaces__srv__SetPanTilt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__srv__SetPanTilt_Response));
  bool success = ptu_interfaces__srv__SetPanTilt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__srv__SetPanTilt_Response__destroy(ptu_interfaces__srv__SetPanTilt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__srv__SetPanTilt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__srv__SetPanTilt_Response__Sequence__init(ptu_interfaces__srv__SetPanTilt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Response * data = NULL;

  if (size) {
    data = (ptu_interfaces__srv__SetPanTilt_Response *)allocator.zero_allocate(size, sizeof(ptu_interfaces__srv__SetPanTilt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__srv__SetPanTilt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__srv__SetPanTilt_Response__fini(&data[i - 1]);
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
ptu_interfaces__srv__SetPanTilt_Response__Sequence__fini(ptu_interfaces__srv__SetPanTilt_Response__Sequence * array)
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
      ptu_interfaces__srv__SetPanTilt_Response__fini(&array->data[i]);
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

ptu_interfaces__srv__SetPanTilt_Response__Sequence *
ptu_interfaces__srv__SetPanTilt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__srv__SetPanTilt_Response__Sequence * array = (ptu_interfaces__srv__SetPanTilt_Response__Sequence *)allocator.allocate(sizeof(ptu_interfaces__srv__SetPanTilt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__srv__SetPanTilt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__srv__SetPanTilt_Response__Sequence__destroy(ptu_interfaces__srv__SetPanTilt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__srv__SetPanTilt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__srv__SetPanTilt_Response__Sequence__are_equal(const ptu_interfaces__srv__SetPanTilt_Response__Sequence * lhs, const ptu_interfaces__srv__SetPanTilt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__srv__SetPanTilt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__srv__SetPanTilt_Response__Sequence__copy(
  const ptu_interfaces__srv__SetPanTilt_Response__Sequence * input,
  ptu_interfaces__srv__SetPanTilt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__srv__SetPanTilt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__srv__SetPanTilt_Response * data =
      (ptu_interfaces__srv__SetPanTilt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__srv__SetPanTilt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__srv__SetPanTilt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__srv__SetPanTilt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
