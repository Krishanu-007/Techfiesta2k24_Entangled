int trig=2; //defining the trigger and echo pins of the sensor
int echo=3;
void setup()	//function to run only once
{
  pinMode(trig,OUTPUT);	/*defining the pins
  pinMode(echo,INPUT);	as input and output*/
  Serial.begin(9600);	//Starting of Serial Monitor
}
void loop()	//function to keep on running in loop
{
  double x= dist_cm();
  Serial.print("Distance is: ");
  Serial.print(x);
  Serial.println(" cm");
  delay(1000);	//creating a delay of 1 second
}
double dist_cm()
{
  //clearing the trigger pin
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  //starting the trigger pin to emmit a pulse for 10 microseconds
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  //calculating the time for which the echo pin is High
  double time=pulseIn(echo,HIGH);
  
  //calculating the distance in centimeters
  double dist=(time*0.034)/2;
  return dist; //returning the distance in centimeters
}