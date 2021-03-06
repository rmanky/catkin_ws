// Generated by gencpp from file kortex_driver/DuplicateMapping.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DUPLICATEMAPPING_H
#define KORTEX_DRIVER_MESSAGE_DUPLICATEMAPPING_H

#include <ros/service_traits.h>


#include <kortex_driver/DuplicateMappingRequest.h>
#include <kortex_driver/DuplicateMappingResponse.h>


namespace kortex_driver
{

struct DuplicateMapping
{

typedef DuplicateMappingRequest Request;
typedef DuplicateMappingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DuplicateMapping
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::DuplicateMapping > {
  static const char* value()
  {
    return "bfcefbce8997010c78c9f62aadaabcab";
  }

  static const char* value(const ::kortex_driver::DuplicateMapping&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::DuplicateMapping > {
  static const char* value()
  {
    return "kortex_driver/DuplicateMapping";
  }

  static const char* value(const ::kortex_driver::DuplicateMapping&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::DuplicateMappingRequest> should match
// service_traits::MD5Sum< ::kortex_driver::DuplicateMapping >
template<>
struct MD5Sum< ::kortex_driver::DuplicateMappingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::DuplicateMapping >::value();
  }
  static const char* value(const ::kortex_driver::DuplicateMappingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::DuplicateMappingRequest> should match
// service_traits::DataType< ::kortex_driver::DuplicateMapping >
template<>
struct DataType< ::kortex_driver::DuplicateMappingRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::DuplicateMapping >::value();
  }
  static const char* value(const ::kortex_driver::DuplicateMappingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::DuplicateMappingResponse> should match
// service_traits::MD5Sum< ::kortex_driver::DuplicateMapping >
template<>
struct MD5Sum< ::kortex_driver::DuplicateMappingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::DuplicateMapping >::value();
  }
  static const char* value(const ::kortex_driver::DuplicateMappingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::DuplicateMappingResponse> should match
// service_traits::DataType< ::kortex_driver::DuplicateMapping >
template<>
struct DataType< ::kortex_driver::DuplicateMappingResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::DuplicateMapping >::value();
  }
  static const char* value(const ::kortex_driver::DuplicateMappingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DUPLICATEMAPPING_H
