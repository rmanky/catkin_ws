// Generated by gencpp from file kortex_driver/ChangeWrench.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CHANGEWRENCH_H
#define KORTEX_DRIVER_MESSAGE_CHANGEWRENCH_H


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
struct ChangeWrench_
{
  typedef ChangeWrench_<ContainerAllocator> Type;

  ChangeWrench_()
    : force(0.0)
    , torque(0.0)  {
    }
  ChangeWrench_(const ContainerAllocator& _alloc)
    : force(0.0)
    , torque(0.0)  {
  (void)_alloc;
    }



   typedef float _force_type;
  _force_type force;

   typedef float _torque_type;
  _torque_type torque;





  typedef boost::shared_ptr< ::kortex_driver::ChangeWrench_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ChangeWrench_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeWrench_

typedef ::kortex_driver::ChangeWrench_<std::allocator<void> > ChangeWrench;

typedef boost::shared_ptr< ::kortex_driver::ChangeWrench > ChangeWrenchPtr;
typedef boost::shared_ptr< ::kortex_driver::ChangeWrench const> ChangeWrenchConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ChangeWrench_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ChangeWrench_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ChangeWrench_<ContainerAllocator1> & lhs, const ::kortex_driver::ChangeWrench_<ContainerAllocator2> & rhs)
{
  return lhs.force == rhs.force &&
    lhs.torque == rhs.torque;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ChangeWrench_<ContainerAllocator1> & lhs, const ::kortex_driver::ChangeWrench_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ChangeWrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ChangeWrench_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ChangeWrench_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2afe6a3b4cba4f0de2ad91545187e9d1";
  }

  static const char* value(const ::kortex_driver::ChangeWrench_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2afe6a3b4cba4f0dULL;
  static const uint64_t static_value2 = 0xe2ad91545187e9d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ChangeWrench";
  }

  static const char* value(const ::kortex_driver::ChangeWrench_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 force\n"
"float32 torque\n"
;
  }

  static const char* value(const ::kortex_driver::ChangeWrench_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeWrench_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ChangeWrench_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ChangeWrench_<ContainerAllocator>& v)
  {
    s << indent << "force: ";
    Printer<float>::stream(s, indent + "  ", v.force);
    s << indent << "torque: ";
    Printer<float>::stream(s, indent + "  ", v.torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CHANGEWRENCH_H
