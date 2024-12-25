#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>

#define SS 5
#define RST 14
#define DIO0 26

void setup() {
    Serial.begin(115200);
    while (!Serial);

    LoRa.setPins(SS, RST, DIO0);

    if (!LoRa.begin(433E6)) {
        Serial.println("Starting LoRa failed!");
        while (1);
    }
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
