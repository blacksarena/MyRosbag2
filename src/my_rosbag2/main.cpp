// ros2
#include <rclcpp/rclcpp.hpp>

// std
#include <memory>

// original
#include "my_rosbag2/my_rosbag2.h"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions options;
    auto node = std::make_shared<my_rosbag2::MyRosbag2>("MyRosbag2", options);

    while (rclcpp::ok())
    {
        rclcpp::spin_some(node);
    }

    rclcpp::shutdown();
    return 0;
}