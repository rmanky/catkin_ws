// Generated by gencpp from file kortex_driver/OptionIdentifier.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_OPTIONIDENTIFIER_H
#define KORTEX_DRIVER_MESSAGE_OPTIONIDENTIFIER_H


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
struct OptionIdentifier_
{
  typedef OptionIdentifier_<ContainerAllocator> Type;

  OptionIdentifier_()
    : sensor(0)
    , option(0)  {
    }
  OptionIdentifier_(const ContainerAllocator& _alloc)
    : sensor(0)
    , option(0)  {
  (void)_alloc;
    }



   typedef uint32_t _sensor_type;
  _sensor_type sensor;

   typedef uint32_t _option_type;
  _option_type option;





  typedef boost::shared_ptr< ::kortex_driver::OptionIdentifier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::OptionIdentifier_<ContainerAllocator> const> ConstPtr;

}; // struct OptionIdentifier_

typedef ::kortex_driver::OptionIdentifier_<std::allocator<void> > OptionIdentifier;

typedef boost::shared_ptr< ::kortex_driver::OptionIdentifier > OptionIdentifierPtr;
typedef boost::shared_ptr< ::kortex_driver::OptionIdentifier const> OptionIdentifierConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::OptionIdentifier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::OptionIdentifier_<ContainerAllocator1> & lhs, const ::kortex_driver::OptionIdentifier_<ContainerAllocator2> & rhs)
{
  return lhs.sensor == rhs.sensor &&
    lhs.option == rhs.option;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::OptionIdentifier_<ContainerAllocator1> & lhs, const ::kortex_driver::OptionIdentifier_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::OptionIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::OptionIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::OptionIdentifier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23d53d4ecb95c9409f8e27d3bfff4aca";
  }

  static const char* value(const ::kortex_driver::OptionIdentifier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23d53d4ecb95c940ULL;
  static const uint64_t static_value2 = 0x9f8e27d3bfff4acaULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/OptionIdentifier";
  }

  static const char* value(const ::kortex_driver::OptionIdentifier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 sensor\n"
"uint32 option\n"
;
  }

  static const char* value(const ::kortex_driver::OptionIdentifier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor);
      stream.next(m.option);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OptionIdentifier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::OptionIdentifier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::OptionIdentifier_<ContainerAllocator>& v)
  {
    s << indent << "sensor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensor);
    s << indent << "option: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.option);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_OPTIONIDENTIFIER_H
