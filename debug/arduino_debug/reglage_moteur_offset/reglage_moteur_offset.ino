#include <Servo.h>

// fichier de test des servomoteur avec un 
// potar pour regler les ordres pwm
// branchement series pour afficher les infos pwm
// branchement servos pour voir les consignes et ajuster...


int sensorPin = A5;    // select the input pin for the potentiometer
double sensorValue = 0;  // variable to store the value coming from the sensor
int PWM_value = 1000;
double bis =0;

int PWM_value_min = 1400;// 1500-700;//1000; //1500-700;
int PWM_value_max = 1600; //1500+700;//2000; //1500+700;
int PWM_value_modif = 0;


Servo servo;

void setup() {
 
  Serial.begin(9600);
  servo.attach(8);
  servo.writeMicroseconds(1500);
  
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);   
  bis = (1000 - (sensorValue/1024)*1000)/1000;
  PWM_value_modif = PWM_value_min + bis*(PWM_value_max-PWM_value_min);
  
  delay(100);          
  Serial.print("Valeur PWM : ");  
  Serial.println(PWM_value_modif); 
  servo.writeMicroseconds(PWM_value_modif);
               
}
