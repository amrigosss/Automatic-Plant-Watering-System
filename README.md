Automatic Plant Watering System

An Arduino-based project that automatically waters plants based on soil moisture levels. 
This project reduces water waste and keeps plants healthy without the need for manual watering.
  
---    
  
 Features
- Monitors soil moisture in real-time.
- Activates water pump when soil is dry.
- Automatically turns off pump when moisture is sufficient.
- Prevents both overwatering and underwatering.
- Energy and water-efficient.
 
---
 
Components Used
- Arduino Uno (or compatible board)
- Soil Moisture Sensor
- Relay Module
- Water Pump  
- Power Supply (5V/12V depending on pump)
- Breadboard, Jumper Wires, Resistors, Diode
- Water reservoir & tubing

--- 
  
 How It Works
1. A **soil moisture sensor** is inserted into the soil near the plant.  
2. The **Arduino microcontroller** reads the sensor data.  
3. If the soil moisture falls below the set threshold → the **relay module** switches on the **water pump**.  
4. Pump delivers water until moisture is restored.  
5. System continuously monitors soil moisture to conserve water.
