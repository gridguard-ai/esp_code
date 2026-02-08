#include "Arduino.h"

const int RELAY_PIN = 23;
const int RELAY_ON  = LOW;
const int RELAY_OFF = HIGH;

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.print("hi gang");
}