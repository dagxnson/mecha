#include <Servo.h>

int pot0;
int pos0;
Servo servo0;

void setup() {
  Serial.begin(9600);
  servo0.attach(5);
}

void loop() {
  pot0 = analogRead(A7);
  Serial.print("pot: ");
  Serial.println(pot0);
  pos0 = 1024/180*pot0;
  Serial.print("servo: ");
  Serial.println(pos0);
  servo0.write(0);
  delay(100);
}