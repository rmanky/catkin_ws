// Generated by gencpp from file gopher_unity/PositionServiceRequest.msg
// DO NOT EDIT!


#ifndef GOPHER_UNITY_MESSAGE_POSITIONSERVICEREQUEST_H
#define GOPHER_UNITY_MESSAGE_POSITIONSERVICEREQUEST_H


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
struct PositionServiceRequest_
{
  typedef PositionServiceRequest_<ContainerAllocator> Type;

  PositionServiceRequest_()
    : input()  {
    }
  PositionServiceRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::gopher_unity::PosRot_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PositionServiceRequest_

typedef ::gopher_unity::PositionServiceRequest_<std::allocator<void> > PositionServiceRequest;

typedef boost::shared_ptr< ::gopher_unity::PositionServiceRequest > PositionServiceRequestPtr;
typedef boost::shared_ptr< ::gopher_unity::PositionServiceRequest const> PositionServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gopher_unity::PositionServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gopher_unity::PositionServiceRequest_<ContainerAllocator1> & lhs, const ::gopher_unity::PositionServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gopher_unity::PositionServiceRequest_<ContainerAllocator1> & lhs, const ::gopher_unity::PositionServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gopher_unity

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8e4a2d3805052790871d9acbcc92af5";
  }

  static const char* value(const ::gopher_unity::PositionServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8e4a2d380505279ULL;
  static const uint64_t static_value2 = 0x0871d9acbcc92af5ULL;
};

template<class ContainerAllocator>
struct DataType< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gopher_unity/PositionServiceRequest";
  }

  static const char* value(const ::gopher_unity::PositionServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PosRot input\n"
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

  static const char* value(const ::gopher_unity::PositionServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gopher_unity::PositionServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gopher_unity::PositionServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::gopher_unity::PosRot_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GOPHER_UNITY_MESSAGE_POSITIONSERVICEREQUEST_H
