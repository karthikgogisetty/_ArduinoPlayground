# NightWalkie 🕶️

A wearable obstacle detection system inspired by echolocation — designed for walking in the dark or assisting visually impaired individuals.

---

## 🚀 Inspiration

NightWalkie was born from the simple idea: **our eyes take time to adjust in the dark**. This device offers an instant solution using ultrasonic sensors and buzzers to guide users with audio cues — making it useful in blackout conditions or short-range navigation for the blind.

Inspired by how bats use **echolocation**, the system converts distance data into sound frequency — the closer the object, the higher the pitch of the sound.

---

## 🎓 Project Overview

The device uses:
- An **ultrasonic sensor** mounted on a **servo** to scan surroundings.
- **Buzzers** to provide directional feedback:
  - 🔊 Left buzzer → Obstacle on the right (move left)
  - 🔊 Right buzzer → Obstacle on the left (move right)
  - 🔊 Both buzzers → Obstacle ahead (turn around)
  - ❌ No sound → Path is clear

The formula `f = 1/T` is applied, where:
- `T` = time taken for signal to reflect back
- `f` = frequency of buzzer sound

---

## 🧑‍💻 Author

- **Name:** Karthik Gogisetty  
- **College:** Manipal Institute of Technology  
- **Year:** Third

---

## 🛠️ Requirements

| Component               | Description/Link |
|------------------------|------------------|
| Spectacles             | [Lenskart](https://www.lenskart.com/...) |
| Arduino Nano/UNO       | [Nano](https://robu.in/product/original-arduino-nano-33-ble-sense/) / [UNO](https://robu.in/product/arduino-uno-r3/) |
| Jumper Wires           | [Buy](https://robu.in/product/20-cm-dupont-cable-male-male-male-female-female-female-combo/) |
| Servo Motor            | [SG-5010](https://robu.in/product/standard-servo-towerpro-sg-5010-5010/) |
| Ultrasonic Sensor      | [HC-SR04](https://robu.in/product/hc-sr04-ultrasonic-range-finder-cartoon-ultrasonic-sensor-mounting-bracket/) |
| Buzzers (x2)           | [5V Passive](https://robu.in/product/5v-passive-buzzer/) |
| 9V Battery + Connector | [Battery](https://robu.in/product/9v-original-hw-high-quality-battery-5pcs/), [Connector](https://robu.in/product/9v-battery-snap-connector-dc-jackbattery-connector-cap/) |
| Eye Gel Mask (optional)| [Buy](https://www.amazon.in/Gel-Relaxing-Eye-Mask-Sleeping/dp/B08KG3ZYNC/) |

---

## 🛠️ Sensor Mount

Create a custom sensor mount using cardboard or balsa wood to hold the ultrasonic sensor and servo in alignment. Example:

![Sensor Mount](https://user-images.githubusercontent.com/69350191/132105227-fa828fde-6a25-4928-a857-73b36f14dbd8.png)

---

## 🗒️ Build Procedure

1. Coded and tested ultrasonic sensor readings in Arduino IDE.
2. Integrated servo sweep logic for environmental scanning.
3. Attached buzzers and validated tone changes with proximity.
4. Created `checkDirection()` to decide motion logic.
5. Coded clean modular functions for distance and direction detection.
6. Set safety thresholds for buzzer inactivity.
7. Tuned feedback based on user comfort.

---

## 📋 Device Instructions

- 🔊 **Left buzzer** → move left  
- 🔊 **Right buzzer** → move right  
- 🔊 **Both buzzers** → turn around  
- ❌ **No buzzer** → path is clear

---

## ✅ Ethics & Comfort

Add a soft **eye-gel mask** to reduce eye strain or distraction from mechanical noise, ensuring user comfort during use.

![Eye Gel Mask](https://user-images.githubusercontent.com/69350191/132106659-a3c1cc29-7ec4-4015-a3af-6bdb7475b47f.png)

---

## 🦾 Future Scope

- Add **voice feedback** with Raspberry Pi
- Integrate **Bluetooth** to stream audio to earphones
- Replace cardboard mount with rigid **3D-printed or balsa** structure
- Optimize scanning and response logic
- Create a compact wearable PCB design

🔗 [Bluetooth Audio on Raspberry Pi](https://magpi.raspberrypi.org/articles/bluetooth-audio-raspberry-pi-3)

---

## 📸 Prototype Images

![Prototype](https://user-images.githubusercontent.com/69350191/132105486-72b24200-c684-4f67-ad67-284dfd402e0c.jpg)
![Breadboard Test](https://user-images.githubusercontent.com/69350191/132105896-22f7effb-887f-4abe-a523-8346ede5c011.jpg)

---

## 🙌 Closing Note

> **Hope NightWalkie inspires your next wearable invention!**  
> _Thank you for your valuable time._
