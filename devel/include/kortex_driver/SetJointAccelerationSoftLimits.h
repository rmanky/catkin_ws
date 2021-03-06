// Generated by gencpp from file kortex_driver/SetJointAccelerationSoftLimits.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETJOINTACCELERATIONSOFTLIMITS_H
#define KORTEX_DRIVER_MESSAGE_SETJOINTACCELERATIONSOFTLIMITS_H

#include <ros/service_traits.h>


#include <kortex_driver/SetJointAccelerationSoftLimitsRequest.h>
#include <kortex_driver/SetJointAccelerationSoftLimitsResponse.h>


namespace kortex_driver
{

struct SetJointAccelerationSoftLimits
{

typedef SetJointAccelerationSoftLimitsRequest Request;
typedef SetJointAccelerationSoftLimitsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetJointAccelerationSoftLimits
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimits > {
  static const char* value()
  {
    return "cee0ecb0e446175f3b5cec2dbc1076e5";
  }

  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimits&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetJointAccelerationSoftLimits > {
  static const char* value()
  {
    return "kortex_driver/SetJointAccelerationSoftLimits";
  }

  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimits&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimitsRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimits >
template<>
struct MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimitsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimits >::value();
  }
  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimitsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetJointAccelerationSoftLimitsRequest> should match
// service_traits::DataType< ::kortex_driver::SetJointAccelerationSoftLimits >
template<>
struct DataType< ::kortex_driver::SetJointAccelerationSoftLimitsRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetJointAccelerationSoftLimits >::value();
  }
  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimitsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimitsResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimits >
template<>
struct MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimitsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetJointAccelerationSoftLimits >::value();
  }
  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimitsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetJointAccelerationSoftLimitsResponse> should match
// service_traits::DataType< ::kortex_driver::SetJointAccelerationSoftLimits >
template<>
struct DataType< ::kortex_driver::SetJointAccelerationSoftLimitsResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetJointAccelerationSoftLimits >::value();
  }
  static const char* value(const ::kortex_driver::SetJointAccelerationSoftLimitsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETJOINTACCELERATIONSOFTLIMITS_H
