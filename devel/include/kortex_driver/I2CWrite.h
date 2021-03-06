// Generated by gencpp from file kortex_driver/I2CWrite.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_I2CWRITE_H
#define KORTEX_DRIVER_MESSAGE_I2CWRITE_H

#include <ros/service_traits.h>


#include <kortex_driver/I2CWriteRequest.h>
#include <kortex_driver/I2CWriteResponse.h>


namespace kortex_driver
{

struct I2CWrite
{

typedef I2CWriteRequest Request;
typedef I2CWriteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct I2CWrite
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::I2CWrite > {
  static const char* value()
  {
    return "976795fac6276cbe1f1d899c54c1e043";
  }

  static const char* value(const ::kortex_driver::I2CWrite&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::I2CWrite > {
  static const char* value()
  {
    return "kortex_driver/I2CWrite";
  }

  static const char* value(const ::kortex_driver::I2CWrite&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::I2CWriteRequest> should match
// service_traits::MD5Sum< ::kortex_driver::I2CWrite >
template<>
struct MD5Sum< ::kortex_driver::I2CWriteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::I2CWrite >::value();
  }
  static const char* value(const ::kortex_driver::I2CWriteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::I2CWriteRequest> should match
// service_traits::DataType< ::kortex_driver::I2CWrite >
template<>
struct DataType< ::kortex_driver::I2CWriteRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::I2CWrite >::value();
  }
  static const char* value(const ::kortex_driver::I2CWriteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::I2CWriteResponse> should match
// service_traits::MD5Sum< ::kortex_driver::I2CWrite >
template<>
struct MD5Sum< ::kortex_driver::I2CWriteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::I2CWrite >::value();
  }
  static const char* value(const ::kortex_driver::I2CWriteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::I2CWriteResponse> should match
// service_traits::DataType< ::kortex_driver::I2CWrite >
template<>
struct DataType< ::kortex_driver::I2CWriteResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::I2CWrite >::value();
  }
  static const char* value(const ::kortex_driver::I2CWriteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_I2CWRITE_H
