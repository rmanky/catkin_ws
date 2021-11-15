// Generated by gencpp from file kortex_driver/SequenceTasksPair.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SEQUENCETASKSPAIR_H
#define KORTEX_DRIVER_MESSAGE_SEQUENCETASKSPAIR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SequenceHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SequenceTasksPair_
{
  typedef SequenceTasksPair_<ContainerAllocator> Type;

  SequenceTasksPair_()
    : sequence_handle()
    , first_task_index(0)
    , second_task_index(0)  {
    }
  SequenceTasksPair_(const ContainerAllocator& _alloc)
    : sequence_handle(_alloc)
    , first_task_index(0)
    , second_task_index(0)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SequenceHandle_<ContainerAllocator>  _sequence_handle_type;
  _sequence_handle_type sequence_handle;

   typedef uint32_t _first_task_index_type;
  _first_task_index_type first_task_index;

   typedef uint32_t _second_task_index_type;
  _second_task_index_type second_task_index;





  typedef boost::shared_ptr< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> const> ConstPtr;

}; // struct SequenceTasksPair_

typedef ::kortex_driver::SequenceTasksPair_<std::allocator<void> > SequenceTasksPair;

typedef boost::shared_ptr< ::kortex_driver::SequenceTasksPair > SequenceTasksPairPtr;
typedef boost::shared_ptr< ::kortex_driver::SequenceTasksPair const> SequenceTasksPairConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SequenceTasksPair_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SequenceTasksPair_<ContainerAllocator1> & lhs, const ::kortex_driver::SequenceTasksPair_<ContainerAllocator2> & rhs)
{
  return lhs.sequence_handle == rhs.sequence_handle &&
    lhs.first_task_index == rhs.first_task_index &&
    lhs.second_task_index == rhs.second_task_index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SequenceTasksPair_<ContainerAllocator1> & lhs, const ::kortex_driver::SequenceTasksPair_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e54820745915e6c8b6b14cf1311455d";
  }

  static const char* value(const ::kortex_driver::SequenceTasksPair_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e54820745915e6cULL;
  static const uint64_t static_value2 = 0x8b6b14cf1311455dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SequenceTasksPair";
  }

  static const char* value(const ::kortex_driver::SequenceTasksPair_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"SequenceHandle sequence_handle\n"
"uint32 first_task_index\n"
"uint32 second_task_index\n"
"================================================================================\n"
"MSG: kortex_driver/SequenceHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::SequenceTasksPair_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sequence_handle);
      stream.next(m.first_task_index);
      stream.next(m.second_task_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SequenceTasksPair_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SequenceTasksPair_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SequenceTasksPair_<ContainerAllocator>& v)
  {
    s << indent << "sequence_handle: ";
    s << std::endl;
    Printer< ::kortex_driver::SequenceHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.sequence_handle);
    s << indent << "first_task_index: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.first_task_index);
    s << indent << "second_task_index: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.second_task_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SEQUENCETASKSPAIR_H
