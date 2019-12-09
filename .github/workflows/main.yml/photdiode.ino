#include<Servo.h>
Servo m1;
int sensorPin = A3; 
int ledPin=13;
int sensorValue = 0;
int sensorvaluen=0;//Variable to store the value coming from the sens

void setup() {
   Serial.begin(9600); //Opens the serial gate
   pinMode(sensorPin, INPUT);
   pinMode(ledPin,OUTPUT);
   m1.attach(10);
   
}
 
void loop() {
   sensorValue = analogRead(sensorPin);
   Serial.println(sensorValue);
   if(sensorValue<=1000)
   {  
       digitalWrite(ledPin,LOW);
       m1.write(90);
      
      }
   else
   {  digitalWrite(ledPin,HIGH);
      m1.write(180);
    }
}
