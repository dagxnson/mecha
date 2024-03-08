#include <Servo.h>

int pot0, pos0;
unsigned long time;
double distance;
Servo servo0;

void setup() {
  Serial.begin(9600);
  servo0.attach(9);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
}

void loop() {
  // digitalWrite(4,(0));
  // digitalWrite(4,(1));
  // delayMicroseconds(10);
  // digitalWrite(4, (0));
  // time = pulseIn (5, HIGH);
  // distance = double (time/2/29.421);

  // pot0 = analogRead(7);
  // pos0 = map(pot0, 0, 612, 0, 179);
  // servo0.write(pos0);

  // Serial.print("distance: ");
  // Serial.print(distance);
  // Serial.print("cm");
  // Serial.print("          pot: ");
  // Serial.print(pot0);
  // Serial.print("          servo: ");
  // Serial.println(pos0);
}