// Generated by gencpp from file kortex_driver/GetCommandModeResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCOMMANDMODERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETCOMMANDMODERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CommandModeInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetCommandModeResponse_
{
  typedef GetCommandModeResponse_<ContainerAllocator> Type;

  GetCommandModeResponse_()
    : output()  {
    }
  GetCommandModeResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CommandModeInformation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCommandModeResponse_

typedef ::kortex_driver::GetCommandModeResponse_<std::allocator<void> > GetCommandModeResponse;

typedef boost::shared_ptr< ::kortex_driver::GetCommandModeResponse > GetCommandModeResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetCommandModeResponse const> GetCommandModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5111078675b28efa96c62129cf30be12";
  }

  static const char* value(const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5111078675b28efaULL;
  static const uint64_t static_value2 = 0x96c62129cf30be12ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetCommandModeResponse";
  }

  static const char* value(const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CommandModeInformation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CommandModeInformation\n"
"\n"
"uint32 command_mode\n"
;
  }

  static const char* value(const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCommandModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetCommandModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetCommandModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::CommandModeInformation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCOMMANDMODERESPONSE_H
