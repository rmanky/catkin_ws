// Generated by gencpp from file kortex_driver/SetDesiredJointSpeeds.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDS_H
#define KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDS_H

#include <ros/service_traits.h>


#include <kortex_driver/SetDesiredJointSpeedsRequest.h>
#include <kortex_driver/SetDesiredJointSpeedsResponse.h>


namespace kortex_driver
{

struct SetDesiredJointSpeeds
{

typedef SetDesiredJointSpeedsRequest Request;
typedef SetDesiredJointSpeedsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetDesiredJointSpeeds
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetDesiredJointSpeeds > {
  static const char* value()
  {
    return "57cd70ec5519968c6e959068a3575705";
  }

  static const char* value(const ::kortex_driver::SetDesiredJointSpeeds&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetDesiredJointSpeeds > {
  static const char* value()
  {
    return "kortex_driver/SetDesiredJointSpeeds";
  }

  static const char* value(const ::kortex_driver::SetDesiredJointSpeeds&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetDesiredJointSpeedsRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetDesiredJointSpeeds >
template<>
struct MD5Sum< ::kortex_driver::SetDesiredJointSpeedsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetDesiredJointSpeeds >::value();
  }
  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetDesiredJointSpeedsRequest> should match
// service_traits::DataType< ::kortex_driver::SetDesiredJointSpeeds >
template<>
struct DataType< ::kortex_driver::SetDesiredJointSpeedsRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetDesiredJointSpeeds >::value();
  }
  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetDesiredJointSpeedsResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetDesiredJointSpeeds >
template<>
struct MD5Sum< ::kortex_driver::SetDesiredJointSpeedsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetDesiredJointSpeeds >::value();
  }
  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetDesiredJointSpeedsResponse> should match
// service_traits::DataType< ::kortex_driver::SetDesiredJointSpeeds >
template<>
struct DataType< ::kortex_driver::SetDesiredJointSpeedsResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetDesiredJointSpeeds >::value();
  }
  static const char* value(const ::kortex_driver::SetDesiredJointSpeedsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETDESIREDJOINTSPEEDS_H
