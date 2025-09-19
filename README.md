# TRAFFIC-LIGHT-CONTROL-SYSTEM-WITH-BUTTONS
# 🚦 Traffic Light Control with Buttons  

This project simulates a **traffic light control system** using an Arduino UNO and push buttons. It allows both automatic light sequencing and manual control using buttons, making it a simple but powerful learning project for Arduino beginners.

---

## 🔧 Features  
- **Automatic Mode**: LEDs cycle through Green → Yellow → Red in a timed sequence.  
- **Manual Mode**: Push buttons allow you to override and control which light is ON.  
- **Simulation Ready**: Designed on [Tinkercad Circuits](https://www.tinkercad.com/), easy to test online.  
- **Hardware Ready**: Can be implemented on a real Arduino UNO with minimal changes.  

---

## 🖥️ Components Used  
| Component | Quantity |
|----------|----------|
| Arduino UNO | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistor | 3 |
| Push Button | 2 |
| Jumper Wires | As needed |
| Breadboard | 1 |

---

## 📜 Circuit Diagram  
The circuit connects:
- **Red LED → Pin D2**
- **Yellow LED → Pin D1**
- **Green LED → Pin D3**
- **Buttons → Digital pins (with pull-down resistors)**  

*(See `TRAFFIC LIGHT CONTROL WITH BUTTONS.pdf` for full schematic)*

---

## 💻 Code  
Upload the provided `.ino` file to your Arduino UNO. The code controls the LEDs in a loop and reads button presses to switch modes.

---

## 🚀 How to Run  
1. Open the project on Tinkercad (or build on breadboard).  
2. Upload the Arduino code.  
3. Press "Start Simulation" in Tinkercad or power the Arduino with USB.  
4. Watch the LEDs cycle and test the buttons.  

---

## 📂 Project Structure  
Traffic-Light-Control/
├── TRAFFIC LIGHT CONTROL WITH BUTTONS.pdf # Circuit diagram
├── bom.csv # Bill of materials
├── traffic_light_control.ino # Arduino code (to be added)
└── README.md # This file
