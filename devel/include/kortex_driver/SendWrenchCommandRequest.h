// Generated by gencpp from file kortex_driver/SendWrenchCommandRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SENDWRENCHCOMMANDREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SENDWRENCHCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/WrenchCommand.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SendWrenchCommandRequest_
{
  typedef SendWrenchCommandRequest_<ContainerAllocator> Type;

  SendWrenchCommandRequest_()
    : input()  {
    }
  SendWrenchCommandRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::WrenchCommand_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendWrenchCommandRequest_

typedef ::kortex_driver::SendWrenchCommandRequest_<std::allocator<void> > SendWrenchCommandRequest;

typedef boost::shared_ptr< ::kortex_driver::SendWrenchCommandRequest > SendWrenchCommandRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SendWrenchCommandRequest const> SendWrenchCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13fd06bcced6930b0ecd03c9214d87dd";
  }

  static const char* value(const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13fd06bcced6930bULL;
  static const uint64_t static_value2 = 0x0ecd03c9214d87ddULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SendWrenchCommandRequest";
  }

  static const char* value(const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "WrenchCommand input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/WrenchCommand\n"
"\n"
"uint32 reference_frame\n"
"uint32 mode\n"
"Wrench wrench\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Wrench\n"
"\n"
"float32 force_x\n"
"float32 force_y\n"
"float32 force_z\n"
"float32 torque_x\n"
"float32 torque_y\n"
"float32 torque_z\n"
;
  }

  static const char* value(const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendWrenchCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SendWrenchCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::WrenchCommand_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SENDWRENCHCOMMANDREQUEST_H
