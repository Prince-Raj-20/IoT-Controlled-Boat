# IoT-Controlled-Boat
IoT Controlled Boat via Blynk App using ESP32 | Smart Wireless Navigation Project

---

# 🚤 IoT-Controlled Boat using ESP32 and Blynk

An Internet of Things (IoT) project demonstrating the creation of a remotely controlled boat, where the *ESP32* microcontroller interfaces with the *Blynk App* to enable real-time navigation over Wi-Fi.

---

## 🎯 Objective

- Understand integration of IoT and embedded systems.
- Develop a Wi-Fi-controlled boat using a smartphone.
- Explore remote control mechanisms using the *Blynk App* and *ESP32*.
- Gain hands-on experience with motor control and wireless communication.

---

## 🧰 Electronics Used

| Component                      | Purpose                                           |
|--------------------------------|---------------------------------------------------|
| ESP32 Wroom Module Board      | Main microcontroller with Wi-Fi and Bluetooth     |
| Motor Driver Module (L298N / L9110S) | Controls propulsion motors                 |
| DC Motors (x2)                | Enables boat movement                             |
| Li-Ion Battery (7.4V)         | Powers motors and control circuit                 |
| Voltage Regulator Module (buck converter)       | Ensures safe voltage to ESP32   |
| Servo Motor                   | Controls the rudder (steering)                    |

---

## 📱 Software Tools

- *Arduino IDE* – for programming the ESP32  
- *Blynk App* – for wireless smartphone control  
- *Blynk Auth Token* – connects ESP32 to the app  
- *Serial Monitor* – for debugging over USB

---

## ⚙ Boat Structure

- Boat body made using aluminium sheets.
- Motors connected to propeller shafts with waterproofing.
- Circuit and battery mounted securely to prevent damage from splashes.

---

## 🧪 Challenges and Solutions

| Challenge                     | Solution                                                                 |
|------------------------------|--------------------------------------------------------------------------|
| Wi-Fi connectivity failures  | Ensured strong signal and correct Blynk tokens                          |
| Power supply instability     | Used separate power for motors and ESP32 via voltage regulators         |
| ESP32 overheating            | Switched to a high-quality USB cable and avoided overuse               |
| Remote lag in Blynk app      | Optimized code and removed unnecessary delays                          |
| Code upload issues           | Pressed BOOT button, selected correct COM port                        |
| Incorrect motor direction    | Rewired motors and updated logic in code                               |
| Rapid battery drain          | Used rechargeable battery and voltage monitoring                       |

---

## 🔄 How It Works

- ESP32 receives commands from the Blynk app (via Wi-Fi).
- Blynk buttons control forward/backward movement using DC motors.
- A slider/joystick in blynk controls the servo for steering.
- Motors and servo are controlled through GPIO pins.

---

## 📂 File Overview

| File Name       | Description                                                                 |
|--------------------------|-----------------------------------------------------------------------------|
| iot_boat_control.ino   | Arduino source code to control the boat via the Blynk app and ESP32.       |
| circuit_diagram.png    | Circuit schematic showing all modules and wiring.                          |
| README.md              | Project overview, setup instructions, components used, and credits.        |
| LICENSE                | License file (CC BY-NC-ND 4.0) restricting reuse/modification.             |

## ▶ Getting Started

> ⚠ *Note*: For security reasons, sensitive data like Blynk Auth Token and Wi-Fi credentials have been removed. Please replace the placeholders in the .ino file with your own Blynk template info and Wi-Fi details.

### ✅ Prerequisites
- Arduino IDE with ESP32 board installed
- Blynk App (Old Blynk 1.0 or Blynk IoT depending on your code)
- Create project in Blynk App and get Auth Token

### 🚀 Uploading the Code
1. Connect ESP32 via USB
2. Paste your Blynk Auth Token in the code
3. Select correct COM port and ESP32 board
4. Press BOOT button on ESP32 (if needed during upload)
5. Upload the .ino code to ESP32

---

## ✅ Conclusion

This project offers a hands-on understanding of IoT, motor control, and real-time wireless communication using ESP32 and Blynk. It demonstrates how IoT can power simple robotic systems in real-world scenarios.

---

## 👤 Author

*Prince Raj*  
GitHub: Prince-Raj-20

---

## 📜 License

This project is licensed under the [CC BY-NC-ND 4.0 License](https://creativecommons.org/licenses/by-nc-nd/4.0/).

---
