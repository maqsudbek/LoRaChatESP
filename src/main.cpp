#ifdef SELECT_MAIN
#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>

#define SS 5
#define RST 14
#define DIO0 2

// LoRa Settings - MUST MATCH SENDER
#define BAND 433E6  // Frequency in Hz
#define TX_POWER 17
#define SPREADING_FACTOR 10
#define BANDWIDTH 125E3
#define CODING_RATE 5
#define SYNC_WORD 0xA5
#define PREAMBLE_LENGTH 8

void setup() {
    Serial.begin(115200);
    while (!Serial);

    LoRa.setPins(SS, RST, DIO0);

    if (!LoRa.begin(433E6)) {
        Serial.println("Starting LoRa failed!");
        while (1);
    }

    // Set configuration - MUST MATCH SENDER
    LoRa.setSpreadingFactor(SPREADING_FACTOR);
    LoRa.setTxPower(TX_POWER, PA_OUTPUT_PA_BOOST_PIN);
    LoRa.setSignalBandwidth(BANDWIDTH);
    LoRa.setCodingRate4(CODING_RATE);
    LoRa.setSyncWord(SYNC_WORD);
    LoRa.setPreambleLength(PREAMBLE_LENGTH);
    LoRa.enableCrc();

    Serial.println("LoRa Initialization OK!");
}

void loop() {
    LoRa.beginPacket();
    LoRa.print("Hello World!");
    int status = LoRa.endPacket(true);

    if (status == 1) {
        Serial.println("Message sent successfully!");
    } else {
        Serial.println("Error sending message :(");
    }
    
    delay(3000);
}
#endif