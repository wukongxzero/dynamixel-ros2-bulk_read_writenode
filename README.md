# Dynamixel ROS 2 Bulk Read/Write Node

ROS 2 C++ node for controlling four Dynamixel XM-series motors over Protocol 2.0. Implements bulk read (4 positions in one bus transaction) and bulk write (4 position targets in one transaction) via custom ROS 2 service and subscription interfaces.

## What it does

- **Bulk read**: single service call returns current positions of all 4 motors (IDs 1, 3, 5, 10) in one serial transaction — avoids 4× individual round-trips
- **Bulk write**: single topic message sets position targets for all 4 motors simultaneously
- **Setup sequencing**: enforces the correct Dynamixel init order (port → baud → mode → torque enable)

## Hardware

```
Jetson / PC
    │  USB
    ▼
U2D2 (USB ↔ TTL half-duplex adapter)
    │  TTL half-duplex (3-wire)
    ▼
Motor chain: ID 1 → ID 3 → ID 5 → ID 10
```

**Must use U2D2 or USB2Dynamixel** — standard full-duplex USB-serial adapters do not support half-duplex TTL and will fail.

## ROS 2 interface

| Interface | Type | Description |
|-----------|------|-------------|
| `/bulk_get_item` | Service (`BulkGetItem`) | Request: 4 motor IDs → Response: 4 current positions |
| `/bulk_set_item` | Subscription (`BulkSetItem`) | Message: 4 (id, position) pairs → sends to motors |

**Why service for read, subscription for write?** Reads need a response (request/reply). Writes are fire-and-forget — subscription is one-way with lower overhead and doesn't block the control loop.

## Control table addresses (Protocol 2.0)

| Address | Name | Notes |
|---------|------|-------|
| 11 | `OPERATING_MODE` | 3 = position, 1 = velocity, 16 = PWM |
| 64 | `TORQUE_ENABLE` | 0 = off, 1 = on — locks config registers |
| 116 | `GOAL_POSITION` | 4 bytes, 0–4095 ticks for 360° |
| 132 | `PRESENT_POSITION` | 4 bytes, current position |

**Position conversion:**
```
ticks   = (degrees / 360.0) * 4096
degrees = (ticks / 4096.0) * 360.0
```

## Setup sequence (order is critical)

```cpp
portHandler->openPort();                           // 1. Open /dev/ttyUSB1
portHandler->setBaudRate(57600);                   // 2. Set baud rate
packetHandler->write1ByteTxRx(..., ADDR_OPERATING_MODE, 3, &error);  // 3. Set mode
packetHandler->write1ByteTxRx(..., ADDR_TORQUE_ENABLE,  1, &error);  // 4. Enable torque
```

**`OPERATING_MODE` must be set before enabling torque.** Changing mode with torque on is silently ignored — the most common setup bug.

## Build

```bash
source /opt/ros/humble/setup.bash
colcon build --packages-select dynamixel_sdk_examples dynamixel_sdk_custom_interfaces
source install/setup.bash
```

## Run

```bash
ros2 run dynamixel_sdk_examples read_write_node
```

## Call the service

```bash
# Read positions of motors 1, 3, 5, 10
ros2 service call /bulk_get_item dynamixel_sdk_custom_interfaces/srv/BulkGetItem \
  "{id1: 1, id2: 3, id3: 5, id4: 10}"

# Set positions
ros2 topic pub /bulk_set_item dynamixel_sdk_custom_interfaces/msg/BulkSetItem \
  "{id1: 1, value1: 2048, id2: 3, value2: 2048, id3: 5, value3: 2048, id4: 10, value4: 2048}"
```

## Common failure modes

| Symptom | Cause | Fix |
|---------|-------|-----|
| Motor doesn't move | Torque not enabled | Check `TORQUE_ENABLE = 1` |
| Mode change ignored | Torque was on when mode changed | Disable torque → change mode → re-enable |
| Communication timeout | Baud rate mismatch | Use ROBOTIS Wizard to verify motor baud |
| Position jump on enable | Goal ≠ current position at enable time | Read current pos, write as goal before enabling |

## Tech stack

ROS 2 Humble · C++ · Dynamixel SDK · Protocol 2.0 · U2D2
