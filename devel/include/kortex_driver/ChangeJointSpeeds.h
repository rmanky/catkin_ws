// Generated by gencpp from file kortex_driver/ChangeJointSpeeds.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CHANGEJOINTSPEEDS_H
#define KORTEX_DRIVER_MESSAGE_CHANGEJOINTSPEEDS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Base_JointSpeeds.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ChangeJointSpeeds_
{
  typedef ChangeJointSpeeds_<ContainerAllocator> Type;

  ChangeJointSpeeds_()
    : joint_speeds()  {
    }
  ChangeJointSpeeds_(const ContainerAllocator& _alloc)
    : joint_speeds(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Base_JointSpeeds_<ContainerAllocator>  _joint_speeds_type;
  _joint_speeds_type joint_speeds;





  typedef boost::shared_ptr< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeJointSpeeds_

typedef ::kortex_driver::ChangeJointSpeeds_<std::allocator<void> > ChangeJointSpeeds;

typedef boost::shared_ptr< ::kortex_driver::ChangeJointSpeeds > ChangeJointSpeedsPtr;
typedef boost::shared_ptr< ::kortex_driver::ChangeJointSpeeds const> ChangeJointSpeedsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator1> & lhs, const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator2> & rhs)
{
  return lhs.joint_speeds == rhs.joint_speeds;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator1> & lhs, const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6e510b2965f87e14832d5332810f679";
  }

  static const char* value(const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6e510b2965f87e1ULL;
  static const uint64_t static_value2 = 0x4832d5332810f679ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ChangeJointSpeeds";
  }

  static const char* value(const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Base_JointSpeeds joint_speeds\n"
"================================================================================\n"
"MSG: kortex_driver/Base_JointSpeeds\n"
"\n"
"JointSpeed[] joint_speeds\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/JointSpeed\n"
"\n"
"uint32 joint_identifier\n"
"float32 value\n"
"uint32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_speeds);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeJointSpeeds_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ChangeJointSpeeds_<ContainerAllocator>& v)
  {
    s << indent << "joint_speeds: ";
    s << std::endl;
    Printer< ::kortex_driver::Base_JointSpeeds_<ContainerAllocator> >::stream(s, indent + "  ", v.joint_speeds);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CHANGEJOINTSPEEDS_H