// Generated by gencpp from file kortex_driver/SetToolConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETTOOLCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETTOOLCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ToolConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetToolConfigurationRequest_
{
  typedef SetToolConfigurationRequest_<ContainerAllocator> Type;

  SetToolConfigurationRequest_()
    : input()  {
    }
  SetToolConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ToolConfiguration_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetToolConfigurationRequest_

typedef ::kortex_driver::SetToolConfigurationRequest_<std::allocator<void> > SetToolConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::SetToolConfigurationRequest > SetToolConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetToolConfigurationRequest const> SetToolConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f1eac54862f57eb69ba3d54f12b3319";
  }

  static const char* value(const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f1eac54862f57ebULL;
  static const uint64_t static_value2 = 0x69ba3d54f12b3319ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetToolConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ToolConfiguration input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ToolConfiguration\n"
"\n"
"CartesianTransform tool_transform\n"
"float32 tool_mass\n"
"ControlConfig_Position tool_mass_center\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianTransform\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
"================================================================================\n"
"MSG: kortex_driver/ControlConfig_Position\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetToolConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetToolConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETTOOLCONFIGURATIONREQUEST_H