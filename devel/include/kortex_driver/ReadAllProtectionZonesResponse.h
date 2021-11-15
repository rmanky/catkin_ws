// Generated by gencpp from file kortex_driver/ReadAllProtectionZonesResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_READALLPROTECTIONZONESRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_READALLPROTECTIONZONESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ProtectionZoneList.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ReadAllProtectionZonesResponse_
{
  typedef ReadAllProtectionZonesResponse_<ContainerAllocator> Type;

  ReadAllProtectionZonesResponse_()
    : output()  {
    }
  ReadAllProtectionZonesResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ProtectionZoneList_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ReadAllProtectionZonesResponse_

typedef ::kortex_driver::ReadAllProtectionZonesResponse_<std::allocator<void> > ReadAllProtectionZonesResponse;

typedef boost::shared_ptr< ::kortex_driver::ReadAllProtectionZonesResponse > ReadAllProtectionZonesResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::ReadAllProtectionZonesResponse const> ReadAllProtectionZonesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8334fb0dbc5a4fdae35c676ee015197";
  }

  static const char* value(const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8334fb0dbc5a4fdULL;
  static const uint64_t static_value2 = 0xae35c676ee015197ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ReadAllProtectionZonesResponse";
  }

  static const char* value(const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ProtectionZoneList output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ProtectionZoneList\n"
"\n"
"ProtectionZone[] protection_zones\n"
"================================================================================\n"
"MSG: kortex_driver/ProtectionZone\n"
"\n"
"ProtectionZoneHandle handle\n"
"string name\n"
"string application_data\n"
"bool is_enabled\n"
"ZoneShape shape\n"
"CartesianLimitation[] limitations\n"
"CartesianLimitation[] envelope_limitations\n"
"================================================================================\n"
"MSG: kortex_driver/ProtectionZoneHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/ZoneShape\n"
"\n"
"uint32 shape_type\n"
"Point origin\n"
"Base_RotationMatrix orientation\n"
"float32[] dimensions\n"
"float32 envelope_thickness\n"
"================================================================================\n"
"MSG: kortex_driver/Point\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrix\n"
"\n"
"Base_RotationMatrixRow row1\n"
"Base_RotationMatrixRow row2\n"
"Base_RotationMatrixRow row3\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrixRow\n"
"\n"
"float32 column1\n"
"float32 column2\n"
"float32 column3\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianLimitation\n"
"\n"
"uint32 type\n"
"float32 translation\n"
"float32 orientation\n"
;
  }

  static const char* value(const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadAllProtectionZonesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ReadAllProtectionZonesResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ProtectionZoneList_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_READALLPROTECTIONZONESRESPONSE_H
