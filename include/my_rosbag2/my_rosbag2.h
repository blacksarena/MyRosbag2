#ifndef MY_ROSBAG2_H
#define MY_ROSBAG2_H

// ros
#include <rclcpp/rclcpp.hpp>
#include <rosbag2_transport/rosbag2_transport.hpp>
#include <std_msgs/msg/string.hpp>

namespace my_rosbag2
{

class MyRosbag2 : public rclcpp::Node
{
public:
    explicit MyRosbag2(const std::string &node_name, const rclcpp::NodeOptions &options);
    virtual ~MyRosbag2();

private:
    std::shared_ptr<rosbag2_transport::Rosbag2Transport> trans;
};

}// my_rosbag2

#endif// MY_ROSBAG2_H