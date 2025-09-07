#include <Servo.h>

Servo myServo1;
Servo myServo2;

void setup() {
  myServo1.attach(8); // attaches the servo on pin 9 to the servo object
  myServo2.attach(10);
  pinMode(7, INPUT);//define arduino pin
  Serial.begin(9600);
}

void loop() {
  bool value = digitalRead(7);//get value and save it boolean veriable
  if (value == 0) { //check condition
      myServo1.write(90);
      myServo2.write(90);
      delay(15);
  } 
  else {
    myServo1.write(0);
    myServo2.write(0);
  }
  Serial.println(value);
}