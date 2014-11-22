/* Auto-generated by genmsg_cpp for file /opt/ros/hydro/stacks/qbo_arduqbo/msg/NoiseLevels.msg */
#ifndef QBO_ARDUQBO_MESSAGE_NOISELEVELS_H
#define QBO_ARDUQBO_MESSAGE_NOISELEVELS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace qbo_arduqbo
{
template <class ContainerAllocator>
struct NoiseLevels_ {
  typedef NoiseLevels_<ContainerAllocator> Type;

  NoiseLevels_()
  : header()
  , m0(0)
  , m1(0)
  , m2(0)
  {
  }

  NoiseLevels_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , m0(0)
  , m1(0)
  , m2(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint16_t _m0_type;
  uint16_t m0;

  typedef uint16_t _m1_type;
  uint16_t m1;

  typedef uint16_t _m2_type;
  uint16_t m2;


  typedef boost::shared_ptr< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NoiseLevels
typedef  ::qbo_arduqbo::NoiseLevels_<std::allocator<void> > NoiseLevels;

typedef boost::shared_ptr< ::qbo_arduqbo::NoiseLevels> NoiseLevelsPtr;
typedef boost::shared_ptr< ::qbo_arduqbo::NoiseLevels const> NoiseLevelsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace qbo_arduqbo

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e44910923ee5ef3281d32758158e1379";
  }

  static const char* value(const  ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe44910923ee5ef32ULL;
  static const uint64_t static_value2 = 0x81d32758158e1379ULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > {
  static const char* value() 
  {
    return "qbo_arduqbo/NoiseLevels";
  }

  static const char* value(const  ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Software License Agreement (LGPL v2.1 License)\n\
#\n\
# Copyright (c) 2012 Thecorpora, Inc.\n\
#\n\
# This library is free software; you can redistribute it and/or modify \n\
# it under the terms of the GNU Lesser General Public License as published\n\
# by the Free Software Foundation; either version 2.1 of the License, \n\
# or (at your option) any later version.\n\
#\n\
# This library is distributed in the hope that it will be useful, but \n\
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY \n\
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public \n\
# License for more details.\n\
#  \n\
# You should have received a copy of the GNU General Public License \n\
# along with this program; if not, write to the Free Software \n\
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, \n\
# MA 02110-1301, USA.# Software License Agreement (LGPL v2.1 License)\n\
#\n\
# Copyright (c) 2012 Thecorpora, Inc.\n\
#\n\
# This library is free software; you can redistribute it and/or modify \n\
# it under the terms of the GNU Lesser General Public License as published\n\
# by the Free Software Foundation; either version 2.1 of the License, \n\
# or (at your option) any later version.\n\
#\n\
# This library is distributed in the hope that it will be useful, but \n\
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY \n\
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public \n\
# License for more details.\n\
#  \n\
# You should have received a copy of the GNU General Public License \n\
# along with this program; if not, write to the Free Software \n\
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, \n\
# MA 02110-1301, USA.\n\
\n\
Header header\n\
uint16 m0\n\
uint16 m1\n\
uint16 m2\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.m0);
    stream.next(m.m1);
    stream.next(m.m2);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NoiseLevels_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::qbo_arduqbo::NoiseLevels_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "m0: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.m0);
    s << indent << "m1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.m1);
    s << indent << "m2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.m2);
  }
};


} // namespace message_operations
} // namespace ros

#endif // QBO_ARDUQBO_MESSAGE_NOISELEVELS_H
