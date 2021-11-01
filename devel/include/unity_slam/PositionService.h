// Generated by gencpp from file unity_slam/PositionService.msg
// DO NOT EDIT!


#ifndef UNITY_SLAM_MESSAGE_POSITIONSERVICE_H
#define UNITY_SLAM_MESSAGE_POSITIONSERVICE_H

#include <ros/service_traits.h>


#include <unity_slam/PositionServiceRequest.h>
#include <unity_slam/PositionServiceResponse.h>


namespace unity_slam
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
} // namespace unity_slam


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::unity_slam::PositionService > {
  static const char* value()
  {
    return "5190f887b70decc2fafe0ae2939b233a";
  }

  static const char* value(const ::unity_slam::PositionService&) { return value(); }
};

template<>
struct DataType< ::unity_slam::PositionService > {
  static const char* value()
  {
    return "unity_slam/PositionService";
  }

  static const char* value(const ::unity_slam::PositionService&) { return value(); }
};


// service_traits::MD5Sum< ::unity_slam::PositionServiceRequest> should match
// service_traits::MD5Sum< ::unity_slam::PositionService >
template<>
struct MD5Sum< ::unity_slam::PositionServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::unity_slam::PositionService >::value();
  }
  static const char* value(const ::unity_slam::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::unity_slam::PositionServiceRequest> should match
// service_traits::DataType< ::unity_slam::PositionService >
template<>
struct DataType< ::unity_slam::PositionServiceRequest>
{
  static const char* value()
  {
    return DataType< ::unity_slam::PositionService >::value();
  }
  static const char* value(const ::unity_slam::PositionServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::unity_slam::PositionServiceResponse> should match
// service_traits::MD5Sum< ::unity_slam::PositionService >
template<>
struct MD5Sum< ::unity_slam::PositionServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::unity_slam::PositionService >::value();
  }
  static const char* value(const ::unity_slam::PositionServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::unity_slam::PositionServiceResponse> should match
// service_traits::DataType< ::unity_slam::PositionService >
template<>
struct DataType< ::unity_slam::PositionServiceResponse>
{
  static const char* value()
  {
    return DataType< ::unity_slam::PositionService >::value();
  }
  static const char* value(const ::unity_slam::PositionServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UNITY_SLAM_MESSAGE_POSITIONSERVICE_H