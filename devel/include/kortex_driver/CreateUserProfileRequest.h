// Generated by gencpp from file kortex_driver/CreateUserProfileRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CREATEUSERPROFILEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_CREATEUSERPROFILEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/FullUserProfile.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct CreateUserProfileRequest_
{
  typedef CreateUserProfileRequest_<ContainerAllocator> Type;

  CreateUserProfileRequest_()
    : input()  {
    }
  CreateUserProfileRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::FullUserProfile_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CreateUserProfileRequest_

typedef ::kortex_driver::CreateUserProfileRequest_<std::allocator<void> > CreateUserProfileRequest;

typedef boost::shared_ptr< ::kortex_driver::CreateUserProfileRequest > CreateUserProfileRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::CreateUserProfileRequest const> CreateUserProfileRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf90cb309efd5894f761d17f90a5a5b7";
  }

  static const char* value(const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf90cb309efd5894ULL;
  static const uint64_t static_value2 = 0xf761d17f90a5a5b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CreateUserProfileRequest";
  }

  static const char* value(const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FullUserProfile input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/FullUserProfile\n"
"\n"
"UserProfile user_profile\n"
"string password\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfile\n"
"\n"
"UserProfileHandle handle\n"
"string username\n"
"string firstname\n"
"string lastname\n"
"string application_data\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateUserProfileRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CreateUserProfileRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::FullUserProfile_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CREATEUSERPROFILEREQUEST_H
