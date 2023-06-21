// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorControlsStatus0.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS0__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS0__BUILDER_HPP_

#include "px4_msgs/msg/detail/actuator_controls_status0__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorControlsStatus0_control_power
{
public:
  explicit Init_ActuatorControlsStatus0_control_power(::px4_msgs::msg::ActuatorControlsStatus0 & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorControlsStatus0 control_power(::px4_msgs::msg::ActuatorControlsStatus0::_control_power_type arg)
  {
    msg_.control_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsStatus0 msg_;
};

class Init_ActuatorControlsStatus0_timestamp
{
public:
  Init_ActuatorControlsStatus0_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorControlsStatus0_control_power timestamp(::px4_msgs::msg::ActuatorControlsStatus0::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorControlsStatus0_control_power(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorControlsStatus0 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorControlsStatus0>()
{
  return px4_msgs::msg::builder::Init_ActuatorControlsStatus0_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS0__BUILDER_HPP_
