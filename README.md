💡 **Automatic Door Control System using 8051 Microcontroller**  
An embedded systems mini project developed using Embedded C in Keil uVision and simulated in Proteus Design Suite.

🚀 **Project Overview**  
This project demonstrates an automatic door control system using the 8051 microcontroller. A sensor is used to detect the presence of an object, and a DC motor is controlled to open or close the door accordingly.

The project was created to understand:

-> 8051 port operations  
-> Sensor interfacing  
-> DC motor direction control  
-> Decision-making using Embedded C (if-else logic)  
-> Real-time automation system simulation  

🛠️ **Tools and Technologies**  
-> Embedded C  
-> Keil uVision  
-> Proteus Design Suite  
-> AT89C51 / 8051 Microcontroller  

📂 **Repository Contents**  
-> door.c – Source code  
-> tech.hex – Compiled output file  
-> DoorLock.pdsprj – Proteus simulation project  

⚙️ **Working Principle**  
The system uses a sensor connected to Port 1 (P1.0):

-> Sensor = 1 → Object detected → Motor rotates clockwise → Door opens  
-> Sensor = 0 → No object → Motor rotates anticlockwise → Door closes  

Motor control is achieved using two input pins:

-> IN1 (P1.1)  
-> IN2 (P1.2)  

Based on sensor input, the microcontroller changes motor direction using logic control signals.

🎯 **Learning Outcomes**  
-> Sensor interfacing with microcontroller  
-> DC motor direction control  
-> Embedded decision-making using if-else logic  
-> Real-world automation system design  
-> Proteus simulation of embedded systems  
