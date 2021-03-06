// Generated by gencpp from file kortex_driver/GetAllConnectedControllers.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERS_H
#define KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERS_H

#include <ros/service_traits.h>


#include <kortex_driver/GetAllConnectedControllersRequest.h>
#include <kortex_driver/GetAllConnectedControllersResponse.h>


namespace kortex_driver
{

struct GetAllConnectedControllers
{

typedef GetAllConnectedControllersRequest Request;
typedef GetAllConnectedControllersResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAllConnectedControllers
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetAllConnectedControllers > {
  static const char* value()
  {
    return "cf23ee5904b15aa6ac88d84a59fc18f9";
  }

  static const char* value(const ::kortex_driver::GetAllConnectedControllers&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetAllConnectedControllers > {
  static const char* value()
  {
    return "kortex_driver/GetAllConnectedControllers";
  }

  static const char* value(const ::kortex_driver::GetAllConnectedControllers&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetAllConnectedControllersRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetAllConnectedControllers >
template<>
struct MD5Sum< ::kortex_driver::GetAllConnectedControllersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetAllConnectedControllers >::value();
  }
  static const char* value(const ::kortex_driver::GetAllConnectedControllersRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetAllConnectedControllersRequest> should match
// service_traits::DataType< ::kortex_driver::GetAllConnectedControllers >
template<>
struct DataType< ::kortex_driver::GetAllConnectedControllersRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetAllConnectedControllers >::value();
  }
  static const char* value(const ::kortex_driver::GetAllConnectedControllersRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetAllConnectedControllersResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetAllConnectedControllers >
template<>
struct MD5Sum< ::kortex_driver::GetAllConnectedControllersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetAllConnectedControllers >::value();
  }
  static const char* value(const ::kortex_driver::GetAllConnectedControllersResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetAllConnectedControllersResponse> should match
// service_traits::DataType< ::kortex_driver::GetAllConnectedControllers >
template<>
struct DataType< ::kortex_driver::GetAllConnectedControllersResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetAllConnectedControllers >::value();
  }
  static const char* value(const ::kortex_driver::GetAllConnectedControllersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETALLCONNECTEDCONTROLLERS_H
