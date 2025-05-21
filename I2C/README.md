---

# 🧠 About This Experiment

This sub-project demonstrates how **I2C (Inter-Integrated Circuit)** communication works between two Arduino boards: one acting as the **Master** and the other as the **Slave**. It includes test scripts to verify the communication flow and a Python script to facilitate serial or hardware-based communication from a PC or Raspberry Pi.

---

## 🔌 What is I2C Communication?

**I2C** is a serial communication protocol used to connect multiple devices using just two wires:
- **SDA (Serial Data)**
- **SCL (Serial Clock)**

### Key Features:
- One **Master** controls the clock and initiates communication.
- One or more **Slaves** respond to the Master.
- Each device has a **unique address**.
- Supports multiple devices on a single bus.

---

## 📁 Files Overview

### 🔹 `master.ino`
This sketch runs on the **Master Arduino**. It:
- Initializes the I2C bus with `Wire.begin()`
- Sends data to the Slave with `Wire.beginTransmission()` and `Wire.write()`
- Requests data from the Slave using `Wire.requestFrom()`
- Uses a loop to repeatedly test communication

### 🔹 `slave.ino`
This sketch runs on the **Slave Arduino**. It:
- Initializes the I2C interface with a unique address using `Wire.begin(0x8)`
- Listens for data from the Master using `Wire.onReceive(handler)`
- Sends responses to the Master using `Wire.onRequest(handler)`

### 🔹 `test.ino`
This sketch is used for:
- Testing specific I2C read/write logic
- Debugging isolated I2C interactions
- Can be flashed on either board depending on test goal

### 🔹 `test.py`
A Python script that:
- Interfaces with the Arduino via a serial port (e.g., `/dev/ttyUSB0` or `COM3`)
- Sends and reads data for debugging
- Requires `pyserial` to run

> ⚠️ Note: Python cannot use I2C on Arduino directly, but can simulate interaction over serial.

---

## 🚀 Getting Started

### ✅ Hardware Setup

- **Two Arduino boards** (Uno, Nano, etc.)
- Wire connections:
  - SDA → SDA
  - SCL → SCL
  - GND → GND (common ground is essential)

### 🧪 Upload Instructions

1. Connect one Arduino via USB and upload `slave.ino`.
2. Connect the other Arduino via USB and upload `master.ino`.
3. Open the Serial Monitor (baud rate: 9600) to observe logs and communication behavior.

### 🐍 Running `test.py`

Ensure you have Python and `pyserial` installed:

```bash
pip install pyserial
