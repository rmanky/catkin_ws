// Generated by gencpp from file kortex_driver/OnNotificationServoingModeTopic.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ONNOTIFICATIONSERVOINGMODETOPIC_H
#define KORTEX_DRIVER_MESSAGE_ONNOTIFICATIONSERVOINGMODETOPIC_H

#include <ros/service_traits.h>


#include <kortex_driver/OnNotificationServoingModeTopicRequest.h>
#include <kortex_driver/OnNotificationServoingModeTopicResponse.h>


namespace kortex_driver
{

struct OnNotificationServoingModeTopic
{

typedef OnNotificationServoingModeTopicRequest Request;
typedef OnNotificationServoingModeTopicResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct OnNotificationServoingModeTopic
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::OnNotificationServoingModeTopic > {
  static const char* value()
  {
    return "6fefdd07c6cb63a94f7b48e7e07e815b";
  }

  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopic&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::OnNotificationServoingModeTopic > {
  static const char* value()
  {
    return "kortex_driver/OnNotificationServoingModeTopic";
  }

  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopic&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::OnNotificationServoingModeTopicRequest> should match
// service_traits::MD5Sum< ::kortex_driver::OnNotificationServoingModeTopic >
template<>
struct MD5Sum< ::kortex_driver::OnNotificationServoingModeTopicRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::OnNotificationServoingModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopicRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::OnNotificationServoingModeTopicRequest> should match
// service_traits::DataType< ::kortex_driver::OnNotificationServoingModeTopic >
template<>
struct DataType< ::kortex_driver::OnNotificationServoingModeTopicRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::OnNotificationServoingModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopicRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::OnNotificationServoingModeTopicResponse> should match
// service_traits::MD5Sum< ::kortex_driver::OnNotificationServoingModeTopic >
template<>
struct MD5Sum< ::kortex_driver::OnNotificationServoingModeTopicResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::OnNotificationServoingModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopicResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::OnNotificationServoingModeTopicResponse> should match
// service_traits::DataType< ::kortex_driver::OnNotificationServoingModeTopic >
template<>
struct DataType< ::kortex_driver::OnNotificationServoingModeTopicResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::OnNotificationServoingModeTopic >::value();
  }
  static const char* value(const ::kortex_driver::OnNotificationServoingModeTopicResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ONNOTIFICATIONSERVOINGMODETOPIC_H
