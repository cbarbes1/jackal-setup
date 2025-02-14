// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ptu_interfaces:action/SetPanTilt.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__FUNCTIONS_H_
#define PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ptu_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ptu_interfaces/action/detail/set_pan_tilt__struct.h"

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_Goal
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__init(ptu_interfaces__action__SetPanTilt_Goal * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Goal__fini(ptu_interfaces__action__SetPanTilt_Goal * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Goal *
ptu_interfaces__action__SetPanTilt_Goal__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Goal__destroy(ptu_interfaces__action__SetPanTilt_Goal * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__are_equal(const ptu_interfaces__action__SetPanTilt_Goal * lhs, const ptu_interfaces__action__SetPanTilt_Goal * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__copy(
  const ptu_interfaces__action__SetPanTilt_Goal * input,
  ptu_interfaces__action__SetPanTilt_Goal * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__Sequence__init(ptu_interfaces__action__SetPanTilt_Goal__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Goal__Sequence__fini(ptu_interfaces__action__SetPanTilt_Goal__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Goal__Sequence *
ptu_interfaces__action__SetPanTilt_Goal__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Goal__Sequence__destroy(ptu_interfaces__action__SetPanTilt_Goal__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_Goal__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_Goal__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Goal__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_Goal__Sequence * input,
  ptu_interfaces__action__SetPanTilt_Goal__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_Result
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__init(ptu_interfaces__action__SetPanTilt_Result * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Result__fini(ptu_interfaces__action__SetPanTilt_Result * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Result *
ptu_interfaces__action__SetPanTilt_Result__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Result__destroy(ptu_interfaces__action__SetPanTilt_Result * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__are_equal(const ptu_interfaces__action__SetPanTilt_Result * lhs, const ptu_interfaces__action__SetPanTilt_Result * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__copy(
  const ptu_interfaces__action__SetPanTilt_Result * input,
  ptu_interfaces__action__SetPanTilt_Result * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__Sequence__init(ptu_interfaces__action__SetPanTilt_Result__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Result__Sequence__fini(ptu_interfaces__action__SetPanTilt_Result__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Result__Sequence *
ptu_interfaces__action__SetPanTilt_Result__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Result__Sequence__destroy(ptu_interfaces__action__SetPanTilt_Result__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_Result__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_Result__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Result__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_Result__Sequence * input,
  ptu_interfaces__action__SetPanTilt_Result__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_Feedback
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__init(ptu_interfaces__action__SetPanTilt_Feedback * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Feedback__fini(ptu_interfaces__action__SetPanTilt_Feedback * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Feedback *
ptu_interfaces__action__SetPanTilt_Feedback__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Feedback__destroy(ptu_interfaces__action__SetPanTilt_Feedback * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__are_equal(const ptu_interfaces__action__SetPanTilt_Feedback * lhs, const ptu_interfaces__action__SetPanTilt_Feedback * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__copy(
  const ptu_interfaces__action__SetPanTilt_Feedback * input,
  ptu_interfaces__action__SetPanTilt_Feedback * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__init(ptu_interfaces__action__SetPanTilt_Feedback__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__fini(ptu_interfaces__action__SetPanTilt_Feedback__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_Feedback__Sequence *
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__destroy(ptu_interfaces__action__SetPanTilt_Feedback__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_Feedback__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_Feedback__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_Feedback__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_Feedback__Sequence * input,
  ptu_interfaces__action__SetPanTilt_Feedback__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__init(ptu_interfaces__action__SetPanTilt_SendGoal_Request * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Request__fini(ptu_interfaces__action__SetPanTilt_SendGoal_Request * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_SendGoal_Request *
ptu_interfaces__action__SetPanTilt_SendGoal_Request__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Request__destroy(ptu_interfaces__action__SetPanTilt_SendGoal_Request * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__are_equal(const ptu_interfaces__action__SetPanTilt_SendGoal_Request * lhs, const ptu_interfaces__action__SetPanTilt_SendGoal_Request * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__copy(
  const ptu_interfaces__action__SetPanTilt_SendGoal_Request * input,
  ptu_interfaces__action__SetPanTilt_SendGoal_Request * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__init(ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__fini(ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence *
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__destroy(ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * input,
  ptu_interfaces__action__SetPanTilt_SendGoal_Request__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__init(ptu_interfaces__action__SetPanTilt_SendGoal_Response * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Response__fini(ptu_interfaces__action__SetPanTilt_SendGoal_Response * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_SendGoal_Response *
ptu_interfaces__action__SetPanTilt_SendGoal_Response__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Response__destroy(ptu_interfaces__action__SetPanTilt_SendGoal_Response * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__are_equal(const ptu_interfaces__action__SetPanTilt_SendGoal_Response * lhs, const ptu_interfaces__action__SetPanTilt_SendGoal_Response * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__copy(
  const ptu_interfaces__action__SetPanTilt_SendGoal_Response * input,
  ptu_interfaces__action__SetPanTilt_SendGoal_Response * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__init(ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__fini(ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence *
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__destroy(ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * input,
  ptu_interfaces__action__SetPanTilt_SendGoal_Response__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_GetResult_Request
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__init(ptu_interfaces__action__SetPanTilt_GetResult_Request * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Request__fini(ptu_interfaces__action__SetPanTilt_GetResult_Request * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_GetResult_Request *
ptu_interfaces__action__SetPanTilt_GetResult_Request__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Request__destroy(ptu_interfaces__action__SetPanTilt_GetResult_Request * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__are_equal(const ptu_interfaces__action__SetPanTilt_GetResult_Request * lhs, const ptu_interfaces__action__SetPanTilt_GetResult_Request * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__copy(
  const ptu_interfaces__action__SetPanTilt_GetResult_Request * input,
  ptu_interfaces__action__SetPanTilt_GetResult_Request * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__init(ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__fini(ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence *
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__destroy(ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * input,
  ptu_interfaces__action__SetPanTilt_GetResult_Request__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_GetResult_Response
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__init(ptu_interfaces__action__SetPanTilt_GetResult_Response * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Response__fini(ptu_interfaces__action__SetPanTilt_GetResult_Response * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_GetResult_Response *
ptu_interfaces__action__SetPanTilt_GetResult_Response__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Response__destroy(ptu_interfaces__action__SetPanTilt_GetResult_Response * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__are_equal(const ptu_interfaces__action__SetPanTilt_GetResult_Response * lhs, const ptu_interfaces__action__SetPanTilt_GetResult_Response * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__copy(
  const ptu_interfaces__action__SetPanTilt_GetResult_Response * input,
  ptu_interfaces__action__SetPanTilt_GetResult_Response * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__init(ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__fini(ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence *
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__destroy(ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * input,
  ptu_interfaces__action__SetPanTilt_GetResult_Response__Sequence * output);

/// Initialize action/SetPanTilt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage
 * )) before or use
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__init(ptu_interfaces__action__SetPanTilt_FeedbackMessage * msg);

/// Finalize action/SetPanTilt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_FeedbackMessage__fini(ptu_interfaces__action__SetPanTilt_FeedbackMessage * msg);

/// Create action/SetPanTilt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_FeedbackMessage *
ptu_interfaces__action__SetPanTilt_FeedbackMessage__create();

/// Destroy action/SetPanTilt message.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_FeedbackMessage__destroy(ptu_interfaces__action__SetPanTilt_FeedbackMessage * msg);

/// Check for action/SetPanTilt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__are_equal(const ptu_interfaces__action__SetPanTilt_FeedbackMessage * lhs, const ptu_interfaces__action__SetPanTilt_FeedbackMessage * rhs);

/// Copy a action/SetPanTilt message.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__copy(
  const ptu_interfaces__action__SetPanTilt_FeedbackMessage * input,
  ptu_interfaces__action__SetPanTilt_FeedbackMessage * output);

/// Initialize array of action/SetPanTilt messages.
/**
 * It allocates the memory for the number of elements and calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__init(ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__fini(ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * array);

/// Create array of action/SetPanTilt messages.
/**
 * It allocates the memory for the array and calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence *
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/SetPanTilt messages.
/**
 * It calls
 * ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
void
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__destroy(ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * array);

/// Check for action/SetPanTilt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__are_equal(const ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * lhs, const ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/SetPanTilt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ptu_interfaces
bool
ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence__copy(
  const ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * input,
  ptu_interfaces__action__SetPanTilt_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PTU_INTERFACES__ACTION__DETAIL__SET_PAN_TILT__FUNCTIONS_H_
