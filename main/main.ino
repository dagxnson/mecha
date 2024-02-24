#include <Servo.h>

int pot0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pot0 = analog.Read(A0);
  Serial.println(pot0);
  delay(100);
}