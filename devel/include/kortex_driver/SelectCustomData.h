// Generated by gencpp from file kortex_driver/SelectCustomData.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SELECTCUSTOMDATA_H
#define KORTEX_DRIVER_MESSAGE_SELECTCUSTOMDATA_H

#include <ros/service_traits.h>


#include <kortex_driver/SelectCustomDataRequest.h>
#include <kortex_driver/SelectCustomDataResponse.h>


namespace kortex_driver
{

struct SelectCustomData
{

typedef SelectCustomDataRequest Request;
typedef SelectCustomDataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SelectCustomData
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::SelectCustomData > {
  static const char* value()
  {
    return "6fbafd6efc00928eb53e0c769fef2624";
  }

  static const char* value(const ::kortex_driver::SelectCustomData&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::SelectCustomData > {
  static const char* value()
  {
    return "kortex_driver/SelectCustomData";
  }

  static const char* value(const ::kortex_driver::SelectCustomData&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::SelectCustomDataRequest> should match
// service_traits::MD5Sum< ::kortex_driver::SelectCustomData >
template<>
struct MD5Sum< ::kortex_driver::SelectCustomDataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SelectCustomData >::value();
  }
  static const char* value(const ::kortex_driver::SelectCustomDataRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SelectCustomDataRequest> should match
// service_traits::DataType< ::kortex_driver::SelectCustomData >
template<>
struct DataType< ::kortex_driver::SelectCustomDataRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SelectCustomData >::value();
  }
  static const char* value(const ::kortex_driver::SelectCustomDataRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::SelectCustomDataResponse> should match
// service_traits::MD5Sum< ::kortex_driver::SelectCustomData >
template<>
struct MD5Sum< ::kortex_driver::SelectCustomDataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::SelectCustomData >::value();
  }
  static const char* value(const ::kortex_driver::SelectCustomDataResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::SelectCustomDataResponse> should match
// service_traits::DataType< ::kortex_driver::SelectCustomData >
template<>
struct DataType< ::kortex_driver::SelectCustomDataResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::SelectCustomData >::value();
  }
  static const char* value(const ::kortex_driver::SelectCustomDataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SELECTCUSTOMDATA_H
