#include <Arduino.h>

const uint8_t BUTTON_PIN = 23;
const uint8_t LED_PIN = 18;
const uint8_t LED2_PIN = 19;   // second LED, opposite state

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
}

void loop() {
  if(digitalRead(BUTTON_PIN)) {
    Serial.println("Button is Released");
    digitalWrite(LED_PIN, LOW);
    digitalWrite(LED2_PIN, HIGH);
  } 
    else {
    Serial.println("Button is Pressed");
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(LED2_PIN, LOW); 
  }
  delay(67);
}