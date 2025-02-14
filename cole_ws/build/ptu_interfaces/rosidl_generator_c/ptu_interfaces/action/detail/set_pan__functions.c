// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ptu_interfaces:action/SetPan.idl
// generated code does not contain a copyright notice
#include "ptu_interfaces/action/detail/set_pan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ptu_interfaces__action__SetPan_Goal__init(ptu_interfaces__action__SetPan_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pan
  return true;
}

void
ptu_interfaces__action__SetPan_Goal__fini(ptu_interfaces__action__SetPan_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pan
}

bool
ptu_interfaces__action__SetPan_Goal__are_equal(const ptu_interfaces__action__SetPan_Goal * lhs, const ptu_interfaces__action__SetPan_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pan
  if (lhs->pan != rhs->pan) {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_Goal__copy(
  const ptu_interfaces__action__SetPan_Goal * input,
  ptu_interfaces__action__SetPan_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // pan
  output->pan = input->pan;
  return true;
}

ptu_interfaces__action__SetPan_Goal *
ptu_interfaces__action__SetPan_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Goal * msg = (ptu_interfaces__action__SetPan_Goal *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_Goal));
  bool success = ptu_interfaces__action__SetPan_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_Goal__destroy(ptu_interfaces__action__SetPan_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_Goal__Sequence__init(ptu_interfaces__action__SetPan_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Goal * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_Goal *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_Goal__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_Goal__Sequence__fini(ptu_interfaces__action__SetPan_Goal__Sequence * array)
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
      ptu_interfaces__action__SetPan_Goal__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_Goal__Sequence *
ptu_interfaces__action__SetPan_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Goal__Sequence * array = (ptu_interfaces__action__SetPan_Goal__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_Goal__Sequence__destroy(ptu_interfaces__action__SetPan_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_Goal__Sequence__are_equal(const ptu_interfaces__action__SetPan_Goal__Sequence * lhs, const ptu_interfaces__action__SetPan_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_Goal__Sequence__copy(
  const ptu_interfaces__action__SetPan_Goal__Sequence * input,
  ptu_interfaces__action__SetPan_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_Goal * data =
      (ptu_interfaces__action__SetPan_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ptu_interfaces__action__SetPan_Result__init(ptu_interfaces__action__SetPan_Result * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  return true;
}

void
ptu_interfaces__action__SetPan_Result__fini(ptu_interfaces__action__SetPan_Result * msg)
{
  if (!msg) {
    return;
  }
  // ret
}

bool
ptu_interfaces__action__SetPan_Result__are_equal(const ptu_interfaces__action__SetPan_Result * lhs, const ptu_interfaces__action__SetPan_Result * rhs)
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
ptu_interfaces__action__SetPan_Result__copy(
  const ptu_interfaces__action__SetPan_Result * input,
  ptu_interfaces__action__SetPan_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  return true;
}

ptu_interfaces__action__SetPan_Result *
ptu_interfaces__action__SetPan_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Result * msg = (ptu_interfaces__action__SetPan_Result *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_Result));
  bool success = ptu_interfaces__action__SetPan_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_Result__destroy(ptu_interfaces__action__SetPan_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_Result__Sequence__init(ptu_interfaces__action__SetPan_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Result * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_Result *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_Result__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_Result__Sequence__fini(ptu_interfaces__action__SetPan_Result__Sequence * array)
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
      ptu_interfaces__action__SetPan_Result__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_Result__Sequence *
ptu_interfaces__action__SetPan_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Result__Sequence * array = (ptu_interfaces__action__SetPan_Result__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_Result__Sequence__destroy(ptu_interfaces__action__SetPan_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_Result__Sequence__are_equal(const ptu_interfaces__action__SetPan_Result__Sequence * lhs, const ptu_interfaces__action__SetPan_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_Result__Sequence__copy(
  const ptu_interfaces__action__SetPan_Result__Sequence * input,
  ptu_interfaces__action__SetPan_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_Result * data =
      (ptu_interfaces__action__SetPan_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ptu_interfaces__action__SetPan_Feedback__init(ptu_interfaces__action__SetPan_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage_of_completing
  return true;
}

void
ptu_interfaces__action__SetPan_Feedback__fini(ptu_interfaces__action__SetPan_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage_of_completing
}

bool
ptu_interfaces__action__SetPan_Feedback__are_equal(const ptu_interfaces__action__SetPan_Feedback * lhs, const ptu_interfaces__action__SetPan_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage_of_completing
  if (lhs->percentage_of_completing != rhs->percentage_of_completing) {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_Feedback__copy(
  const ptu_interfaces__action__SetPan_Feedback * input,
  ptu_interfaces__action__SetPan_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage_of_completing
  output->percentage_of_completing = input->percentage_of_completing;
  return true;
}

ptu_interfaces__action__SetPan_Feedback *
ptu_interfaces__action__SetPan_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Feedback * msg = (ptu_interfaces__action__SetPan_Feedback *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_Feedback));
  bool success = ptu_interfaces__action__SetPan_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_Feedback__destroy(ptu_interfaces__action__SetPan_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_Feedback__Sequence__init(ptu_interfaces__action__SetPan_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Feedback * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_Feedback *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_Feedback__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_Feedback__Sequence__fini(ptu_interfaces__action__SetPan_Feedback__Sequence * array)
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
      ptu_interfaces__action__SetPan_Feedback__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_Feedback__Sequence *
ptu_interfaces__action__SetPan_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_Feedback__Sequence * array = (ptu_interfaces__action__SetPan_Feedback__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_Feedback__Sequence__destroy(ptu_interfaces__action__SetPan_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_Feedback__Sequence__are_equal(const ptu_interfaces__action__SetPan_Feedback__Sequence * lhs, const ptu_interfaces__action__SetPan_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_Feedback__Sequence__copy(
  const ptu_interfaces__action__SetPan_Feedback__Sequence * input,
  ptu_interfaces__action__SetPan_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_Feedback * data =
      (ptu_interfaces__action__SetPan_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ptu_interfaces/action/detail/set_pan__functions.h"

bool
ptu_interfaces__action__SetPan_SendGoal_Request__init(ptu_interfaces__action__SetPan_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ptu_interfaces__action__SetPan_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ptu_interfaces__action__SetPan_Goal__init(&msg->goal)) {
    ptu_interfaces__action__SetPan_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ptu_interfaces__action__SetPan_SendGoal_Request__fini(ptu_interfaces__action__SetPan_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ptu_interfaces__action__SetPan_Goal__fini(&msg->goal);
}

bool
ptu_interfaces__action__SetPan_SendGoal_Request__are_equal(const ptu_interfaces__action__SetPan_SendGoal_Request * lhs, const ptu_interfaces__action__SetPan_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ptu_interfaces__action__SetPan_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_SendGoal_Request__copy(
  const ptu_interfaces__action__SetPan_SendGoal_Request * input,
  ptu_interfaces__action__SetPan_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ptu_interfaces__action__SetPan_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ptu_interfaces__action__SetPan_SendGoal_Request *
ptu_interfaces__action__SetPan_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Request * msg = (ptu_interfaces__action__SetPan_SendGoal_Request *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_SendGoal_Request));
  bool success = ptu_interfaces__action__SetPan_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_SendGoal_Request__destroy(ptu_interfaces__action__SetPan_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__init(ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Request * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_SendGoal_Request__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__fini(ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * array)
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
      ptu_interfaces__action__SetPan_SendGoal_Request__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_SendGoal_Request__Sequence *
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * array = (ptu_interfaces__action__SetPan_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__destroy(ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__are_equal(const ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * lhs, const ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_SendGoal_Request__Sequence__copy(
  const ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * input,
  ptu_interfaces__action__SetPan_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_SendGoal_Request * data =
      (ptu_interfaces__action__SetPan_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ptu_interfaces__action__SetPan_SendGoal_Response__init(ptu_interfaces__action__SetPan_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ptu_interfaces__action__SetPan_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ptu_interfaces__action__SetPan_SendGoal_Response__fini(ptu_interfaces__action__SetPan_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ptu_interfaces__action__SetPan_SendGoal_Response__are_equal(const ptu_interfaces__action__SetPan_SendGoal_Response * lhs, const ptu_interfaces__action__SetPan_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_SendGoal_Response__copy(
  const ptu_interfaces__action__SetPan_SendGoal_Response * input,
  ptu_interfaces__action__SetPan_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ptu_interfaces__action__SetPan_SendGoal_Response *
ptu_interfaces__action__SetPan_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Response * msg = (ptu_interfaces__action__SetPan_SendGoal_Response *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_SendGoal_Response));
  bool success = ptu_interfaces__action__SetPan_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_SendGoal_Response__destroy(ptu_interfaces__action__SetPan_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__init(ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Response * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_SendGoal_Response__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__fini(ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * array)
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
      ptu_interfaces__action__SetPan_SendGoal_Response__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_SendGoal_Response__Sequence *
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * array = (ptu_interfaces__action__SetPan_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__destroy(ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__are_equal(const ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * lhs, const ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_SendGoal_Response__Sequence__copy(
  const ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * input,
  ptu_interfaces__action__SetPan_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_SendGoal_Response * data =
      (ptu_interfaces__action__SetPan_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ptu_interfaces__action__SetPan_GetResult_Request__init(ptu_interfaces__action__SetPan_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ptu_interfaces__action__SetPan_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ptu_interfaces__action__SetPan_GetResult_Request__fini(ptu_interfaces__action__SetPan_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ptu_interfaces__action__SetPan_GetResult_Request__are_equal(const ptu_interfaces__action__SetPan_GetResult_Request * lhs, const ptu_interfaces__action__SetPan_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_GetResult_Request__copy(
  const ptu_interfaces__action__SetPan_GetResult_Request * input,
  ptu_interfaces__action__SetPan_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ptu_interfaces__action__SetPan_GetResult_Request *
ptu_interfaces__action__SetPan_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Request * msg = (ptu_interfaces__action__SetPan_GetResult_Request *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_GetResult_Request));
  bool success = ptu_interfaces__action__SetPan_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_GetResult_Request__destroy(ptu_interfaces__action__SetPan_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__init(ptu_interfaces__action__SetPan_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Request * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_GetResult_Request *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_GetResult_Request__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__fini(ptu_interfaces__action__SetPan_GetResult_Request__Sequence * array)
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
      ptu_interfaces__action__SetPan_GetResult_Request__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_GetResult_Request__Sequence *
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Request__Sequence * array = (ptu_interfaces__action__SetPan_GetResult_Request__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__destroy(ptu_interfaces__action__SetPan_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__are_equal(const ptu_interfaces__action__SetPan_GetResult_Request__Sequence * lhs, const ptu_interfaces__action__SetPan_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_GetResult_Request__Sequence__copy(
  const ptu_interfaces__action__SetPan_GetResult_Request__Sequence * input,
  ptu_interfaces__action__SetPan_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_GetResult_Request * data =
      (ptu_interfaces__action__SetPan_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ptu_interfaces/action/detail/set_pan__functions.h"

bool
ptu_interfaces__action__SetPan_GetResult_Response__init(ptu_interfaces__action__SetPan_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ptu_interfaces__action__SetPan_Result__init(&msg->result)) {
    ptu_interfaces__action__SetPan_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ptu_interfaces__action__SetPan_GetResult_Response__fini(ptu_interfaces__action__SetPan_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ptu_interfaces__action__SetPan_Result__fini(&msg->result);
}

bool
ptu_interfaces__action__SetPan_GetResult_Response__are_equal(const ptu_interfaces__action__SetPan_GetResult_Response * lhs, const ptu_interfaces__action__SetPan_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ptu_interfaces__action__SetPan_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_GetResult_Response__copy(
  const ptu_interfaces__action__SetPan_GetResult_Response * input,
  ptu_interfaces__action__SetPan_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ptu_interfaces__action__SetPan_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ptu_interfaces__action__SetPan_GetResult_Response *
ptu_interfaces__action__SetPan_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Response * msg = (ptu_interfaces__action__SetPan_GetResult_Response *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_GetResult_Response));
  bool success = ptu_interfaces__action__SetPan_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_GetResult_Response__destroy(ptu_interfaces__action__SetPan_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__init(ptu_interfaces__action__SetPan_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Response * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_GetResult_Response *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_GetResult_Response__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__fini(ptu_interfaces__action__SetPan_GetResult_Response__Sequence * array)
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
      ptu_interfaces__action__SetPan_GetResult_Response__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_GetResult_Response__Sequence *
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_GetResult_Response__Sequence * array = (ptu_interfaces__action__SetPan_GetResult_Response__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__destroy(ptu_interfaces__action__SetPan_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__are_equal(const ptu_interfaces__action__SetPan_GetResult_Response__Sequence * lhs, const ptu_interfaces__action__SetPan_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_GetResult_Response__Sequence__copy(
  const ptu_interfaces__action__SetPan_GetResult_Response__Sequence * input,
  ptu_interfaces__action__SetPan_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_GetResult_Response * data =
      (ptu_interfaces__action__SetPan_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ptu_interfaces/action/detail/set_pan__functions.h"

bool
ptu_interfaces__action__SetPan_FeedbackMessage__init(ptu_interfaces__action__SetPan_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ptu_interfaces__action__SetPan_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ptu_interfaces__action__SetPan_Feedback__init(&msg->feedback)) {
    ptu_interfaces__action__SetPan_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ptu_interfaces__action__SetPan_FeedbackMessage__fini(ptu_interfaces__action__SetPan_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ptu_interfaces__action__SetPan_Feedback__fini(&msg->feedback);
}

bool
ptu_interfaces__action__SetPan_FeedbackMessage__are_equal(const ptu_interfaces__action__SetPan_FeedbackMessage * lhs, const ptu_interfaces__action__SetPan_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ptu_interfaces__action__SetPan_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_FeedbackMessage__copy(
  const ptu_interfaces__action__SetPan_FeedbackMessage * input,
  ptu_interfaces__action__SetPan_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ptu_interfaces__action__SetPan_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ptu_interfaces__action__SetPan_FeedbackMessage *
ptu_interfaces__action__SetPan_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_FeedbackMessage * msg = (ptu_interfaces__action__SetPan_FeedbackMessage *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ptu_interfaces__action__SetPan_FeedbackMessage));
  bool success = ptu_interfaces__action__SetPan_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ptu_interfaces__action__SetPan_FeedbackMessage__destroy(ptu_interfaces__action__SetPan_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ptu_interfaces__action__SetPan_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__init(ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_FeedbackMessage * data = NULL;

  if (size) {
    data = (ptu_interfaces__action__SetPan_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ptu_interfaces__action__SetPan_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ptu_interfaces__action__SetPan_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ptu_interfaces__action__SetPan_FeedbackMessage__fini(&data[i - 1]);
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
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__fini(ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * array)
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
      ptu_interfaces__action__SetPan_FeedbackMessage__fini(&array->data[i]);
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

ptu_interfaces__action__SetPan_FeedbackMessage__Sequence *
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * array = (ptu_interfaces__action__SetPan_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ptu_interfaces__action__SetPan_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__destroy(ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__are_equal(const ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * lhs, const ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ptu_interfaces__action__SetPan_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ptu_interfaces__action__SetPan_FeedbackMessage__Sequence__copy(
  const ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * input,
  ptu_interfaces__action__SetPan_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ptu_interfaces__action__SetPan_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ptu_interfaces__action__SetPan_FeedbackMessage * data =
      (ptu_interfaces__action__SetPan_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ptu_interfaces__action__SetPan_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ptu_interfaces__action__SetPan_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ptu_interfaces__action__SetPan_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
