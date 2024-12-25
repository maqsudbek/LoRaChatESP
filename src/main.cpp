#ifdef SELECT_MAIN
#include <Arduino.h>

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("Hello, LoRa!");
    delay(1000);
}
#endif