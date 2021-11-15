// Generated by gencpp from file kortex_driver/Waypoint_type_of_waypoint.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WAYPOINT_TYPE_OF_WAYPOINT_H
#define KORTEX_DRIVER_MESSAGE_WAYPOINT_TYPE_OF_WAYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/AngularWaypoint.h>
#include <kortex_driver/CartesianWaypoint.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Waypoint_type_of_waypoint_
{
  typedef Waypoint_type_of_waypoint_<ContainerAllocator> Type;

  Waypoint_type_of_waypoint_()
    : angular_waypoint()
    , cartesian_waypoint()  {
    }
  Waypoint_type_of_waypoint_(const ContainerAllocator& _alloc)
    : angular_waypoint(_alloc)
    , cartesian_waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::AngularWaypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >::other >  _angular_waypoint_type;
  _angular_waypoint_type angular_waypoint;

   typedef std::vector< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >::other >  _cartesian_waypoint_type;
  _cartesian_waypoint_type cartesian_waypoint;





  typedef boost::shared_ptr< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct Waypoint_type_of_waypoint_

typedef ::kortex_driver::Waypoint_type_of_waypoint_<std::allocator<void> > Waypoint_type_of_waypoint;

typedef boost::shared_ptr< ::kortex_driver::Waypoint_type_of_waypoint > Waypoint_type_of_waypointPtr;
typedef boost::shared_ptr< ::kortex_driver::Waypoint_type_of_waypoint const> Waypoint_type_of_waypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator2> & rhs)
{
  return lhs.angular_waypoint == rhs.angular_waypoint &&
    lhs.cartesian_waypoint == rhs.cartesian_waypoint;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90682b2ce9c17ef82e25a79e7e035287";
  }

  static const char* value(const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90682b2ce9c17ef8ULL;
  static const uint64_t static_value2 = 0x2e25a79e7e035287ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Waypoint_type_of_waypoint";
  }

  static const char* value(const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"AngularWaypoint[] angular_waypoint\n"
"CartesianWaypoint[] cartesian_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/AngularWaypoint\n"
"\n"
"float32[] angles\n"
"float32[] maximum_velocities\n"
"float32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianWaypoint\n"
"\n"
"Pose pose\n"
"uint32 reference_frame\n"
"float32 maximum_linear_velocity\n"
"float32 maximum_angular_velocity\n"
"float32 blending_radius\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
;
  }

  static const char* value(const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angular_waypoint);
      stream.next(m.cartesian_waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Waypoint_type_of_waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator>& v)
  {
    s << indent << "angular_waypoint[]" << std::endl;
    for (size_t i = 0; i < v.angular_waypoint.size(); ++i)
    {
      s << indent << "  angular_waypoint[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.angular_waypoint[i]);
    }
    s << indent << "cartesian_waypoint[]" << std::endl;
    for (size_t i = 0; i < v.cartesian_waypoint.size(); ++i)
    {
      s << indent << "  cartesian_waypoint[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.cartesian_waypoint[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WAYPOINT_TYPE_OF_WAYPOINT_H
