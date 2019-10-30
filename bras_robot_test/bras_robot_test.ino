#include <Servo.h>

Servo pince, mot1, mot2;

void setup() {

  pince.attach(3, 550, 2400); //range(0-180)
  mot1.attach(0, 550, 2400);  //range(0-90)
  mot2.attach(1, 550, 2400);  //range(90-140)
  
 // pince.writeMicroseconds(550); pour le debogage de moteurs
 //mot2.write(120);
}

void rest() {

  pince.write(0);
  mot1.write(10);
  mot2.write(95);
  
 
}

void grab() {

  pince.write(0);
  delay(1000);
  mot2.write(120);
  delay(1000);
  mot1.write(90);
  delay(1000);
  pince.write(90);
  delay(1000);
  mot1.write(10);
  delay(1000);
  mot2.write(95);
  
  
}

void loop() {

  rest();
  delay(1000);
  grab();
  delay(10000);
 

}
