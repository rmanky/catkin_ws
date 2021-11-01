// Generated by gencpp from file kortex_driver/ClearSafetyStatus.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CLEARSAFETYSTATUS_H
#define KORTEX_DRIVER_MESSAGE_CLEARSAFETYSTATUS_H

#include <ros/service_traits.h>


#include <kortex_driver/ClearSafetyStatusRequest.h>
#include <kortex_driver/ClearSafetyStatusResponse.h>


namespace kortex_driver
{

struct ClearSafetyStatus
{

typedef ClearSafetyStatusRequest Request;
typedef ClearSafetyStatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ClearSafetyStatus
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::ClearSafetyStatus > {
  static const char* value()
  {
    return "7960dab80443332660b3bb4bf774c9ab";
  }

  static const char* value(const ::kortex_driver::ClearSafetyStatus&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::ClearSafetyStatus > {
  static const char* value()
  {
    return "kortex_driver/ClearSafetyStatus";
  }

  static const char* value(const ::kortex_driver::ClearSafetyStatus&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::ClearSafetyStatusRequest> should match
// service_traits::MD5Sum< ::kortex_driver::ClearSafetyStatus >
template<>
struct MD5Sum< ::kortex_driver::ClearSafetyStatusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ClearSafetyStatus >::value();
  }
  static const char* value(const ::kortex_driver::ClearSafetyStatusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ClearSafetyStatusRequest> should match
// service_traits::DataType< ::kortex_driver::ClearSafetyStatus >
template<>
struct DataType< ::kortex_driver::ClearSafetyStatusRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ClearSafetyStatus >::value();
  }
  static const char* value(const ::kortex_driver::ClearSafetyStatusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::ClearSafetyStatusResponse> should match
// service_traits::MD5Sum< ::kortex_driver::ClearSafetyStatus >
template<>
struct MD5Sum< ::kortex_driver::ClearSafetyStatusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ClearSafetyStatus >::value();
  }
  static const char* value(const ::kortex_driver::ClearSafetyStatusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ClearSafetyStatusResponse> should match
// service_traits::DataType< ::kortex_driver::ClearSafetyStatus >
template<>
struct DataType< ::kortex_driver::ClearSafetyStatusResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ClearSafetyStatus >::value();
  }
  static const char* value(const ::kortex_driver::ClearSafetyStatusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CLEARSAFETYSTATUS_H
