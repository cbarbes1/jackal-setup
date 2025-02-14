// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ptu_interfaces:srv/SetPanTiltSpeed.idl
// generated code does not contain a copyright notice

#ifndef PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__STRUCT_HPP_
#define PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Request __declspec(deprecated)
#endif

namespace ptu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPanTiltSpeed_Request_
{
  using Type = SetPanTiltSpeed_Request_<ContainerAllocator>;

  explicit SetPanTiltSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_speed = 0.0f;
      this->tilt_speed = 0.0f;
    }
  }

  explicit SetPanTiltSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pan_speed = 0.0f;
      this->tilt_speed = 0.0f;
    }
  }

  // field types and members
  using _pan_speed_type =
    float;
  _pan_speed_type pan_speed;
  using _tilt_speed_type =
    float;
  _tilt_speed_type tilt_speed;

  // setters for named parameter idiom
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
    ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Request
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Request
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPanTiltSpeed_Request_ & other) const
  {
    if (this->pan_speed != other.pan_speed) {
      return false;
    }
    if (this->tilt_speed != other.tilt_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPanTiltSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPanTiltSpeed_Request_

// alias to use template instance with default allocator
using SetPanTiltSpeed_Request =
  ptu_interfaces::srv::SetPanTiltSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ptu_interfaces


#ifndef _WIN32
# define DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Response __declspec(deprecated)
#endif

namespace ptu_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPanTiltSpeed_Response_
{
  using Type = SetPanTiltSpeed_Response_<ContainerAllocator>;

  explicit SetPanTiltSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = false;
    }
  }

  explicit SetPanTiltSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = false;
    }
  }

  // field types and members
  using _ret_type =
    bool;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const bool & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Response
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ptu_interfaces__srv__SetPanTiltSpeed_Response
    std::shared_ptr<ptu_interfaces::srv::SetPanTiltSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPanTiltSpeed_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPanTiltSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPanTiltSpeed_Response_

// alias to use template instance with default allocator
using SetPanTiltSpeed_Response =
  ptu_interfaces::srv::SetPanTiltSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ptu_interfaces

namespace ptu_interfaces
{

namespace srv
{

struct SetPanTiltSpeed
{
  using Request = ptu_interfaces::srv::SetPanTiltSpeed_Request;
  using Response = ptu_interfaces::srv::SetPanTiltSpeed_Response;
};

}  // namespace srv

}  // namespace ptu_interfaces

#endif  // PTU_INTERFACES__SRV__DETAIL__SET_PAN_TILT_SPEED__STRUCT_HPP_
