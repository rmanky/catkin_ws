// Generated by gencpp from file kortex_driver/WrenchCommand.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WRENCHCOMMAND_H
#define KORTEX_DRIVER_MESSAGE_WRENCHCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Wrench.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct WrenchCommand_
{
  typedef WrenchCommand_<ContainerAllocator> Type;

  WrenchCommand_()
    : reference_frame(0)
    , mode(0)
    , wrench()
    , duration(0)  {
    }
  WrenchCommand_(const ContainerAllocator& _alloc)
    : reference_frame(0)
    , mode(0)
    , wrench(_alloc)
    , duration(0)  {
  (void)_alloc;
    }



   typedef uint32_t _reference_frame_type;
  _reference_frame_type reference_frame;

   typedef uint32_t _mode_type;
  _mode_type mode;

   typedef  ::kortex_driver::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;

   typedef uint32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::kortex_driver::WrenchCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WrenchCommand_<ContainerAllocator> const> ConstPtr;

}; // struct WrenchCommand_

typedef ::kortex_driver::WrenchCommand_<std::allocator<void> > WrenchCommand;

typedef boost::shared_ptr< ::kortex_driver::WrenchCommand > WrenchCommandPtr;
typedef boost::shared_ptr< ::kortex_driver::WrenchCommand const> WrenchCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WrenchCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WrenchCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::WrenchCommand_<ContainerAllocator1> & lhs, const ::kortex_driver::WrenchCommand_<ContainerAllocator2> & rhs)
{
  return lhs.reference_frame == rhs.reference_frame &&
    lhs.mode == rhs.mode &&
    lhs.wrench == rhs.wrench &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::WrenchCommand_<ContainerAllocator1> & lhs, const ::kortex_driver::WrenchCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WrenchCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WrenchCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WrenchCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "76c8b85ff99edd42232a407e2d24c818";
  }

  static const char* value(const ::kortex_driver::WrenchCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x76c8b85ff99edd42ULL;
  static const uint64_t static_value2 = 0x232a407e2d24c818ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WrenchCommand";
  }

  static const char* value(const ::kortex_driver::WrenchCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 reference_frame\n"
"uint32 mode\n"
"Wrench wrench\n"
"uint32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/Wrench\n"
"\n"
"float32 force_x\n"
"float32 force_y\n"
"float32 force_z\n"
"float32 torque_x\n"
"float32 torque_y\n"
"float32 torque_z\n"
;
  }

  static const char* value(const ::kortex_driver::WrenchCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reference_frame);
      stream.next(m.mode);
      stream.next(m.wrench);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WrenchCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WrenchCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::WrenchCommand_<ContainerAllocator>& v)
  {
    s << indent << "reference_frame: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reference_frame);
    s << indent << "mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::kortex_driver::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
    s << indent << "duration: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WRENCHCOMMAND_H
