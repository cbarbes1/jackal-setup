// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ptu_interfaces:srv/GetLimits.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_HPP_
#define PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ptu_interfaces__srv__GetLimits_Request __attribute__((deprecated))
#else
# define DEPRECATED__ptu_interfaces__srv__GetLimits_Request __declspec(deprecated)
#endif

namespace ptu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLimits_Request_
{
  using Type = GetLimits_Request_<ContainerAllocator>;

  explicit GetLimits_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetLimits_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ptu_interfaces__srv__GetLimits_Request
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ptu_interfaces__srv__GetLimits_Request
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLimits_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLimits_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLimits_Request_

// alias to use template instance with default allocator
using GetLimits_Request =
  ptu_interfaces::srv::GetLimits_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ptu_interfaces


#ifndef _WIN32
# define DEPRECATED__ptu_interfaces__srv__GetLimits_Response __attribute__((deprecated))
#else
# define DEPRECATED__ptu_interfaces__srv__GetLimits_Response __declspec(deprecated)
#endif

namespace ptu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLimits_Response_
{
  using Type = GetLimits_Response_<ContainerAllocator>;

  explicit GetLimits_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_min = 0.0f;
      this->tilt_min = 0.0f;
      this->pan_max = 0.0f;
      this->tilt_max = 0.0f;
    }
  }

  explicit GetLimits_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_min = 0.0f;
      this->tilt_min = 0.0f;
      this->pan_max = 0.0f;
      this->tilt_max = 0.0f;
    }
  }

  // field types and members
  using _pan_min_type =
    float;
  _pan_min_type pan_min;
  using _tilt_min_type =
    float;
  _tilt_min_type tilt_min;
  using _pan_max_type =
    float;
  _pan_max_type pan_max;
  using _tilt_max_type =
    float;
  _tilt_max_type tilt_max;

  // setters for named parameter idiom
  Type & set__pan_min(
    const float & _arg)
  {
    this->pan_min = _arg;
    return *this;
  }
  Type & set__tilt_min(
    const float & _arg)
  {
    this->tilt_min = _arg;
    return *this;
  }
  Type & set__pan_max(
    const float & _arg)
  {
    this->pan_max = _arg;
    return *this;
  }
  Type & set__tilt_max(
    const float & _arg)
  {
    this->tilt_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ptu_interfaces__srv__GetLimits_Response
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ptu_interfaces__srv__GetLimits_Response
    std::shared_ptr<ptu_interfaces::srv::GetLimits_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLimits_Response_ & other) const
  {
    if (this->pan_min != other.pan_min) {
      return false;
    }
    if (this->tilt_min != other.tilt_min) {
      return false;
    }
    if (this->pan_max != other.pan_max) {
      return false;
    }
    if (this->tilt_max != other.tilt_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLimits_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLimits_Response_

// alias to use template instance with default allocator
using GetLimits_Response =
  ptu_interfaces::srv::GetLimits_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ptu_interfaces

namespace ptu_interfaces
{

namespace srv
{

struct GetLimits
{
  using Request = ptu_interfaces::srv::GetLimits_Request;
  using Response = ptu_interfaces::srv::GetLimits_Response;
};

}  // namespace srv

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__GET_LIMITS__STRUCT_HPP_
