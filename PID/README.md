# MPU6050-Based PID Control for Self-Balancing System 🚀

This project demonstrates the use of **MPU6050 (Gyroscope + Accelerometer)** and **PID control** to manage motor outputs for self-balancing robotic systems or dynamic orientation control platforms. The design uses Arduino and standard servo motors.

---

## 🔧 Key Components

| Component        | Description                                             |
| ---------------- | ------------------------------------------------------- |
| **MPU6050**      | 6-axis IMU for reading accelerometer and gyroscope data |
| **Arduino**      | Nano/UNO or any compatible microcontroller              |
| **Servo Motors** | Controlled with PWM for left and right actuation        |
| **Wire Library** | For I2C communication with MPU6050                      |

---

## 📂 File Overview

### 1. `main_pid_control.ino`

This file:

- Initializes two servo motors
- Configures MPU6050 for accelerometer and gyroscope data
- Applies **complementary filtering** to fuse accelerometer and gyroscope angles
- Implements a **PID controller** to maintain balance or alignment
- Adjusts motor PWM values based on pitch angle deviation from setpoint

**Core Sections:**

- `Error()` — Calibrates accelerometer and gyroscope offsets
- `pid()` — Computes proportional, integral, and derivative values for balancing
- `actuation()` — Sends final PWM signals to left and right motors
- `loop()` — Continuously calculates current pitch and applies PID correction

**Control Strategy:**

> The angle is derived using sensor fusion. A PID loop calculates the correction needed to bring the robot back to its target posture.

---

### 2. `mpu6050_basic_pid.ino`

This alternative version:

- Simplifies MPU6050 angle extraction using basic Euler transformation
- Uses a PID loop focused on maintaining a specific tilt angle (primarily around one axis)
- Focuses on debugging and observation with serial prints

**Core Components:**

- `AccAngle[]`, `GyroAngle[]`, `TotalAngle[]` — Sensor fusion arrays
- `PID`, `pid_p`, `pid_i`, `pid_d` — Control variables to apply corrections

**Key Features:**

- Complimentary filter weights: 96% gyro, 4% accelerometer for stable angles
- Integral windup prevention with error clamping

---

## 🎯 Applications

- Self-balancing robots
- 2-wheel segways
- Dynamic platform stabilization
- Orientation correction in drone prototypes

---

## ⚖️ Tuning Suggestions

| Gain Type | Role                         | Initial Values | Notes                                   |
| --------- | ---------------------------- | -------------- | --------------------------------------- |
| **Kp**    | Proportional (response)      | `2.0 - 4.0`    | Higher = faster reaction, may overshoot |
| **Ki**    | Integral (accumulated error) | `0.001 - 0.01` | Helps eliminate steady-state error      |
| **Kd**    | Derivative (error rate)      | `1.0 - 3.0`    | Smoothens output, reduces oscillation   |

---

## 📉 Sensor Fusion & Stability

Sensor fusion improves accuracy:

- Accelerometer provides long-term stability (but noisy)
- Gyroscope provides fast updates (but drifts over time)

**Complementary Filter:**

```cpp
TotalAngle[i] = 0.96 * (TotalAngle[i] + GyroAngle[i] * elapsedTime) + 0.04 * AccAngle[i];
