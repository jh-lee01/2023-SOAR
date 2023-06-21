// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file VehicleControlMode.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "VehicleControlMode.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

px4_msgs::msg::VehicleControlMode::VehicleControlMode()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@dd8ba08
    m_timestamp = 0;
    // m_flag_armed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@245b4bdc
    m_flag_armed = false;
    // m_flag_multicopter_position_control_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6c64cb25
    m_flag_multicopter_position_control_enabled = false;
    // m_flag_control_manual_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6ae5aa72
    m_flag_control_manual_enabled = false;
    // m_flag_control_auto_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@222545dc
    m_flag_control_auto_enabled = false;
    // m_flag_control_offboard_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5c5eefef
    m_flag_control_offboard_enabled = false;
    // m_flag_control_rates_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@16293aa2
    m_flag_control_rates_enabled = false;
    // m_flag_control_attitude_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5158b42f
    m_flag_control_attitude_enabled = false;
    // m_flag_control_acceleration_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@595b007d
    m_flag_control_acceleration_enabled = false;
    // m_flag_control_velocity_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@72d1ad2e
    m_flag_control_velocity_enabled = false;
    // m_flag_control_position_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@2d7275fc
    m_flag_control_position_enabled = false;
    // m_flag_control_altitude_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@399f45b1
    m_flag_control_altitude_enabled = false;
    // m_flag_control_climb_rate_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@38c6f217
    m_flag_control_climb_rate_enabled = false;
    // m_flag_control_termination_enabled com.eprosima.idl.parser.typecode.PrimitiveTypeCode@478190fc
    m_flag_control_termination_enabled = false;

}

px4_msgs::msg::VehicleControlMode::~VehicleControlMode()
{














}

px4_msgs::msg::VehicleControlMode::VehicleControlMode(const VehicleControlMode &x)
{
    m_timestamp = x.m_timestamp;
    m_flag_armed = x.m_flag_armed;
    m_flag_multicopter_position_control_enabled = x.m_flag_multicopter_position_control_enabled;
    m_flag_control_manual_enabled = x.m_flag_control_manual_enabled;
    m_flag_control_auto_enabled = x.m_flag_control_auto_enabled;
    m_flag_control_offboard_enabled = x.m_flag_control_offboard_enabled;
    m_flag_control_rates_enabled = x.m_flag_control_rates_enabled;
    m_flag_control_attitude_enabled = x.m_flag_control_attitude_enabled;
    m_flag_control_acceleration_enabled = x.m_flag_control_acceleration_enabled;
    m_flag_control_velocity_enabled = x.m_flag_control_velocity_enabled;
    m_flag_control_position_enabled = x.m_flag_control_position_enabled;
    m_flag_control_altitude_enabled = x.m_flag_control_altitude_enabled;
    m_flag_control_climb_rate_enabled = x.m_flag_control_climb_rate_enabled;
    m_flag_control_termination_enabled = x.m_flag_control_termination_enabled;
}

px4_msgs::msg::VehicleControlMode::VehicleControlMode(VehicleControlMode &&x)
{
    m_timestamp = x.m_timestamp;
    m_flag_armed = x.m_flag_armed;
    m_flag_multicopter_position_control_enabled = x.m_flag_multicopter_position_control_enabled;
    m_flag_control_manual_enabled = x.m_flag_control_manual_enabled;
    m_flag_control_auto_enabled = x.m_flag_control_auto_enabled;
    m_flag_control_offboard_enabled = x.m_flag_control_offboard_enabled;
    m_flag_control_rates_enabled = x.m_flag_control_rates_enabled;
    m_flag_control_attitude_enabled = x.m_flag_control_attitude_enabled;
    m_flag_control_acceleration_enabled = x.m_flag_control_acceleration_enabled;
    m_flag_control_velocity_enabled = x.m_flag_control_velocity_enabled;
    m_flag_control_position_enabled = x.m_flag_control_position_enabled;
    m_flag_control_altitude_enabled = x.m_flag_control_altitude_enabled;
    m_flag_control_climb_rate_enabled = x.m_flag_control_climb_rate_enabled;
    m_flag_control_termination_enabled = x.m_flag_control_termination_enabled;
}

