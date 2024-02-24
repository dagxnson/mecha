#include <Servo.h>

int pot0=3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // pot0 = analogRead(A0);
  // Serial.println(pot0);
  // delay(100);
  Serial.print('abc: ');
  Serial.print(pot0);
}