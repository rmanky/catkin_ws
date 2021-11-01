// Generated by gencpp from file kortex_driver/SetRunModeRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETRUNMODEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETRUNMODEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/RunMode.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetRunModeRequest_
{
  typedef SetRunModeRequest_<ContainerAllocator> Type;

  SetRunModeRequest_()
    : input()  {
    }
  SetRunModeRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::RunMode_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetRunModeRequest_

typedef ::kortex_driver::SetRunModeRequest_<std::allocator<void> > SetRunModeRequest;

typedef boost::shared_ptr< ::kortex_driver::SetRunModeRequest > SetRunModeRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetRunModeRequest const> SetRunModeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetRunModeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetRunModeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetRunModeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetRunModeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetRunModeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c60d98db7420b2ff4bf4e8416a8235aa";
  }

  static const char* value(const ::kortex_driver::SetRunModeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc60d98db7420b2ffULL;
  static const uint64_t static_value2 = 0x4bf4e8416a8235aaULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetRunModeRequest";
  }

  static const char* value(const ::kortex_driver::SetRunModeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RunMode input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/RunMode\n"
"\n"
"uint32 run_mode\n"
;
  }

  static const char* value(const ::kortex_driver::SetRunModeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRunModeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetRunModeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetRunModeRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::RunMode_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETRUNMODEREQUEST_H