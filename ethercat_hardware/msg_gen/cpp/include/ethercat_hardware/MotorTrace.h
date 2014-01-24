/* Auto-generated by genmsg_cpp for file /home/redheli/ros_workspace/ethercat_trunk/ethercat_hardware/msg/MotorTrace.msg */
#ifndef ETHERCAT_HARDWARE_MESSAGE_MOTORTRACE_H
#define ETHERCAT_HARDWARE_MESSAGE_MOTORTRACE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "ethercat_hardware/BoardInfo.h"
#include "ethercat_hardware/ActuatorInfo.h"
#include "ethercat_hardware/MotorTraceSample.h"

namespace ethercat_hardware
{
template <class ContainerAllocator>
struct MotorTrace_ {
  typedef MotorTrace_<ContainerAllocator> Type;

  MotorTrace_()
  : header()
  , reason()
  , board_info()
  , actuator_info()
  , samples()
  {
  }

  MotorTrace_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , reason(_alloc)
  , board_info(_alloc)
  , actuator_info(_alloc)
  , samples(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _reason_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  reason;

  typedef  ::ethercat_hardware::BoardInfo_<ContainerAllocator>  _board_info_type;
   ::ethercat_hardware::BoardInfo_<ContainerAllocator>  board_info;

  typedef  ::ethercat_hardware::ActuatorInfo_<ContainerAllocator>  _actuator_info_type;
   ::ethercat_hardware::ActuatorInfo_<ContainerAllocator>  actuator_info;

  typedef std::vector< ::ethercat_hardware::MotorTraceSample_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ethercat_hardware::MotorTraceSample_<ContainerAllocator> >::other >  _samples_type;
  std::vector< ::ethercat_hardware::MotorTraceSample_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ethercat_hardware::MotorTraceSample_<ContainerAllocator> >::other >  samples;


  typedef boost::shared_ptr< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ethercat_hardware::MotorTrace_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MotorTrace
typedef  ::ethercat_hardware::MotorTrace_<std::allocator<void> > MotorTrace;

typedef boost::shared_ptr< ::ethercat_hardware::MotorTrace> MotorTracePtr;
typedef boost::shared_ptr< ::ethercat_hardware::MotorTrace const> MotorTraceConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::ethercat_hardware::MotorTrace_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::ethercat_hardware::MotorTrace_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace ethercat_hardware

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::MotorTrace_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ada0b8b7f00967d292bd5bb4f59d4bd8";
  }

  static const char* value(const  ::ethercat_hardware::MotorTrace_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xada0b8b7f00967d2ULL;
  static const uint64_t static_value2 = 0x92bd5bb4f59d4bd8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ethercat_hardware/MotorTrace";
  }

  static const char* value(const  ::ethercat_hardware::MotorTrace_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
string reason\n\
ethercat_hardware/BoardInfo board_info\n\
ethercat_hardware/ActuatorInfo actuator_info\n\
ethercat_hardware/MotorTraceSample[] samples\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: ethercat_hardware/BoardInfo\n\
string description\n\
uint32 product_code\n\
uint32 pcb\n\
uint32 pca\n\
uint32 serial\n\
uint32 firmware_major\n\
uint32 firmware_minor\n\
float64 board_resistance\n\
float64 max_pwm_ratio\n\
float64 hw_max_current\n\
bool poor_measured_motor_voltage\n\
================================================================================\n\
MSG: ethercat_hardware/ActuatorInfo\n\
uint32 id\n\
string name\n\
string robot_name\n\
string motor_make\n\
string motor_model\n\
float64 max_current\n\
float64 speed_constant\n\
float64 motor_resistance\n\
float64 motor_torque_constant\n\
float64 encoder_reduction\n\
float64 pulses_per_revolution\n\
================================================================================\n\
MSG: ethercat_hardware/MotorTraceSample\n\
float64 timestamp\n\
bool    enabled\n\
float64 supply_voltage\n\
float64 measured_motor_voltage\n\
float64 programmed_pwm\n\
float64 executed_current\n\
float64 measured_current\n\
float64 velocity\n\
float64 encoder_position\n\
uint32  encoder_error_count\n\
float64 motor_voltage_error_limit\n\
float64 filtered_motor_voltage_error\n\
float64 filtered_abs_motor_voltage_error\n\
float64 filtered_measured_voltage_error\n\
float64 filtered_abs_measured_voltage_error\n\
float64 filtered_current_error\n\
float64 filtered_abs_current_error\n\
";
  }

  static const char* value(const  ::ethercat_hardware::MotorTrace_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::ethercat_hardware::MotorTrace_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::ethercat_hardware::MotorTrace_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ethercat_hardware::MotorTrace_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.reason);
    stream.next(m.board_info);
    stream.next(m.actuator_info);
    stream.next(m.samples);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MotorTrace_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ethercat_hardware::MotorTrace_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::ethercat_hardware::MotorTrace_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "reason: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.reason);
    s << indent << "board_info: ";
s << std::endl;
    Printer< ::ethercat_hardware::BoardInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.board_info);
    s << indent << "actuator_info: ";
s << std::endl;
    Printer< ::ethercat_hardware::ActuatorInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.actuator_info);
    s << indent << "samples[]" << std::endl;
    for (size_t i = 0; i < v.samples.size(); ++i)
    {
      s << indent << "  samples[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ethercat_hardware::MotorTraceSample_<ContainerAllocator> >::stream(s, indent + "    ", v.samples[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ETHERCAT_HARDWARE_MESSAGE_MOTORTRACE_H

