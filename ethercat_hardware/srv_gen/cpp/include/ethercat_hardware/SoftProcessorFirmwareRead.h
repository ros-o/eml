/* Auto-generated by genmsg_cpp for file /home/redheli/ros_workspace/ethercat_trunk/ethercat_hardware/srv/SoftProcessorFirmwareRead.srv */
#ifndef ETHERCAT_HARDWARE_SERVICE_SOFTPROCESSORFIRMWAREREAD_H
#define ETHERCAT_HARDWARE_SERVICE_SOFTPROCESSORFIRMWAREREAD_H
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

#include "ros/service_traits.h"




namespace ethercat_hardware
{
template <class ContainerAllocator>
struct SoftProcessorFirmwareReadRequest_ {
  typedef SoftProcessorFirmwareReadRequest_<ContainerAllocator> Type;

  SoftProcessorFirmwareReadRequest_()
  : actuator_name()
  , processor_name()
  {
  }

  SoftProcessorFirmwareReadRequest_(const ContainerAllocator& _alloc)
  : actuator_name(_alloc)
  , processor_name(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _actuator_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  actuator_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _processor_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  processor_name;


  typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SoftProcessorFirmwareReadRequest
typedef  ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<std::allocator<void> > SoftProcessorFirmwareReadRequest;

typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadRequest> SoftProcessorFirmwareReadRequestPtr;
typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadRequest const> SoftProcessorFirmwareReadRequestConstPtr;



template <class ContainerAllocator>
struct SoftProcessorFirmwareReadResponse_ {
  typedef SoftProcessorFirmwareReadResponse_<ContainerAllocator> Type;

  SoftProcessorFirmwareReadResponse_()
  : success(false)
  , error_msg()
  , instructions()
  {
  }

  SoftProcessorFirmwareReadResponse_(const ContainerAllocator& _alloc)
  : success(false)
  , error_msg(_alloc)
  , instructions(_alloc)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_msg_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  error_msg;

  typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _instructions_type;
  std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  instructions;


  typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SoftProcessorFirmwareReadResponse
typedef  ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<std::allocator<void> > SoftProcessorFirmwareReadResponse;

typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadResponse> SoftProcessorFirmwareReadResponsePtr;
typedef boost::shared_ptr< ::ethercat_hardware::SoftProcessorFirmwareReadResponse const> SoftProcessorFirmwareReadResponseConstPtr;


struct SoftProcessorFirmwareRead
{

typedef SoftProcessorFirmwareReadRequest Request;
typedef SoftProcessorFirmwareReadResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SoftProcessorFirmwareRead
} // namespace ethercat_hardware

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "777be25d71e9e85e62fa14223ffddb6b";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x777be25d71e9e85eULL;
  static const uint64_t static_value2 = 0x62fa14223ffddb6bULL;
};

template<class ContainerAllocator>
struct DataType< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ethercat_hardware/SoftProcessorFirmwareReadRequest";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string actuator_name\n\
string processor_name\n\
\n\
\n\
";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d36ea5e74d6ac75d45ab5ae553b4d4e6";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd36ea5e74d6ac75dULL;
  static const uint64_t static_value2 = 0x45ab5ae553b4d4e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ethercat_hardware/SoftProcessorFirmwareReadResponse";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
string error_msg\n\
uint32[] instructions\n\
\n\
\n\
";
  }

  static const char* value(const  ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.actuator_name);
    stream.next(m.processor_name);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SoftProcessorFirmwareReadRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
    stream.next(m.error_msg);
    stream.next(m.instructions);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SoftProcessorFirmwareReadResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<ethercat_hardware::SoftProcessorFirmwareRead> {
  static const char* value() 
  {
    return "52ad83cdf3a5cf0a74166c7d411fc0aa";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareRead&) { return value(); } 
};

template<>
struct DataType<ethercat_hardware::SoftProcessorFirmwareRead> {
  static const char* value() 
  {
    return "ethercat_hardware/SoftProcessorFirmwareRead";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareRead&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "52ad83cdf3a5cf0a74166c7d411fc0aa";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ethercat_hardware/SoftProcessorFirmwareRead";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareReadRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "52ad83cdf3a5cf0a74166c7d411fc0aa";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ethercat_hardware/SoftProcessorFirmwareRead";
  }

  static const char* value(const ethercat_hardware::SoftProcessorFirmwareReadResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ETHERCAT_HARDWARE_SERVICE_SOFTPROCESSORFIRMWAREREAD_H

