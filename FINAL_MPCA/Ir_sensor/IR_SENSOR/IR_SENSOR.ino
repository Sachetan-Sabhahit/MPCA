//FIRST WE WILL INITIALIZE THE PINS FOR  OUTPUT 


int sensor = 7;


//NOW WE WILL SETUP THE THE PINS

void setup()

{
   
 //SET THE SENSOR TO BE INPUT
 
  pinMode(sensor,INPUT);
  
 // TO START THE SERIAL COMMUNICATION AT A BAUD RATE OF 9600
 
  Serial.begin(9600);

 
}
//NOW WE WILL SETUP THE LOOP
void loop()
{
  // WE WILL USE THE DIGITAL READ FUNCTION TO READ THE VALUE GIVEN BY THE SENSOR
  
  //WE COULD USE ANALOG READ AS WELL ,BUT AS THE SENSOR IS GIVING US ONLY A DIGITAL VALUE,IT'S BETTER TO USE THE DIGITAL READ FUNCTION
  
  //WE WILL NOW STORE THE SENSOR VALUE IN A VARIABLE WITH INTERGER DATATYPE

int sensor_value = digitalRead(sensor);

//NOW WE WILL PRINT THE SENSOR VALUE

  Serial.println(sensor_value);

}
