const int numSensors = 3; // Number of ultrasonic sensors
const int trigPins[numSensors] = {2, 3, 4}; // Array of trigger pins
const int echoPins[numSensors] = {5, 6, 7}; // Array of echo pins

void setup() {
  Serial.begin(9600);
  
  // Initialize trigger pins as outputs and echo pins as inputs
  for (int i = 0; i < numSensors; i++) {
    pinMode(trigPins[i], OUTPUT);
    pinMode(echoPins[i], INPUT);
  }
}

void loop() {
  double distances[numSensors]; // Array to store distances from each sensor
  
  // Measure distances from each sensor
  for (int i = 0; i < numSensors; i++) {
    distances[i] = measureDistance(trigPins[i], echoPins[i]);
  }
  
  // Find the index of the sensor with maximum distance
  int maxIndex = 0;
  for (int i = 1; i < numSensors; i++) {
    if (distances[i] > distances[maxIndex]) {
      maxIndex = i;
    }
  }
  
  // Print the appropriate message based on the orientation
  if (maxIndex == 0) {
    Serial.println("TAKE LEFT TURN");
  } else if (maxIndex == 1) {
    Serial.println("TAKE NO TURN, GO STRAIGHT");
  } else {
    Serial.println("TAKE RIGHT TURN");
  }
  
  delay(1000);
}

double measureDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  double duration = pulseIn(echoPin, HIGH);
  double distance = (duration * 0.0343) / 2; // Convert to centimeters
  
  return distance;
}
