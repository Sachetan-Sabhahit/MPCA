  #include <Servo.h>
  Servo servo;
  const int trigPin = 11;
  const int echoPin = 10;
  int pos;
  // defines variables
  long duration;
  int distance;
  double velocity;
  const int ProxSensor2=7;
  
  void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  servo.attach(3);
  pinMode(ProxSensor2,INPUT);
  
    }
  void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2; 
  Serial.print("distance: ");
  Serial.println(distance);
  if(distance<20){
  for(pos = 0; pos<=100; pos += 1){
          servo.write(pos); 
          delay(10);
          break; // breaks the loop
 }
  }
  if(digitalRead(ProxSensor2)==HIGH){
  delay(1000);
  //digitalWrite(LED_green,HIGH);
  //digitalWrite(LED_red,LOW);
  for(pos=100;pos>=0;pos-=1){
    servo.write(pos); 
    delay(10);
    break; 
    
 
  }
 }
  
  }
