#include <memory>
#include <string>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "dynamixel_sdk_custom_interfaces/msg/bulk_set_item.hpp"
#include "dynamixel_sdk_custom_interfaces/srv/bulk_get_item.hpp"
#include "dynamixel_sdk/dynamixel_sdk.h"

using namespace dynamixel;

// Control table address
#define ADDR_TORQUE_ENABLE    64
#define ADDR_PRESENT_LED      65
#define ADDR_PRESENT_POSITION 132
#define ADDR_GOAL_POSITION    116
#define ADDR_OPERATING_MODE   11

// Protocol version
#define PROTOCOL_VERSION      2.0

// Default setting
#define DXL1_ID               1
#define DXL2_ID               3
#define DXL3_ID               5
#define DXL4_ID               10
#define BAUDRATE              57600
#define DEVICE_NAME           "/dev/ttyUSB1"

class BulkReadWriteNode : public rclcpp::Node
{
public:
  BulkReadWriteNode() : Node("bulk_read_write_node"),
        portHandler(PortHandler::getPortHandler(DEVICE_NAME)),
        packetHandler(PacketHandler::getPacketHandler(PROTOCOL_VERSION)),
        groupBulkRead(portHandler, packetHandler),
        groupBulkWrite(portHandler, packetHandler)
  {
    setupDynamixel();

    bulk_get_item_srv_ = this->create_service<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>(
      "/bulk_get_item", std::bind(&BulkReadWriteNode::bulkGetItemCallback, this, std::placeholders::_1, std::placeholders::_2));

    bulk_set_item_sub_ = this->create_subscription<dynamixel_sdk_custom_interfaces::msg::BulkSetItem>(
      "/bulk_set_item", 10, std::bind(&BulkReadWriteNode::bulkSetItemCallback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "Bulk Read Write Node has been initialized.");
  }

private:
  PortHandler * portHandler;
  PacketHandler * packetHandler;
  GroupBulkRead groupBulkRead;
  GroupBulkWrite groupBulkWrite;

  rclcpp::Service<dynamixel_sdk_custom_interfaces::srv::BulkGetItem>::SharedPtr bulk_get_item_srv_;
  rclcpp::Subscription<dynamixel_sdk_custom_interfaces::msg::BulkSetItem>::SharedPtr bulk_set_item_sub_;

   // New functions for setting and getting positions
  void setPosition(uint8_t dxl_id, int32_t position)
  {
    uint8_t dxl_error = 0;
    int dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, dxl_id, ADDR_GOAL_POSITION, position, &dxl_error);
    if (dxl_comm_result != COMM_SUCCESS) {
      RCLCPP_ERROR(this->get_logger(), "Failed to set position for Dynamixel ID: %d", dxl_id);
    }
  }

  int32_t getPosition(uint8_t dxl_id)
  {
    uint8_t dxl_error = 0;
    int32_t position = 0;
    int dxl_comm_result = packetHandler->read4ByteTxRx(portHandler, dxl_id, ADDR_PRESENT_POSITION, (uint32_t*)&position, &dxl_error);
    if (dxl_comm_result != COMM_SUCCESS) {
      RCLCPP_ERROR(this->get_logger(), "Failed to get position for Dynamixel ID: %d", dxl_id);
      return -1; // You can customize the error handling based on your application's needs
    }
    return position;
  }


  void setupDynamixel()
  {
    if (!portHandler->openPort()) {
      RCLCPP_ERROR(this->get_logger(), "Failed to open the port!");
      rclcpp::shutdown();
    }

    if (!portHandler->setBaudRate(BAUDRATE)) {
      RCLCPP_ERROR(this->get_logger(), "Failed to set the baudrate!");
      rclcpp::shutdown();
    }

    // Set DXL1 to position control mode
    if (setOperatingMode(DXL1_ID, 3) != COMM_SUCCESS) {
        RCLCPP_ERROR(this->get_logger(), "Failed to set Dynamixel ID: %d to position control mode", DXL1_ID);
        rclcpp::shutdown();
    }

    // Set DXL2 to position control mode
    if (setOperatingMode(DXL2_ID, 3) != COMM_SUCCESS) {
        RCLCPP_ERROR(this->get_logger(), "Failed to set Dynamixel ID: %d to position control mode", DXL2_ID);
        rclcpp::shutdown();
    }

    // Enable torque for DXL1
    if (enableTorque(DXL1_ID) != COMM_SUCCESS) {
      RCLCPP_ERROR(this->get_logger(), "Failed to enable torque for Dynamixel ID: %d", DXL1_ID);
      rclcpp::shutdown();
    }

    // Enable torque for DXL2
    if (enableTorque(DXL2_ID) != COMM_SUCCESS) {
      RCLCPP_ERROR(this->get_logger(), "Failed to enable torque for Dynamixel ID: %d", DXL2_ID);
      rclcpp::shutdown();
    }
  }

  int setOperatingMode(uint8_t dxl_id, int mode)
  {
    uint8_t dxl_error = 0;
    return packetHandler->write1ByteTxRx(portHandler, dxl_id, ADDR_OPERATING_MODE, mode, &dxl_error);
  }

  int enableTorque(uint8_t dxl_id)
  {
    uint8_t dxl_error = 0;
    return packetHandler->write1ByteTxRx(portHandler, dxl_id, ADDR_TORQUE_ENABLE, 1, &dxl_error);
  }



void bulkGetItemCallback(
  const std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::BulkGetItem::Request> req,
  std::shared_ptr<dynamixel_sdk_custom_interfaces::srv::BulkGetItem::Response> res)
{
  int32_t position1 = getPosition(req->id1);
  int32_t position2 = getPosition(req->id2);
  int32_t position3 = getPosition(req->id3);
  int32_t position4 = getPosition(req->id4);
  

  RCLCPP_INFO(this->get_logger(), "getItem : [ID:%d] [position: %d]", req->id1, position1);
  RCLCPP_INFO(this->get_logger(), "getItem : [ID:%d] [position: %d]", req->id2, position2);
  res->value1 = position1;
  res->value2 = position2;
  res->value3 = position3;
  res->value4 = position4;
}

void bulkSetItemCallback(const dynamixel_sdk_custom_interfaces::msg::BulkSetItem::SharedPtr msg)
{
  setPosition(msg->id1, msg->value1);
  setPosition(msg->id2, msg->value2);
  setPosition(msg->id3, msg->value3);
  setPosition(msg->id4, msg->value4);

  RCLCPP_INFO(this->get_logger(), "setItem : [ID:%d] [position:%d]", msg->id1, msg->value1);
  RCLCPP_INFO(this->get_logger(), "setItem : [ID:%d] [position:%d]", msg->id2, msg->value2);
  RCLCPP_INFO(this->get_logger(), "setItem : [ID:%d] [position:%d]", msg->id3, msg->value3);
  RCLCPP_INFO(this->get_logger(), "setItem : [ID:%d] [position:%d]", msg->id4, msg->value4);
}
};


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<BulkReadWriteNode>());
  rclcpp::shutdown();
  return 0;
}
