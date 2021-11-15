// Generated by gencpp from file kortex_driver/JointNavigationDirection.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_JOINTNAVIGATIONDIRECTION_H
#define KORTEX_DRIVER_MESSAGE_JOINTNAVIGATIONDIRECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct JointNavigationDirection_
{
  typedef JointNavigationDirection_<ContainerAllocator> Type;

  JointNavigationDirection_()
    {
    }
  JointNavigationDirection_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_JOINT_NAVIGATION_DIRECTION)
  #undef UNSPECIFIED_JOINT_NAVIGATION_DIRECTION
#endif
#if defined(_WIN32) && defined(JOINT_NEXT)
  #undef JOINT_NEXT
#endif
#if defined(_WIN32) && defined(JOINT_PREVIOUS)
  #undef JOINT_PREVIOUS
#endif

  enum {
    UNSPECIFIED_JOINT_NAVIGATION_DIRECTION = 0u,
    JOINT_NEXT = 1u,
    JOINT_PREVIOUS = 2u,
  };


  typedef boost::shared_ptr< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> const> ConstPtr;

}; // struct JointNavigationDirection_

typedef ::kortex_driver::JointNavigationDirection_<std::allocator<void> > JointNavigationDirection;

typedef boost::shared_ptr< ::kortex_driver::JointNavigationDirection > JointNavigationDirectionPtr;
typedef boost::shared_ptr< ::kortex_driver::JointNavigationDirection const> JointNavigationDirectionConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::JointNavigationDirection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "718d5eb2fe311f7d85c6686a0a7a3c9a";
  }

  static const char* value(const ::kortex_driver::JointNavigationDirection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x718d5eb2fe311f7dULL;
  static const uint64_t static_value2 = 0x85c6686a0a7a3c9aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/JointNavigationDirection";
  }

  static const char* value(const ::kortex_driver::JointNavigationDirection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_JOINT_NAVIGATION_DIRECTION = 0\n"
"\n"
"uint32 JOINT_NEXT = 1\n"
"\n"
"uint32 JOINT_PREVIOUS = 2\n"
;
  }

  static const char* value(const ::kortex_driver::JointNavigationDirection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointNavigationDirection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::JointNavigationDirection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::JointNavigationDirection_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_JOINTNAVIGATIONDIRECTION_H
