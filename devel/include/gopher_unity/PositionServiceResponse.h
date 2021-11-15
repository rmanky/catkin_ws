// Generated by gencpp from file gopher_unity/PositionServiceResponse.msg
// DO NOT EDIT!


#ifndef GOPHER_UNITY_MESSAGE_POSITIONSERVICERESPONSE_H
#define GOPHER_UNITY_MESSAGE_POSITIONSERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gopher_unity/PosRot.h>

namespace gopher_unity
{
template <class ContainerAllocator>
struct PositionServiceResponse_
{
  typedef PositionServiceResponse_<ContainerAllocator> Type;

  PositionServiceResponse_()
    : output()  {
    }
  PositionServiceResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::gopher_unity::PosRot_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PositionServiceResponse_

typedef ::gopher_unity::PositionServiceResponse_<std::allocator<void> > PositionServiceResponse;

typedef boost::shared_ptr< ::gopher_unity::PositionServiceResponse > PositionServiceResponsePtr;
typedef boost::shared_ptr< ::gopher_unity::PositionServiceResponse const> PositionServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gopher_unity::PositionServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gopher_unity::PositionServiceResponse_<ContainerAllocator1> & lhs, const ::gopher_unity::PositionServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gopher_unity::PositionServiceResponse_<ContainerAllocator1> & lhs, const ::gopher_unity::PositionServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gopher_unity

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f40a8c9d0d5d19208415bd9f23e5aa3f";
  }

  static const char* value(const ::gopher_unity::PositionServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf40a8c9d0d5d1920ULL;
  static const uint64_t static_value2 = 0x8415bd9f23e5aa3fULL;
};

template<class ContainerAllocator>
struct DataType< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gopher_unity/PositionServiceResponse";
  }

  static const char* value(const ::gopher_unity::PositionServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PosRot output\n"
"\n"
"\n"
"================================================================================\n"
"MSG: gopher_unity/PosRot\n"
"float32 pos_x\n"
"float32 pos_y\n"
"float32 pos_z\n"
"float32 rot_x\n"
"float32 rot_y\n"
"float32 rot_z\n"
"float32 rot_w\n"
;
  }

  static const char* value(const ::gopher_unity::PositionServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gopher_unity::PositionServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gopher_unity::PositionServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::gopher_unity::PosRot_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GOPHER_UNITY_MESSAGE_POSITIONSERVICERESPONSE_H
