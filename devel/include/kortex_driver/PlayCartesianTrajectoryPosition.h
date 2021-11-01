// Generated by gencpp from file kortex_driver/PlayCartesianTrajectoryPosition.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_PLAYCARTESIANTRAJECTORYPOSITION_H
#define KORTEX_DRIVER_MESSAGE_PLAYCARTESIANTRAJECTORYPOSITION_H

#include <ros/service_traits.h>


#include <kortex_driver/PlayCartesianTrajectoryPositionRequest.h>
#include <kortex_driver/PlayCartesianTrajectoryPositionResponse.h>


namespace kortex_driver
{

struct PlayCartesianTrajectoryPosition
{

typedef PlayCartesianTrajectoryPositionRequest Request;
typedef PlayCartesianTrajectoryPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlayCartesianTrajectoryPosition
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPosition > {
  static const char* value()
  {
    return "da1eaa51dfbdd2438263c790b42891de";
  }

  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPosition&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::PlayCartesianTrajectoryPosition > {
  static const char* value()
  {
    return "kortex_driver/PlayCartesianTrajectoryPosition";
  }

  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPosition&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPositionRequest> should match
// service_traits::MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPosition >
template<>
struct MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPosition >::value();
  }
  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::PlayCartesianTrajectoryPositionRequest> should match
// service_traits::DataType< ::kortex_driver::PlayCartesianTrajectoryPosition >
template<>
struct DataType< ::kortex_driver::PlayCartesianTrajectoryPositionRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::PlayCartesianTrajectoryPosition >::value();
  }
  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPositionResponse> should match
// service_traits::MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPosition >
template<>
struct MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::PlayCartesianTrajectoryPosition >::value();
  }
  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::PlayCartesianTrajectoryPositionResponse> should match
// service_traits::DataType< ::kortex_driver::PlayCartesianTrajectoryPosition >
template<>
struct DataType< ::kortex_driver::PlayCartesianTrajectoryPositionResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::PlayCartesianTrajectoryPosition >::value();
  }
  static const char* value(const ::kortex_driver::PlayCartesianTrajectoryPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_PLAYCARTESIANTRAJECTORYPOSITION_H
