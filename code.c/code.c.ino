#include <Servo.h>
Servo myservo;
int pos = 0; 

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);  // attaches the servo on pin 9
 pinMode(8,INPUT); // attaches the touch sensor to pin 8
  myservo.write(0); 

}

void loop() {
  delay(5000);
 if(digitalRead(8) == HIGH ) 
   {
   myservo.write(0); 
   delay(5000);           
   }
   
   if(digitalRead(8) == LOW ) 
   {
     for(pos = 0; pos <= 180; pos++) 
   { myservo.write(pos); 
   delay(15); }
   for (pos =180; pos >=0; pos-- )
   { myservo.write(pos); 
   delay(15);              
   }
   } 
}
