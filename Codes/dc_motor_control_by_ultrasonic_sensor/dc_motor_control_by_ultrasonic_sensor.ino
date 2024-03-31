//defining the three level of distances max,mid,min
#define max 150 
#define mid 100     
#define min 50    

// pins for motor controlling
int c1=4;	
int c2=5;
//pins used for trigger and echo of ultrasonic
int trig=2;
int echo=3;

void setup() //function to run once
{
  pinMode(c1,OUTPUT);	/* describing the nature 
  pinMode(c2,OUTPUT);		of motor pins */
  pinMode(trig,OUTPUT); /* describing the nature 
  pinMode(echo,INPUT);		of ultrasonic pins */
  Serial.begin(9600);	//Starting the serial monitor
}

void loop()	//function to keep on looping 
{
  unsigned long dist=dist_cm();		//calculating the distance
  if(dist>=mid && dist<=max) 		//condition for forward movement
  {
    forward();
    Serial.println("forward");
  }
  else if(dist>=min && dist<mid)	//condition for backward movement
  {
    backward();
    Serial.println("backward");
  }
  else
  {
    stop();
    Serial.println("stop");
  }
  delay(1000);	//delaying the looping by 1 second
}
unsigned int dist_cm()	//function to calculate the distance
{
  digitalWrite(trig,LOW); 
  delayMicroseconds(2); 
  digitalWrite(trig,HIGH);  
  delayMicroseconds(10);    
  digitalWrite(trig,LOW);   
  long time=pulseIn(echo,HIGH); 
  unsigned int distance=(time*0.034)/2;
  return distance;
}
void forward()	//function for forward movement
{
  digitalWrite(c1,LOW);
  digitalWrite(c2,HIGH);
}
void backward()	//function for backward movement
{
  digitalWrite(c1,HIGH);
  digitalWrite(c2,LOW);
}
void stop()	//function for no movement
{
  digitalWrite(c1,LOW);
  digitalWrite(c2,LOW);
}