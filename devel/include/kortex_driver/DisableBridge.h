// Generated by gencpp from file kortex_driver/DisableBridge.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DISABLEBRIDGE_H
#define KORTEX_DRIVER_MESSAGE_DISABLEBRIDGE_H

#include <ros/service_traits.h>


#include <kortex_driver/DisableBridgeRequest.h>
#include <kortex_driver/DisableBridgeResponse.h>


namespace kortex_driver
{

struct DisableBridge
{

typedef DisableBridgeRequest Request;
typedef DisableBridgeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DisableBridge
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::DisableBridge > {
  static const char* value()
  {
    return "5d03590e711a693b2b6ee914ec9cc8b3";
  }

  static const char* value(const ::kortex_driver::DisableBridge&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::DisableBridge > {
  static const char* value()
  {
    return "kortex_driver/DisableBridge";
  }

  static const char* value(const ::kortex_driver::DisableBridge&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::DisableBridgeRequest> should match
// service_traits::MD5Sum< ::kortex_driver::DisableBridge >
template<>
struct MD5Sum< ::kortex_driver::DisableBridgeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::DisableBridge >::value();
  }
  static const char* value(const ::kortex_driver::DisableBridgeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::DisableBridgeRequest> should match
// service_traits::DataType< ::kortex_driver::DisableBridge >
template<>
struct DataType< ::kortex_driver::DisableBridgeRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::DisableBridge >::value();
  }
  static const char* value(const ::kortex_driver::DisableBridgeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::DisableBridgeResponse> should match
// service_traits::MD5Sum< ::kortex_driver::DisableBridge >
template<>
struct MD5Sum< ::kortex_driver::DisableBridgeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::DisableBridge >::value();
  }
  static const char* value(const ::kortex_driver::DisableBridgeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::DisableBridgeResponse> should match
// service_traits::DataType< ::kortex_driver::DisableBridge >
template<>
struct DataType< ::kortex_driver::DisableBridgeResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::DisableBridge >::value();
  }
  static const char* value(const ::kortex_driver::DisableBridgeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DISABLEBRIDGE_H
