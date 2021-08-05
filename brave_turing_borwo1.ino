
#include <Servo.h>

Servo servo_1; 
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5; 
Servo servo_6; 
//Servo Motor position in degrees 

int servoPos= 0; 

void setup()
{
 //Defining Servo motor signal inputs 
  

servo_1.attach(6); 
servo_2.attach(9); 
servo_3.attach(10);
servo_4.attach(11);
servo_5.attach(5);
servo_6.attach(3);
}

void loop()
{
  
  delay(1000); //First reaction if the robot display shows 'Sad Face' 
  
  
  
  //Second reaction if the robot display shows 'Hug Face' 
  
for(servoPos = 0; servoPos < 90; servoPos++) {
    
servo_1.write(servoPos);
servo_2.write(servoPos); 
servo_3.write(servoPos);  
servo_4.write(servoPos);
servo_5.write(servoPos); 
servo_6.write(servoPos); 

delay(100); }
  

  
  
for(servoPos = 90; servoPos > 0; servoPos--) {
    
servo_1.write(servoPos);
servo_2.write(servoPos); 
servo_3.write(servoPos);  
servo_4.write(servoPos);
servo_5.write(servoPos); 
servo_6.write(servoPos); 
  
delay(100); }  
  
  //Third reaction if the robot display shows 'Happy Face' 
  
for(servoPos = 0; servoPos < 180; servoPos++) {
    
servo_1.write(servoPos);
servo_2.write(servoPos); 
servo_3.write(servoPos);  
servo_4.write(servoPos);
servo_5.write(servoPos); 
servo_6.write(servoPos); 

delay(100); }
  

  
  
for(servoPos = 180; servoPos > 0; servoPos--) {
    
servo_1.write(servoPos);
servo_2.write(servoPos); 
servo_3.write(servoPos);  
servo_4.write(servoPos);
servo_5.write(servoPos); 
servo_6.write(servoPos); 
  
delay(100); }  
  
  
  
  
  
}