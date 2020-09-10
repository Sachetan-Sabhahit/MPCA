
double calibrate=0;
float time_for_speed=0, velocity=0 ; 
boolean active=0;
const int buzzer = 13;

void setup()
{ 
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(8, INPUT);
  pinMode(buzzer,OUTPUT);
}


void loop()
{
  calibrate= millis();
  //Serial.println(calibrate);
   
    if( digitalRead(4)!=0)
    {
        while(digitalRead(8)!=1);
        time_for_speed= millis()- calibrate;
       
    
        if(time_for_speed!=0){
          while(digitalRead(8)==1){
          velocity= (28/time_for_speed)*1000;  
          active=1;
          }
        }else{
           Serial.println("too fast");
        }
        if(velocity>20){
           tone(buzzer, 10); //
           delay(1000);        // ...for 3 sec
           noTone(buzzer);     // Stop sound...
            
          
        }
        
    }

    if(active==1)
    {
      Serial.print("speed ");
      Serial.print(velocity);
      Serial.println(" cm/s");
      delay(200);
      active=0;
    }

}
