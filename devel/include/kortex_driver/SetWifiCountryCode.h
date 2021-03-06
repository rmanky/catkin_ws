// Generated by gencpp from file kortex_driver/SetWifiCountryCode.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODE_H
#define KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODE_H

#include <ros/service_traits.h>


#include <kortex_driver/SetWifiCountryCodeRequest.h>
#include <kortex_driver/SetWifiCountryCodeResponse.h>


namespace kortex_driver
{

struct SetWifiCountryCode
{

typedef SetWifiCountryCodeRequest Request;
typedef SetWifiCountryCodeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetWifiCountryCode
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SetWifiCountryCode > {
  static const char* value()
  {
    return "7960dab80443332660b3bb4bf774c9ab";
  }

  static const char* value(const ::kortex_driver::SetWifiCountryCode&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SetWifiCountryCode > {
  static const char* value()
  {
    return "kortex_driver/SetWifiCountryCode";
  }

  static const char* value(const ::kortex_driver::SetWifiCountryCode&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SetWifiCountryCodeRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SetWifiCountryCode >
template<>
struct MD5Sum< ::kortex_driver::SetWifiCountryCodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetWifiCountryCode >::value();
  }
  static const char* value(const ::kortex_driver::SetWifiCountryCodeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetWifiCountryCodeRequest> should match
// service_traits::DataType< ::kortex_driver::SetWifiCountryCode >
template<>
struct DataType< ::kortex_driver::SetWifiCountryCodeRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetWifiCountryCode >::value();
  }
  static const char* value(const ::kortex_driver::SetWifiCountryCodeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SetWifiCountryCodeResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SetWifiCountryCode >
template<>
struct MD5Sum< ::kortex_driver::SetWifiCountryCodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SetWifiCountryCode >::value();
  }
  static const char* value(const ::kortex_driver::SetWifiCountryCodeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SetWifiCountryCodeResponse> should match
// service_traits::DataType< ::kortex_driver::SetWifiCountryCode >
template<>
struct DataType< ::kortex_driver::SetWifiCountryCodeResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SetWifiCountryCode >::value();
  }
  static const char* value(const ::kortex_driver::SetWifiCountryCodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODE_H
