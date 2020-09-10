#include <Servo.h>

Servo servo;
int pos=0;
double calibrate=0;
const int ProxSensor1=8;
const int ProxSensor2=7;
const int ProxSensor3=4;
const int buzzer = 13;
float time_for_speed=0;
float velocity=0; 
boolean active=0;




void setup() {                
  pinMode(ProxSensor1,INPUT);
  pinMode(ProxSensor2,INPUT);
  pinMode(ProxSensor3,INPUT);
  pinMode(buzzer,OUTPUT);
  servo.attach(3);
}

void loop() {

   calibrate= millis();
  //Serial.println(calibrate);
   
    if( digitalRead(4)!=0)
    {
        while(digitalRead(8)!=1);
        time_for_speed= millis()- calibrate;
       
        for(pos = 0; pos<=100; pos += 1){
          servo.write(pos); 
          delay(10);
          break; // breaks the loop
 }
       
    
        if(time_for_speed!=0){
          while(digitalRead(8)==1){
          velocity= (28/time_for_speed)*1000;  
          active=1;
          }
        }else{
           Serial.println("too fast");
        }
        if(velocity>17){
          Serial.println(velocity);
           tone(buzzer, 10); //
           delay(500);        // ...for 3 sec
           noTone(buzzer);     // Stop sound...
            
          
        }
        
    }

    /*if(active==1)
    {
      Serial.print("speed ");
      Serial.print(velocity);
      Serial.println(" cm/s");
      delay(200);
      active=0;
    }*/

  if(digitalRead(ProxSensor2)==HIGH){
  delay(1000);
  //if(digitalRead(ProxSensor2)==LOW){
  for(pos=100;pos>=0;pos-=1){
    servo.write(pos); 
    delay(10);
    break; // breaks the loop
    
  //}
 }
 }

}
 
