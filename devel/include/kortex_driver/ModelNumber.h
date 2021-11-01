// Generated by gencpp from file kortex_driver/ModelNumber.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_MODELNUMBER_H
#define KORTEX_DRIVER_MESSAGE_MODELNUMBER_H


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
struct ModelNumber_
{
  typedef ModelNumber_<ContainerAllocator> Type;

  ModelNumber_()
    : model_number()  {
    }
  ModelNumber_(const ContainerAllocator& _alloc)
    : model_number(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_number_type;
  _model_number_type model_number;





  typedef boost::shared_ptr< ::kortex_driver::ModelNumber_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ModelNumber_<ContainerAllocator> const> ConstPtr;

}; // struct ModelNumber_

typedef ::kortex_driver::ModelNumber_<std::allocator<void> > ModelNumber;

typedef boost::shared_ptr< ::kortex_driver::ModelNumber > ModelNumberPtr;
typedef boost::shared_ptr< ::kortex_driver::ModelNumber const> ModelNumberConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ModelNumber_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ModelNumber_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ModelNumber_<ContainerAllocator1> & lhs, const ::kortex_driver::ModelNumber_<ContainerAllocator2> & rhs)
{
  return lhs.model_number == rhs.model_number;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ModelNumber_<ContainerAllocator1> & lhs, const ::kortex_driver::ModelNumber_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ModelNumber_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ModelNumber_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ModelNumber_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ModelNumber_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ModelNumber_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ModelNumber_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ModelNumber_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f12cb4b23059487b453a88e8d41162b5";
  }

  static const char* value(const ::kortex_driver::ModelNumber_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf12cb4b23059487bULL;
  static const uint64_t static_value2 = 0x453a88e8d41162b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ModelNumber_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ModelNumber";
  }

  static const char* value(const ::kortex_driver::ModelNumber_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ModelNumber_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string model_number\n"
;
  }

  static const char* value(const ::kortex_driver::ModelNumber_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ModelNumber_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_number);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModelNumber_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ModelNumber_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ModelNumber_<ContainerAllocator>& v)
  {
    s << indent << "model_number: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_number);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_MODELNUMBER_H