px4_msgs::msg::VehicleControlMode& px4_msgs::msg::VehicleControlMode::operator=(const VehicleControlMode &x)
{

    m_timestamp = x.m_timestamp;
    m_flag_armed = x.m_flag_armed;
    m_flag_multicopter_position_control_enabled = x.m_flag_multicopter_position_control_enabled;
    m_flag_control_manual_enabled = x.m_flag_control_manual_enabled;
    m_flag_control_auto_enabled = x.m_flag_control_auto_enabled;
    m_flag_control_offboard_enabled = x.m_flag_control_offboard_enabled;
    m_flag_control_rates_enabled = x.m_flag_control_rates_enabled;
    m_flag_control_attitude_enabled = x.m_flag_control_attitude_enabled;
    m_flag_control_acceleration_enabled = x.m_flag_control_acceleration_enabled;
    m_flag_control_velocity_enabled = x.m_flag_control_velocity_enabled;
    m_flag_control_position_enabled = x.m_flag_control_position_enabled;
    m_flag_control_altitude_enabled = x.m_flag_control_altitude_enabled;
    m_flag_control_climb_rate_enabled = x.m_flag_control_climb_rate_enabled;
    m_flag_control_termination_enabled = x.m_flag_control_termination_enabled;

    return *this;
}

px4_msgs::msg::VehicleControlMode& px4_msgs::msg::VehicleControlMode::operator=(VehicleControlMode &&x)
{

    m_timestamp = x.m_timestamp;
    m_flag_armed = x.m_flag_armed;
    m_flag_multicopter_position_control_enabled = x.m_flag_multicopter_position_control_enabled;
    m_flag_control_manual_enabled = x.m_flag_control_manual_enabled;
    m_flag_control_auto_enabled = x.m_flag_control_auto_enabled;
    m_flag_control_offboard_enabled = x.m_flag_control_offboard_enabled;
    m_flag_control_rates_enabled = x.m_flag_control_rates_enabled;
    m_flag_control_attitude_enabled = x.m_flag_control_attitude_enabled;
    m_flag_control_acceleration_enabled = x.m_flag_control_acceleration_enabled;
    m_flag_control_velocity_enabled = x.m_flag_control_velocity_enabled;
    m_flag_control_position_enabled = x.m_flag_control_position_enabled;
    m_flag_control_altitude_enabled = x.m_flag_control_altitude_enabled;
    m_flag_control_climb_rate_enabled = x.m_flag_control_climb_rate_enabled;
    m_flag_control_termination_enabled = x.m_flag_control_termination_enabled;

    return *this;
}

size_t px4_msgs::msg::VehicleControlMode::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::VehicleControlMode::getCdrSerializedSize(const px4_msgs::msg::VehicleControlMode& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::VehicleControlMode::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_flag_armed;
    scdr << m_flag_multicopter_position_control_enabled;
    scdr << m_flag_control_manual_enabled;
    scdr << m_flag_control_auto_enabled;
    scdr << m_flag_control_offboard_enabled;
    scdr << m_flag_control_rates_enabled;
    scdr << m_flag_control_attitude_enabled;
    scdr << m_flag_control_acceleration_enabled;
    scdr << m_flag_control_velocity_enabled;
    scdr << m_flag_control_position_enabled;
    scdr << m_flag_control_altitude_enabled;
    scdr << m_flag_control_climb_rate_enabled;
    scdr << m_flag_control_termination_enabled;
}

