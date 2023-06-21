// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleAirData.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_air_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_air_data__struct.h"
#include "px4_msgs/msg/detail/vehicle_air_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleAirData__ros_msg_type = px4_msgs__msg__VehicleAirData;

static bool _VehicleAirData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleAirData__ros_msg_type * ros_message = static_cast<const _VehicleAirData__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: baro_device_id
  {
    cdr << ros_message->baro_device_id;
  }

  // Field name: baro_alt_meter
  {
    cdr << ros_message->baro_alt_meter;
  }

  // Field name: baro_temp_celcius
  {
    cdr << ros_message->baro_temp_celcius;
  }

  // Field name: baro_pressure_pa
  {
    cdr << ros_message->baro_pressure_pa;
  }

  // Field name: rho
  {
    cdr << ros_message->rho;
  }

  // Field name: calibration_count
  {
    cdr << ros_message->calibration_count;
  }

  return true;
}

static bool _VehicleAirData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleAirData__ros_msg_type * ros_message = static_cast<_VehicleAirData__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: baro_device_id
  {
    cdr >> ros_message->baro_device_id;
  }

  // Field name: baro_alt_meter
  {
    cdr >> ros_message->baro_alt_meter;
  }

  // Field name: baro_temp_celcius
  {
    cdr >> ros_message->baro_temp_celcius;
  }

  // Field name: baro_pressure_pa
  {
    cdr >> ros_message->baro_pressure_pa;
  }

  // Field name: rho
  {
    cdr >> ros_message->rho;
  }

  // Field name: calibration_count
  {
    cdr >> ros_message->calibration_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleAirData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleAirData__ros_msg_type * ros_message = static_cast<const _VehicleAirData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_device_id
  {
    size_t item_size = sizeof(ros_message->baro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_alt_meter
  {
    size_t item_size = sizeof(ros_message->baro_alt_meter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_temp_celcius
  {
    size_t item_size = sizeof(ros_message->baro_temp_celcius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_pressure_pa
  {
    size_t item_size = sizeof(ros_message->baro_pressure_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rho
  {
    size_t item_size = sizeof(ros_message->rho);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_count
  {
    size_t item_size = sizeof(ros_message->calibration_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleAirData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleAirData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleAirData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: baro_device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_alt_meter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_temp_celcius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_pressure_pa
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rho
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: calibration_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleAirData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__VehicleAirData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleAirData = {
  "px4_msgs::msg",
  "VehicleAirData",
  _VehicleAirData__cdr_serialize,
  _VehicleAirData__cdr_deserialize,
  _VehicleAirData__get_serialized_size,
  _VehicleAirData__max_serialized_size
};

static rosidl_message_type_support_t _VehicleAirData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleAirData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleAirData)() {
  return &_VehicleAirData__type_support;
}

#if defined(__cplusplus)
}
#endif
