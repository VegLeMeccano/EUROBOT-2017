volatile long count = 0;

void setup()
{
 pinMode(21, INPUT);
digitalWrite(21,HIGH);
attachInterrupt(2, countdown, FALLING);
Serial.begin(9600);
}

void loop(){
 Serial.println(count);
delay(100); 
  
}

void countdown(){
 count = count + 1; 
}
