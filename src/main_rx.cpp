#ifndef SELECT_MAIN
// RECEIVER CODE
#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>

// LoRa Module Pins
#define SS_PIN 5
#define RST_PIN 14
#define DIO0_PIN 2

// LoRa Settings - MUST MATCH SENDER
#define BAND 433E6  // Frequency in Hz
#define TX_POWER 17
#define SPREADING_FACTOR 12
#define BANDWIDTH 62.5E3
#define CODING_RATE 8
#define SYNC_WORD 0xA5
#define PREAMBLE_LENGTH 16

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("LoRa Receiver");

  // Configure LoRa Module
  LoRa.setPins(SS_PIN, RST_PIN, DIO0_PIN);
  
  if (!LoRa.begin(BAND)) {
    Serial.println("LoRa initialization failed!");
    while (1);
  }

  // Set configuration - MUST MATCH SENDER
  LoRa.setSpreadingFactor(SPREADING_FACTOR);
//   LoRa.setTxPower(TX_POWER, PA_OUTPUT_PA_BOOST_PIN);
  LoRa.setSignalBandwidth(BANDWIDTH);
  LoRa.setCodingRate4(CODING_RATE);
  LoRa.setSyncWord(SYNC_WORD);
  LoRa.setPreambleLength(PREAMBLE_LENGTH);
  LoRa.enableCrc();

  Serial.println("LoRa Initialization OK!");
}

void loop() {
  static bool isReceived = false;
  int rxData = 0;
  // Try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // Received a packet
    Serial.println();
    Serial.print("RX: ");

    // Read packet
    while (LoRa.available()) {
      uint8_t data = LoRa.read();
      if (rxData == 0) {
        rxData = data;
      }
      Serial.print(data);
    }

    // Print RSSI
    Serial.print("; RSSI=");
    Serial.print(LoRa.packetRssi());

    isReceived = true;
  }

//   if (isReceived){
//     delay(200);
//     Serial.print("; TX response: ");
//     Serial.print(rxData);

//     // packet
//     LoRa.beginPacket();
//     LoRa.write(rxData);
//     LoRa.endPacket();

//     isReceived = false;
//     rxData = 0;
//   }
}
#endif