void px4_msgs::msg::VehicleControlMode::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_flag_armed;
    dcdr >> m_flag_multicopter_position_control_enabled;
    dcdr >> m_flag_control_manual_enabled;
    dcdr >> m_flag_control_auto_enabled;
    dcdr >> m_flag_control_offboard_enabled;
    dcdr >> m_flag_control_rates_enabled;
    dcdr >> m_flag_control_attitude_enabled;
    dcdr >> m_flag_control_acceleration_enabled;
    dcdr >> m_flag_control_velocity_enabled;
    dcdr >> m_flag_control_position_enabled;
    dcdr >> m_flag_control_altitude_enabled;
    dcdr >> m_flag_control_climb_rate_enabled;
    dcdr >> m_flag_control_termination_enabled;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::VehicleControlMode::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::VehicleControlMode::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::VehicleControlMode::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member flag_armed
 * @param _flag_armed New value for member flag_armed
 */
void px4_msgs::msg::VehicleControlMode::flag_armed(bool _flag_armed)
{
m_flag_armed = _flag_armed;
}

/*!
 * @brief This function returns the value of member flag_armed
 * @return Value of member flag_armed
 */
bool px4_msgs::msg::VehicleControlMode::flag_armed() const
{
    return m_flag_armed;
}

/*!
 * @brief This function returns a reference to member flag_armed
 * @return Reference to member flag_armed
 */
bool& px4_msgs::msg::VehicleControlMode::flag_armed()
{
    return m_flag_armed;
}

