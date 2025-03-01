// Generated by gencpp from file industrial_msgs/RobotStatus.msg
// DO NOT EDIT!


#ifndef INDUSTRIAL_MSGS_MESSAGE_ROBOTSTATUS_H
#define INDUSTRIAL_MSGS_MESSAGE_ROBOTSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <industrial_msgs/RobotMode.h>
#include <industrial_msgs/TriState.h>
#include <industrial_msgs/TriState.h>
#include <industrial_msgs/TriState.h>
#include <industrial_msgs/TriState.h>
#include <industrial_msgs/TriState.h>

namespace industrial_msgs
{
template <class ContainerAllocator>
struct RobotStatus_
{
  typedef RobotStatus_<ContainerAllocator> Type;

  RobotStatus_()
    : header()
    , mode()
    , e_stopped()
    , drives_powered()
    , motion_possible()
    , in_motion()
    , in_error()
    , error_code(0)  {
    }
  RobotStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mode(_alloc)
    , e_stopped(_alloc)
    , drives_powered(_alloc)
    , motion_possible(_alloc)
    , in_motion(_alloc)
    , in_error(_alloc)
    , error_code(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::industrial_msgs::RobotMode_<ContainerAllocator>  _mode_type;
  _mode_type mode;

   typedef  ::industrial_msgs::TriState_<ContainerAllocator>  _e_stopped_type;
  _e_stopped_type e_stopped;

   typedef  ::industrial_msgs::TriState_<ContainerAllocator>  _drives_powered_type;
  _drives_powered_type drives_powered;

   typedef  ::industrial_msgs::TriState_<ContainerAllocator>  _motion_possible_type;
  _motion_possible_type motion_possible;

   typedef  ::industrial_msgs::TriState_<ContainerAllocator>  _in_motion_type;
  _in_motion_type in_motion;

   typedef  ::industrial_msgs::TriState_<ContainerAllocator>  _in_error_type;
  _in_error_type in_error;

   typedef int32_t _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::industrial_msgs::RobotStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::industrial_msgs::RobotStatus_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStatus_

typedef ::industrial_msgs::RobotStatus_<std::allocator<void> > RobotStatus;

typedef boost::shared_ptr< ::industrial_msgs::RobotStatus > RobotStatusPtr;
typedef boost::shared_ptr< ::industrial_msgs::RobotStatus const> RobotStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::industrial_msgs::RobotStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::industrial_msgs::RobotStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace industrial_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'industrial_msgs': ['/home/casch/yumi_depends_ws/src/KTH_ros_pkg/industrial_core/industrial_msgs/msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::industrial_msgs::RobotStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::industrial_msgs::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::industrial_msgs::RobotStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b733cb45a38101840b75c4c0d6093d19";
  }

  static const char* value(const ::industrial_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb733cb45a3810184ULL;
  static const uint64_t static_value2 = 0x0b75c4c0d6093d19ULL;
};

template<class ContainerAllocator>
struct DataType< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "industrial_msgs/RobotStatus";
  }

  static const char* value(const ::industrial_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The RobotStatus message contains low level status information \n\
# that is specific to an industrial robot controller\n\
\n\
# The header frame ID is not used\n\
Header header\n\
\n\
# The robot mode captures the operating mode of the robot.  When in\n\
# manual, remote motion is not possible.\n\
industrial_msgs/RobotMode mode\n\
\n\
# Estop status: True if robot is e-stopped.  The drives are disabled\n\
# and motion is not possible.  The e-stop condition must be acknowledged\n\
# and cleared before any motion can begin.\n\
industrial_msgs/TriState e_stopped\n\
\n\
# Drive power status: True if drives are powered.  Motion commands will \n\
# automatically enable the drives if required.  Drive power is not requred\n\
# for possible motion\n\
industrial_msgs/TriState drives_powered\n\
\n\
# Motion enabled: Ture if robot motion is possible.\n\
industrial_msgs/TriState motion_possible\n\
\n\
# Motion status: True if robot is in motion, otherwise false\n\
industrial_msgs/TriState in_motion\n\
\n\
# Error status: True if there is an error condition on the robot. Motion may\n\
# or may not be affected (see motion_possible)\n\
industrial_msgs/TriState in_error\n\
\n\
# Error code: Vendor specific error code (non zero indicates error)\n\
int32 error_code\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: industrial_msgs/RobotMode\n\
# The Robot mode message encapsulates the mode/teach state of the robot\n\
# Typically this is controlled by the pendant key switch, but not always\n\
\n\
int8 val\n\
\n\
# enumerated values\n\
int8 UNKNOWN=-1                 # Unknown or unavailable         \n\
int8 MANUAL=1 			 # Teach OR manual mode\n\
int8 AUTO=2                     # Automatic mode\n\
\n\
\n\
================================================================================\n\
MSG: industrial_msgs/TriState\n\
# The tri-state captures boolean values with the additional state of unknown\n\
\n\
int8 val\n\
\n\
# enumerated values\n\
\n\
# Unknown or unavailable \n\
int8 UNKNOWN=-1  \n\
\n\
# High state                       \n\
int8 TRUE=1\n\
int8 ON=1\n\
int8 ENABLED=1\n\
int8 HIGH=1\n\
int8 CLOSED=1\n\
\n\
# Low state\n\
int8 FALSE=0\n\
int8 OFF=0\n\
int8 DISABLED=0\n\
int8 LOW=0\n\
int8 OPEN=0\n\
\n\
";
  }

  static const char* value(const ::industrial_msgs::RobotStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mode);
      stream.next(m.e_stopped);
      stream.next(m.drives_powered);
      stream.next(m.motion_possible);
      stream.next(m.in_motion);
      stream.next(m.in_error);
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::industrial_msgs::RobotStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::industrial_msgs::RobotStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mode: ";
    s << std::endl;
    Printer< ::industrial_msgs::RobotMode_<ContainerAllocator> >::stream(s, indent + "  ", v.mode);
    s << indent << "e_stopped: ";
    s << std::endl;
    Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, indent + "  ", v.e_stopped);
    s << indent << "drives_powered: ";
    s << std::endl;
    Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, indent + "  ", v.drives_powered);
    s << indent << "motion_possible: ";
    s << std::endl;
    Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, indent + "  ", v.motion_possible);
    s << indent << "in_motion: ";
    s << std::endl;
    Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, indent + "  ", v.in_motion);
    s << indent << "in_error: ";
    s << std::endl;
    Printer< ::industrial_msgs::TriState_<ContainerAllocator> >::stream(s, indent + "  ", v.in_error);
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INDUSTRIAL_MSGS_MESSAGE_ROBOTSTATUS_H
