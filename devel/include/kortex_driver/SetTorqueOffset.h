// Generated by gencpp from file kortex_driver/SetTorqueOffset.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETTORQUEOFFSET_H
#define KORTEX_DRIVER_MESSAGE_SETTORQUEOFFSET_H

#include <ros/service_traits.h>


#include <kortex_driver/SetTorqueOffsetRequest.h>
#include <kortex_driver/SetTorqueOffsetResponse.h>


namespace kortex_driver
{

struct SetTorqueOffset
{

typedef SetTorqueOffsetRequest Request;
typedef SetTorqueOffsetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetTorqueOffset
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetTorqueOffset > {
  static const char* value()
  {
    return "8732fa2318b2bb30f603b1c319396cd0";
  }

  static const char* value(const ::kortex_driver::SetTorqueOffset&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetTorqueOffset > {
  static const char* value()
  {
    return "kortex_driver/SetTorqueOffset";
  }

  static const char* value(const ::kortex_driver::SetTorqueOffset&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetTorqueOffsetRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetTorqueOffset >
template<>
struct MD5Sum< ::kortex_driver::SetTorqueOffsetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetTorqueOffset >::value();
  }
  static const char* value(const ::kortex_driver::SetTorqueOffsetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetTorqueOffsetRequest> should match
// service_traits::DataType< ::kortex_driver::SetTorqueOffset >
template<>
struct DataType< ::kortex_driver::SetTorqueOffsetRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetTorqueOffset >::value();
  }
  static const char* value(const ::kortex_driver::SetTorqueOffsetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetTorqueOffsetResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetTorqueOffset >
template<>
struct MD5Sum< ::kortex_driver::SetTorqueOffsetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetTorqueOffset >::value();
  }
  static const char* value(const ::kortex_driver::SetTorqueOffsetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetTorqueOffsetResponse> should match
// service_traits::DataType< ::kortex_driver::SetTorqueOffset >
template<>
struct DataType< ::kortex_driver::SetTorqueOffsetResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetTorqueOffset >::value();
  }
  static const char* value(const ::kortex_driver::SetTorqueOffsetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETTORQUEOFFSET_H
