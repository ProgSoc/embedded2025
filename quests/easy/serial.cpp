#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    Serial.println("Hello Arduino!");
    Serial.println("Starting setup...");
}

void loop() {
    Serial.println("Arduino is running...");
    Serial.print("Uptime: ");
    Serial.print(millis() / 1000);
    Serial.println(" seconds");
    
    if (Serial.available()) {
        char input = Serial.read();
        Serial.print("You sent: ");
        Serial.println(input);
    }
    
    delay(1000);
}
