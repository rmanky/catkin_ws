// Generated by gencpp from file kortex_driver/ResumeSequence.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_RESUMESEQUENCE_H
#define KORTEX_DRIVER_MESSAGE_RESUMESEQUENCE_H

#include <ros/service_traits.h>


#include <kortex_driver/ResumeSequenceRequest.h>
#include <kortex_driver/ResumeSequenceResponse.h>


namespace kortex_driver
{

struct ResumeSequence
{

typedef ResumeSequenceRequest Request;
typedef ResumeSequenceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ResumeSequence
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::ResumeSequence > {
  static const char* value()
  {
    return "f335b819dc59099fe3124b36f140ad07";
  }

  static const char* value(const ::kortex_driver::ResumeSequence&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::ResumeSequence > {
  static const char* value()
  {
    return "kortex_driver/ResumeSequence";
  }

  static const char* value(const ::kortex_driver::ResumeSequence&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::ResumeSequenceRequest> should match
// service_traits::MD5Sum< ::kortex_driver::ResumeSequence >
template<>
struct MD5Sum< ::kortex_driver::ResumeSequenceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ResumeSequence >::value();
  }
  static const char* value(const ::kortex_driver::ResumeSequenceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ResumeSequenceRequest> should match
// service_traits::DataType< ::kortex_driver::ResumeSequence >
template<>
struct DataType< ::kortex_driver::ResumeSequenceRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ResumeSequence >::value();
  }
  static const char* value(const ::kortex_driver::ResumeSequenceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::ResumeSequenceResponse> should match
// service_traits::MD5Sum< ::kortex_driver::ResumeSequence >
template<>
struct MD5Sum< ::kortex_driver::ResumeSequenceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::ResumeSequence >::value();
  }
  static const char* value(const ::kortex_driver::ResumeSequenceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::ResumeSequenceResponse> should match
// service_traits::DataType< ::kortex_driver::ResumeSequence >
template<>
struct DataType< ::kortex_driver::ResumeSequenceResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::ResumeSequence >::value();
  }
  static const char* value(const ::kortex_driver::ResumeSequenceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_RESUMESEQUENCE_H
