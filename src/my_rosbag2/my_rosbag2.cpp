#include "my_rosbag2/my_rosbag2.h"

using namespace my_rosbag2;

MyRosbag2::MyRosbag2(const std::string &node_name, const rclcpp::NodeOptions &options)
:rclcpp::Node(node_name, options)
,trans(std::make_shared<rosbag2_transport::Rosbag2Transport>())
{
    // rosbag2のための設定
    rosbag2_transport::StorageOptions soptions;
    soptions.storage_id = "sqlite3";
    soptions.uri = "/home/kozawa-takayuki/ros2/rosbag2";
    rosbag2_transport::RecordOptions roptions;
    roptions.rmw_serialization_format = "cdr";
    roptions.all = true;
    // roptions.topics.push_back("/chatter");

    // 保存開始
    trans->record(soptions, roptions);
}

MyRosbag2::~MyRosbag2()
{
}
