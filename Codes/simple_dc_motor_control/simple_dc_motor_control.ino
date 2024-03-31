// Define variables for pin numbers
int r = 13, b = 10, g = 8; // Pins for RGB LED
int c1 = 2, c2 = 3; // Pins for controlling motor direction

// Setup function runs once when the program starts
void setup() {
  // Set pin modes for all pins
  pinMode(c1, OUTPUT); // Motor control pin 1
  pinMode(c2, OUTPUT); // Motor control pin 2
  pinMode(r, OUTPUT);  // Red LED pin
  pinMode(b, OUTPUT);  // Blue LED pin
  pinMode(g, OUTPUT);  // Green LED pin
}

// Loop function runs repeatedly as long as the Arduino is powered on
void loop() {
  // Move the motor forward and turn on red LED
  forward();
  digitalWriteRGB(HIGH, LOW, LOW); // Turn on red LED
  delay(2000); // Delay for 2 seconds

  // Move the motor backward and turn on blue LED
  backward();
  digitalWriteRGB(LOW, HIGH, LOW); // Turn on blue LED
  delay(2000); // Delay for 2 seconds

  // Stop the motor and turn on green LED
  stop();
  digitalWriteRGB(LOW, LOW, HIGH); // Turn on green LED
  delay(2000); // Delay for 2 seconds
}

// Function to move the motor forward
void forward() {
  digitalWrite(c1, LOW); // Set control pin 1 LOW
  digitalWrite(c2, HIGH); // Set control pin 2 HIGH
}

// Function to move the motor backward
void backward() {
  digitalWrite(c1, HIGH); // Set control pin 1 HIGH
  digitalWrite(c2, LOW); // Set control pin 2 LOW
}

// Function to stop the motor
void stop() {
  digitalWrite(c1, HIGH); // Set control pin 1 HIGH
  digitalWrite(c2, HIGH); // Set control pin 2 HIGH
}

// Function to control the RGB LED
void digitalWriteRGB(byte red, byte blue, byte green) {
  digitalWrite(r, red); // Set red LED state
  digitalWrite(b, blue); // Set blue LED state
  digitalWrite(g, green); // Set green LED state
}
