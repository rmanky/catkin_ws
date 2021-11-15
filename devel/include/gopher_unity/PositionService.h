// Generated by gencpp from file gopher_unity/PositionService.msg
// DO NOT EDIT!


#ifndef GOPHER_UNITY_MESSAGE_POSITIONSERVICE_H
#define GOPHER_UNITY_MESSAGE_POSITIONSERVICE_H

#include <ros/service_traits.h>


#include <gopher_unity/PositionServiceRequest.h>
#include <gopher_unity/PositionServiceResponse.h>


namespace gopher_unity
{

struct PositionService
{

typedef PositionServiceRequest Request;
typedef PositionServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PositionService
} // namespace gopher_unity


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gopher_unity::PositionService > {
  static const char* value()
  {
    return "5190f887b70decc2fafe0ae2939b233a";
  }

  static const char* value(const ::gopher_unity::PositionService&) { return value(); }
};

template<>
struct DataType< ::gopher_unity::PositionService > {
  static const char* value()
  {
    return "gopher_unity/PositionService";
  }

  static const char* value(const ::gopher_unity::PositionService&) { return value(); }
};


// service_traits::MD5Sum< ::gopher_unity::PositionServiceRequest> should match
// service_traits::MD5Sum< ::gopher_unity::PositionService >
template<>
struct MD5Sum< ::gopher_unity::PositionServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gopher_unity::PositionService >::value();
  }
  static const char* value(const ::gopher_unity::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gopher_unity::PositionServiceRequest> should match
// service_traits::DataType< ::gopher_unity::PositionService >
template<>
struct DataType< ::gopher_unity::PositionServiceRequest>
{
  static const char* value()
  {
    return DataType< ::gopher_unity::PositionService >::value();
  }
  static const char* value(const ::gopher_unity::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gopher_unity::PositionServiceResponse> should match
// service_traits::MD5Sum< ::gopher_unity::PositionService >
template<>
struct MD5Sum< ::gopher_unity::PositionServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gopher_unity::PositionService >::value();
  }
  static const char* value(const ::gopher_unity::PositionServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gopher_unity::PositionServiceResponse> should match
// service_traits::DataType< ::gopher_unity::PositionService >
template<>
struct DataType< ::gopher_unity::PositionServiceResponse>
{
  static const char* value()
  {
    return DataType< ::gopher_unity::PositionService >::value();
  }
  static const char* value(const ::gopher_unity::PositionServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GOPHER_UNITY_MESSAGE_POSITIONSERVICE_H