/*!
 * @brief This function sets a value in member flag_multicopter_position_control_enabled
 * @param _flag_multicopter_position_control_enabled New value for member flag_multicopter_position_control_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_multicopter_position_control_enabled(bool _flag_multicopter_position_control_enabled)
{
m_flag_multicopter_position_control_enabled = _flag_multicopter_position_control_enabled;
}

/*!
 * @brief This function returns the value of member flag_multicopter_position_control_enabled
 * @return Value of member flag_multicopter_position_control_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_multicopter_position_control_enabled() const
{
    return m_flag_multicopter_position_control_enabled;
}

/*!
 * @brief This function returns a reference to member flag_multicopter_position_control_enabled
 * @return Reference to member flag_multicopter_position_control_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_multicopter_position_control_enabled()
{
    return m_flag_multicopter_position_control_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_manual_enabled
 * @param _flag_control_manual_enabled New value for member flag_control_manual_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_manual_enabled(bool _flag_control_manual_enabled)
{
m_flag_control_manual_enabled = _flag_control_manual_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_manual_enabled
 * @return Value of member flag_control_manual_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_manual_enabled() const
{
    return m_flag_control_manual_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_manual_enabled
 * @return Reference to member flag_control_manual_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_manual_enabled()
{
    return m_flag_control_manual_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_auto_enabled
 * @param _flag_control_auto_enabled New value for member flag_control_auto_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_auto_enabled(bool _flag_control_auto_enabled)
{
m_flag_control_auto_enabled = _flag_control_auto_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_auto_enabled
 * @return Value of member flag_control_auto_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_auto_enabled() const
{
    return m_flag_control_auto_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_auto_enabled
 * @return Reference to member flag_control_auto_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_auto_enabled()
{
    return m_flag_control_auto_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_offboard_enabled
 * @param _flag_control_offboard_enabled New value for member flag_control_offboard_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_offboard_enabled(bool _flag_control_offboard_enabled)
{
m_flag_control_offboard_enabled = _flag_control_offboard_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_offboard_enabled
 * @return Value of member flag_control_offboard_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_offboard_enabled() const
{
    return m_flag_control_offboard_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_offboard_enabled
 * @return Reference to member flag_control_offboard_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_offboard_enabled()
{
    return m_flag_control_offboard_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_rates_enabled
 * @param _flag_control_rates_enabled New value for member flag_control_rates_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_rates_enabled(bool _flag_control_rates_enabled)
{
m_flag_control_rates_enabled = _flag_control_rates_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_rates_enabled
 * @return Value of member flag_control_rates_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_rates_enabled() const
{
    return m_flag_control_rates_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_rates_enabled
 * @return Reference to member flag_control_rates_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_rates_enabled()
{
    return m_flag_control_rates_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_attitude_enabled
 * @param _flag_control_attitude_enabled New value for member flag_control_attitude_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_attitude_enabled(bool _flag_control_attitude_enabled)
{
m_flag_control_attitude_enabled = _flag_control_attitude_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_attitude_enabled
 * @return Value of member flag_control_attitude_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_attitude_enabled() const
{
    return m_flag_control_attitude_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_attitude_enabled
 * @return Reference to member flag_control_attitude_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_attitude_enabled()
{
    return m_flag_control_attitude_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_acceleration_enabled
 * @param _flag_control_acceleration_enabled New value for member flag_control_acceleration_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_acceleration_enabled(bool _flag_control_acceleration_enabled)
{
m_flag_control_acceleration_enabled = _flag_control_acceleration_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_acceleration_enabled
 * @return Value of member flag_control_acceleration_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_acceleration_enabled() const
{
    return m_flag_control_acceleration_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_acceleration_enabled
 * @return Reference to member flag_control_acceleration_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_acceleration_enabled()
{
    return m_flag_control_acceleration_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_velocity_enabled
 * @param _flag_control_velocity_enabled New value for member flag_control_velocity_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_velocity_enabled(bool _flag_control_velocity_enabled)
{
m_flag_control_velocity_enabled = _flag_control_velocity_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_velocity_enabled
 * @return Value of member flag_control_velocity_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_velocity_enabled() const
{
    return m_flag_control_velocity_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_velocity_enabled
 * @return Reference to member flag_control_velocity_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_velocity_enabled()
{
    return m_flag_control_velocity_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_position_enabled
 * @param _flag_control_position_enabled New value for member flag_control_position_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_position_enabled(bool _flag_control_position_enabled)
{
m_flag_control_position_enabled = _flag_control_position_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_position_enabled
 * @return Value of member flag_control_position_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_position_enabled() const
{
    return m_flag_control_position_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_position_enabled
 * @return Reference to member flag_control_position_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_position_enabled()
{
    return m_flag_control_position_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_altitude_enabled
 * @param _flag_control_altitude_enabled New value for member flag_control_altitude_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_altitude_enabled(bool _flag_control_altitude_enabled)
{
m_flag_control_altitude_enabled = _flag_control_altitude_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_altitude_enabled
 * @return Value of member flag_control_altitude_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_altitude_enabled() const
{
    return m_flag_control_altitude_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_altitude_enabled
 * @return Reference to member flag_control_altitude_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_altitude_enabled()
{
    return m_flag_control_altitude_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_climb_rate_enabled
 * @param _flag_control_climb_rate_enabled New value for member flag_control_climb_rate_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_climb_rate_enabled(bool _flag_control_climb_rate_enabled)
{
m_flag_control_climb_rate_enabled = _flag_control_climb_rate_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_climb_rate_enabled
 * @return Value of member flag_control_climb_rate_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_climb_rate_enabled() const
{
    return m_flag_control_climb_rate_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_climb_rate_enabled
 * @return Reference to member flag_control_climb_rate_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_climb_rate_enabled()
{
    return m_flag_control_climb_rate_enabled;
}

/*!
 * @brief This function sets a value in member flag_control_termination_enabled
 * @param _flag_control_termination_enabled New value for member flag_control_termination_enabled
 */
void px4_msgs::msg::VehicleControlMode::flag_control_termination_enabled(bool _flag_control_termination_enabled)
{
m_flag_control_termination_enabled = _flag_control_termination_enabled;
}

/*!
 * @brief This function returns the value of member flag_control_termination_enabled
 * @return Value of member flag_control_termination_enabled
 */
bool px4_msgs::msg::VehicleControlMode::flag_control_termination_enabled() const
{
    return m_flag_control_termination_enabled;
}

/*!
 * @brief This function returns a reference to member flag_control_termination_enabled
 * @return Reference to member flag_control_termination_enabled
 */
bool& px4_msgs::msg::VehicleControlMode::flag_control_termination_enabled()
{
    return m_flag_control_termination_enabled;
}


size_t px4_msgs::msg::VehicleControlMode::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;

















    return current_align;
}

bool px4_msgs::msg::VehicleControlMode::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::VehicleControlMode::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}


