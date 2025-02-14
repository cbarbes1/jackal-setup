// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ptu_interfaces:msg/PTU.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_HPP_
#define PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ptu_interfaces__msg__PTU __attribute__((deprecated))
#else
# define DEPRECATED__ptu_interfaces__msg__PTU __declspec(deprecated)
#endif

namespace ptu_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PTU_
{
  using Type = PTU_<ContainerAllocator>;

  explicit PTU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan = 0.0f;
      this->tilt = 0.0f;
      this->pan_speed = 0.0f;
      this->tilt_speed = 0.0f;
    }
  }

  explicit PTU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan = 0.0f;
      this->tilt = 0.0f;
      this->pan_speed = 0.0f;
      this->tilt_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pan_type =
    float;
  _pan_type pan;
  using _tilt_type =
    float;
  _tilt_type tilt;
  using _pan_speed_type =
    float;
  _pan_speed_type pan_speed;
  using _tilt_speed_type =
    float;
  _tilt_speed_type tilt_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pan(
    const float & _arg)
  {
    this->pan = _arg;
    return *this;
  }
  Type & set__tilt(
    const float & _arg)
  {
    this->tilt = _arg;
    return *this;
  }
  Type & set__pan_speed(
    const float & _arg)
  {
    this->pan_speed = _arg;
    return *this;
  }
  Type & set__tilt_speed(
    const float & _arg)
  {
    this->tilt_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ptu_interfaces::msg::PTU_<ContainerAllocator> *;
  using ConstRawPtr =
    const ptu_interfaces::msg::PTU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::msg::PTU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::msg::PTU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ptu_interfaces__msg__PTU
    std::shared_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ptu_interfaces__msg__PTU
    std::shared_ptr<ptu_interfaces::msg::PTU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PTU_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pan != other.pan) {
      return false;
    }
    if (this->tilt != other.tilt) {
      return false;
    }
    if (this->pan_speed != other.pan_speed) {
      return false;
    }
    if (this->tilt_speed != other.tilt_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PTU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PTU_

// alias to use template instance with default allocator
using PTU =
  ptu_interfaces::msg::PTU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__MSG__DETAIL__PTU__STRUCT_HPP_
