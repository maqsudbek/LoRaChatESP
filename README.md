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

## How to Contribute
- clone the repository
```bash
git clone https://github.com/maqsudbek/LoRaChatESP.git
```

- checkout to `dev` branch
```bash
git checkout dev
git pull origin dev
```

- create a new branch for your feature from `dev` branch
```bash
git checkout -b feature/your-feature-name dev
```

- make changes and commit
```bash
git add .
git commit -m "your commit message"
```

- push your changes to your branch
```bash
git push origin feature/your-feature-name
```

- create a pull request to `dev` branch
- assign reviewers
- wait for approval
- merge the pull request
- delete the branch
```bash
git checkout dev
git pull origin dev
git branch -d feature/your-feature-name
```

---