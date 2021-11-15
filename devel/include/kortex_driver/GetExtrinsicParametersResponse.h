// Generated by gencpp from file kortex_driver/GetExtrinsicParametersResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETEXTRINSICPARAMETERSRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETEXTRINSICPARAMETERSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ExtrinsicParameters.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetExtrinsicParametersResponse_
{
  typedef GetExtrinsicParametersResponse_<ContainerAllocator> Type;

  GetExtrinsicParametersResponse_()
    : output()  {
    }
  GetExtrinsicParametersResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ExtrinsicParameters_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetExtrinsicParametersResponse_

typedef ::kortex_driver::GetExtrinsicParametersResponse_<std::allocator<void> > GetExtrinsicParametersResponse;

typedef boost::shared_ptr< ::kortex_driver::GetExtrinsicParametersResponse > GetExtrinsicParametersResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetExtrinsicParametersResponse const> GetExtrinsicParametersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb1b8c70a178c89f172f8b8ef299947b";
  }

  static const char* value(const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb1b8c70a178c89fULL;
  static const uint64_t static_value2 = 0x172f8b8ef299947bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetExtrinsicParametersResponse";
  }

  static const char* value(const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ExtrinsicParameters output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ExtrinsicParameters\n"
"\n"
"VisionConfig_RotationMatrix rotation\n"
"TranslationVector translation\n"
"================================================================================\n"
"MSG: kortex_driver/VisionConfig_RotationMatrix\n"
"\n"
"VisionConfig_RotationMatrixRow row1\n"
"VisionConfig_RotationMatrixRow row2\n"
"VisionConfig_RotationMatrixRow row3\n"
"================================================================================\n"
"MSG: kortex_driver/VisionConfig_RotationMatrixRow\n"
"\n"
"float32 column1\n"
"float32 column2\n"
"float32 column3\n"
"================================================================================\n"
"MSG: kortex_driver/TranslationVector\n"
"\n"
"float32 t_x\n"
"float32 t_y\n"
"float32 t_z\n"
;
  }

  static const char* value(const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetExtrinsicParametersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetExtrinsicParametersResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ExtrinsicParameters_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETEXTRINSICPARAMETERSRESPONSE_H
