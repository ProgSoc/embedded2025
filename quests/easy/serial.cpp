#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    Serial.println("Arduino Serial Monitor Started!");
    Serial.println("==============================");
}

void loop() {
    static unsigned long counter = 0;
    static unsigned long lastTime = 0;
    
    unsigned long currentTime = millis();
    
    if (currentTime - lastTime >= 1000) {
        counter++;
        
        Serial.print("Count: ");
        Serial.print(counter);
        Serial.print(" | Uptime: ");
        Serial.print(currentTime / 1000);
        Serial.print("s | Free RAM: ");
        Serial.print(freeMemory());
        Serial.println(" bytes");
        
        lastTime = currentTime;
    }
}

int freeMemory() {
    char top;
    return &top - reinterpret_cast<char*>(sbrk(0));
}