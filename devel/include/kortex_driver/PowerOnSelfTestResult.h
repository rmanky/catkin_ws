// Generated by gencpp from file kortex_driver/PowerOnSelfTestResult.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_POWERONSELFTESTRESULT_H
#define KORTEX_DRIVER_MESSAGE_POWERONSELFTESTRESULT_H


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
struct PowerOnSelfTestResult_
{
  typedef PowerOnSelfTestResult_<ContainerAllocator> Type;

  PowerOnSelfTestResult_()
    : power_on_self_test_result(0)  {
    }
  PowerOnSelfTestResult_(const ContainerAllocator& _alloc)
    : power_on_self_test_result(0)  {
  (void)_alloc;
    }



   typedef uint32_t _power_on_self_test_result_type;
  _power_on_self_test_result_type power_on_self_test_result;





  typedef boost::shared_ptr< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> const> ConstPtr;

}; // struct PowerOnSelfTestResult_

typedef ::kortex_driver::PowerOnSelfTestResult_<std::allocator<void> > PowerOnSelfTestResult;

typedef boost::shared_ptr< ::kortex_driver::PowerOnSelfTestResult > PowerOnSelfTestResultPtr;
typedef boost::shared_ptr< ::kortex_driver::PowerOnSelfTestResult const> PowerOnSelfTestResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator1> & lhs, const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator2> & rhs)
{
  return lhs.power_on_self_test_result == rhs.power_on_self_test_result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator1> & lhs, const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "927efe338b454b142f376d1936670eb0";
  }

  static const char* value(const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x927efe338b454b14ULL;
  static const uint64_t static_value2 = 0x2f376d1936670eb0ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/PowerOnSelfTestResult";
  }

  static const char* value(const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 power_on_self_test_result\n"
;
  }

  static const char* value(const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.power_on_self_test_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerOnSelfTestResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::PowerOnSelfTestResult_<ContainerAllocator>& v)
  {
    s << indent << "power_on_self_test_result: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.power_on_self_test_result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_POWERONSELFTESTRESULT_H
