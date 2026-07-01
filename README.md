# ♻️ Smart Waste Segregation System (Biodegradable & Non-Biodegradable)

## 📌 Project Status
**Status:** Arduino prototype.  
This repository contains a working project concept and Arduino sketch for a sensor-based waste sorting model.

---

## 📖 Project Overview  
This Arduino-based project is a **smart waste segregation system** that automatically classifies waste into **biodegradable** and **non-biodegradable** categories.  
Using sensors to detect the type of waste, the system activates servo motors to open the appropriate bin lid, making waste disposal more efficient and eco-friendly.  

---

## ⚙️ Features  
- ✅ Detects **biodegradable** and **non-biodegradable** waste.  
- 🤖 Automates waste segregation using **servo motors**.  
- 🚮 Opens the **correct bin lid** based on detection.  
- 🔔 Can provide feedback (LED/Buzzer – if included in code).  
- 🌍 Encourages sustainable waste management practices.  

---

## 🛠️ Components Used  
- Arduino UNO (or compatible board)  
- Sensors for waste detection (IR/Ultrasonic/Proximity – depending on your setup)  
- Servo Motors (for opening bin lids)  
- LEDs (status indication – optional)  
- Buzzer (alert – optional)  
- Resistors, Jumper wires, Breadboard  

---

## 🔌 Circuit Connections (Typical)  

| Component                 | Arduino Pin (example) |
|---------------------------|------------------------|
| Sensor (biodegradable)    | D2 / A0               |
| Sensor (non-biodegradable)| D3 / A1               |
| Servo Motor (Bio Bin)     | D9                    |
| Servo Motor (Non-Bio Bin) | D10                   |
| LED/Buzzer (optional)     | D12 / D13             |

*(Adjust based on your actual wiring and code.)*  

---

## 📜 How It Works  
1. **Detection** – When waste is inserted, sensors determine if it is biodegradable or non-biodegradable.  
2. **Sorting** – The Arduino processes the input and triggers the correct servo motor.  
   - If **biodegradable** → ✅ Bio Bin lid opens.  
   - If **non-biodegradable** → ❌ Non-Bio Bin lid opens.  
3. **Feedback** – LED/Buzzer signals (if included).  
4. **Reset** – The servo returns the bin lid to the closed position after a short delay.  

---

## 💻 Usage Instructions  
1. Connect all components as per the wiring diagram.  
2. Upload the code (`Waste_seg.ino`) to your Arduino board using the Arduino IDE.  
3. Place waste near the sensor input.  
4. Watch as the system automatically opens the correct bin lid!  

---

## 🚀 Future Improvements  
- Add an **LCD/OLED display** to show detected waste type.  
- Integrate **IoT (ESP8266/ESP32)** for real-time monitoring of bin fill levels.  
- Enable **automatic compaction** of waste.  
- Add **separate bins** for recyclable and hazardous waste.  

---

