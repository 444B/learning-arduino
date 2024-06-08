void setup() {
  // Initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  // Wait for 0.5 seconds
  delay(500);
  // Turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  // Wait for 0.5 seconds
  delay(500);
}

// Sketch uses 924 bytes (2%) of program storage space. Maximum is 32256 bytes.
// Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.