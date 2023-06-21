// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/esc_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/esc_report__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::EscReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: esc_errorcount
  cdr << ros_message.esc_errorcount;
  // Member: esc_rpm
  cdr << ros_message.esc_rpm;
  // Member: esc_voltage
  cdr << ros_message.esc_voltage;
  // Member: esc_current
  cdr << ros_message.esc_current;
  // Member: esc_temperature
  cdr << ros_message.esc_temperature;
  // Member: esc_address
  cdr << ros_message.esc_address;
  // Member: esc_state
  cdr << ros_message.esc_state;
  // Member: failures
  cdr << ros_message.failures;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EscReport & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: esc_errorcount
  cdr >> ros_message.esc_errorcount;

  // Member: esc_rpm
  cdr >> ros_message.esc_rpm;

  // Member: esc_voltage
  cdr >> ros_message.esc_voltage;

  // Member: esc_current
  cdr >> ros_message.esc_current;

  // Member: esc_temperature
  cdr >> ros_message.esc_temperature;

  // Member: esc_address
  cdr >> ros_message.esc_address;

  // Member: esc_state
  cdr >> ros_message.esc_state;

  // Member: failures
  cdr >> ros_message.failures;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EscReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_errorcount
  {
    size_t item_size = sizeof(ros_message.esc_errorcount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_rpm
  {
    size_t item_size = sizeof(ros_message.esc_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_voltage
  {
    size_t item_size = sizeof(ros_message.esc_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_current
  {
    size_t item_size = sizeof(ros_message.esc_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_temperature
  {
    size_t item_size = sizeof(ros_message.esc_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_address
  {
    size_t item_size = sizeof(ros_message.esc_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_state
  {
    size_t item_size = sizeof(ros_message.esc_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failures
  {
    size_t item_size = sizeof(ros_message.failures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EscReport(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: esc_errorcount
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: esc_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: esc_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: esc_current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: esc_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: esc_address
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failures
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _EscReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EscReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EscReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EscReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EscReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EscReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EscReport__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EscReport(full_bounded, 0);
}

static message_type_support_callbacks_t _EscReport__callbacks = {
  "px4_msgs::msg",
  "EscReport",
  _EscReport__cdr_serialize,
  _EscReport__cdr_deserialize,
  _EscReport__get_serialized_size,
  _EscReport__max_serialized_size
};

static rosidl_message_type_support_t _EscReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EscReport__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EscReport>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EscReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EscReport)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EscReport__handle;
}

#ifdef __cplusplus
}
#endif
