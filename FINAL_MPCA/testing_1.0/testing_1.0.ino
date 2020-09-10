#include <Servo.h>

//Servo servo1;
Servo servo2;
int pos=0;
double calibrate=0;
const int ProxSensor1=7;
const int ProxSensor2=4;
const int LED_red=2;
const int LED_green=1;


void setup() {                
  pinMode(ProxSensor1,INPUT);
  pinMode(ProxSensor2,INPUT);
  pinMode(LED_red,OUTPUT);
  pinMode(LED_green,OUTPUT);
  servo2.attach(9);
}

void loop() {
  
  if(digitalRead(ProxSensor1)==HIGH)  
  {
    digitalWrite(LED_red,HIGH);
    digitalWrite(LED_green,LOW);
    for(pos = 0; pos<=100; pos += 1){
    servo2.write(pos); 
    delay(10);
    break; // breaks the loop
 }
 }
 if(digitalRead(ProxSensor2)==HIGH){
  //delay(2000);
  digitalWrite(LED_red,LOW);
  digitalWrite(LED_green,HIGH);
  //if(digitalRead(ProxSensor2)==LOW){
  for(pos=100;pos>=0;pos-=1){
    servo2.write(pos); 
    delay(10);
    break; // breaks the loop
    
  //}
 }
 }

}
 
