const int buzzer = 13; //buzzer to arduino pin 13


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 100); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
  
}
