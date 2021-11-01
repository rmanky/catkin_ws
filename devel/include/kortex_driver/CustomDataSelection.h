// Generated by gencpp from file kortex_driver/CustomDataSelection.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CUSTOMDATASELECTION_H
#define KORTEX_DRIVER_MESSAGE_CUSTOMDATASELECTION_H


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
struct CustomDataSelection_
{
  typedef CustomDataSelection_<ContainerAllocator> Type;

  CustomDataSelection_()
    : channel()  {
    }
  CustomDataSelection_(const ContainerAllocator& _alloc)
    : channel(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _channel_type;
  _channel_type channel;





  typedef boost::shared_ptr< ::kortex_driver::CustomDataSelection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CustomDataSelection_<ContainerAllocator> const> ConstPtr;

}; // struct CustomDataSelection_

typedef ::kortex_driver::CustomDataSelection_<std::allocator<void> > CustomDataSelection;

typedef boost::shared_ptr< ::kortex_driver::CustomDataSelection > CustomDataSelectionPtr;
typedef boost::shared_ptr< ::kortex_driver::CustomDataSelection const> CustomDataSelectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CustomDataSelection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CustomDataSelection_<ContainerAllocator1> & lhs, const ::kortex_driver::CustomDataSelection_<ContainerAllocator2> & rhs)
{
  return lhs.channel == rhs.channel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CustomDataSelection_<ContainerAllocator1> & lhs, const ::kortex_driver::CustomDataSelection_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CustomDataSelection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CustomDataSelection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CustomDataSelection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "308bb0056e133aee362395c22802fb41";
  }

  static const char* value(const ::kortex_driver::CustomDataSelection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x308bb0056e133aeeULL;
  static const uint64_t static_value2 = 0x362395c22802fb41ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CustomDataSelection";
  }

  static const char* value(const ::kortex_driver::CustomDataSelection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32[] channel\n"
;
  }

  static const char* value(const ::kortex_driver::CustomDataSelection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomDataSelection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CustomDataSelection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CustomDataSelection_<ContainerAllocator>& v)
  {
    s << indent << "channel[]" << std::endl;
    for (size_t i = 0; i < v.channel.size(); ++i)
    {
      s << indent << "  channel[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.channel[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CUSTOMDATASELECTION_H
