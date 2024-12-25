# LoRa-Based Bidirectional Chat System

## Overview
This project demonstrates bidirectional communication between two ESP32 devices using RA-02 LoRa modules. The system allows the devices to exchange messages in real-time over long distances. Each device operates as both a transmitter (TX) and a receiver (RX), enabling a simple chat-like interaction.

The project serves as a starting point for understanding LoRa communication and building more complex IoT systems that require bidirectional data exchange.

---

## Features
- **Bidirectional Communication**: Both ESP32 devices can send and receive messages using the LoRa protocol.
- **User Interaction via Serial Monitor**: Messages are entered and displayed on the serial monitor, making the system easy to test and debug.
- **Acknowledgment System**: The receiving device sends an acknowledgment message back to the sender after successfully receiving data.
- **Long-Range Communication**: Leverages LoRa’s capability to communicate over long distances without relying on Wi-Fi or the internet.
- **Modular Design**: Can be extended to include additional features like encryption, structured data formats (e.g., JSON), or integration with external displays (OLED).

---

## Hardware Requirements
1. **ESP32 Boards** (2 units)
2. **RA-02 LoRa Modules** (2 units)
3. Connecting wires and breadboard
4. (Optional) OLED Display for enhanced visualization

---

## Software Requirements
1. Arduino IDE or PlatformIO with VS Code
2. LoRa Arduino Library ([LoRa](https://github.com/sandeepmistry/arduino-LoRa))

---

## Next Steps
- Connect and test hardware communication using the provided codebase.
- Validate bidirectional data exchange functionality.
- Expand the project to include additional features for real-world applications.

---

## Repository Guidelines
- Use GitHub for collaborative development.
- Document code changes and maintain clear commit messages.
- Assign issues for feature development and bug fixes to ensure team collaboration.
