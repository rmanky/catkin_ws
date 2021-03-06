// Generated by gencpp from file kortex_driver/GetI2CConfiguration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATION_H
#define KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATION_H

#include <ros/service_traits.h>


#include <kortex_driver/GetI2CConfigurationRequest.h>
#include <kortex_driver/GetI2CConfigurationResponse.h>


namespace kortex_driver
{

struct GetI2CConfiguration
{

typedef GetI2CConfigurationRequest Request;
typedef GetI2CConfigurationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetI2CConfiguration
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetI2CConfiguration > {
  static const char* value()
  {
    return "d50c46d9bec318dcd7281869a6e5606a";
  }

  static const char* value(const ::kortex_driver::GetI2CConfiguration&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetI2CConfiguration > {
  static const char* value()
  {
    return "kortex_driver/GetI2CConfiguration";
  }

  static const char* value(const ::kortex_driver::GetI2CConfiguration&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetI2CConfigurationRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetI2CConfiguration >
template<>
struct MD5Sum< ::kortex_driver::GetI2CConfigurationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetI2CConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::GetI2CConfigurationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetI2CConfigurationRequest> should match
// service_traits::DataType< ::kortex_driver::GetI2CConfiguration >
template<>
struct DataType< ::kortex_driver::GetI2CConfigurationRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetI2CConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::GetI2CConfigurationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetI2CConfigurationResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetI2CConfiguration >
template<>
struct MD5Sum< ::kortex_driver::GetI2CConfigurationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetI2CConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::GetI2CConfigurationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetI2CConfigurationResponse> should match
// service_traits::DataType< ::kortex_driver::GetI2CConfiguration >
template<>
struct DataType< ::kortex_driver::GetI2CConfigurationResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetI2CConfiguration >::value();
  }
  static const char* value(const ::kortex_driver::GetI2CConfigurationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATION_H
