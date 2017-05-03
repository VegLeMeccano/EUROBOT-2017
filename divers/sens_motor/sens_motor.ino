

#include <Servo.h> 
 
Servo motor_L;
 Servo motor_R;

 
void setup() 
{ 
  motor_L.attach(39);
  motor_R.attach(41);
} 
 
void loop() 
{ 

  motor_L.writeMicroseconds(1516);
  motor_R.writeMicroseconds(1516);
  
  delay(2000);
  
  motor_L.writeMicroseconds(1400);
  motor_R.writeMicroseconds(1400);
  
   delay(2000);

} 
