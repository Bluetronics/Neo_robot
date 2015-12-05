// Generated by gencpp from file face_recognition/recognized.msg
// DO NOT EDIT!


#ifndef FACE_RECOGNITION_MESSAGE_RECOGNIZED_H
#define FACE_RECOGNITION_MESSAGE_RECOGNIZED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace face_recognition
{
template <class ContainerAllocator>
struct recognized_
{
  typedef recognized_<ContainerAllocator> Type;

  recognized_()
    : msg()  {
    }
  recognized_(const ContainerAllocator& _alloc)
    : msg(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_type;
  _msg_type msg;




  typedef boost::shared_ptr< ::face_recognition::recognized_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_recognition::recognized_<ContainerAllocator> const> ConstPtr;

}; // struct recognized_

typedef ::face_recognition::recognized_<std::allocator<void> > recognized;

typedef boost::shared_ptr< ::face_recognition::recognized > recognizedPtr;
typedef boost::shared_ptr< ::face_recognition::recognized const> recognizedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::face_recognition::recognized_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::face_recognition::recognized_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace face_recognition

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'face_recognition': ['/home/neo/catkin_ws/src/face_recognition/msg', '/home/neo/catkin_ws/src/face_recognition/build/devel/share/face_recognition/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::face_recognition::recognized_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::face_recognition::recognized_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::recognized_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::recognized_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::recognized_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::recognized_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::face_recognition::recognized_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d96ed730776804754140b85e64c862e";
  }

  static const char* value(const ::face_recognition::recognized_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d96ed7307768047ULL;
  static const uint64_t static_value2 = 0x54140b85e64c862eULL;
};

template<class ContainerAllocator>
struct DataType< ::face_recognition::recognized_<ContainerAllocator> >
{
  static const char* value()
  {
    return "face_recognition/recognized";
  }

  static const char* value(const ::face_recognition::recognized_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::face_recognition::recognized_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string msg\n\
\n\
";
  }

  static const char* value(const ::face_recognition::recognized_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::face_recognition::recognized_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct recognized_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_recognition::recognized_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::face_recognition::recognized_<ContainerAllocator>& v)
  {
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FACE_RECOGNITION_MESSAGE_RECOGNIZED_H