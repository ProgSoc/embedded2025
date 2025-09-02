#include <Arduino.h>

const int potPin = 14;
const int ledPin = 13;

void setup() {
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    int potValue = analogRead(potPin);           // Read potentiometer (0-1023)
    int brightness = map(potValue, 0, 1023, 0, 255);  // Map to PWM range (0-255)
    
    analogWrite(ledPin, brightness);             // Set LED brightness
    
    delay(10);  // Small delay for stability
}