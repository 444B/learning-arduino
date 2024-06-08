// Sketch is 1008 bytes (3%)
// Global Vairables is 15 bytes (0%)
// Define an array for LED pins
const uint8_t Led_Pins[] = {3, 4, 5, 6, 7}; // LED connected to digital pins 3 to 7

// Define the delay time between LED on and off states
const uint16_t Delay_Time = 500; // 500 milliseconds

void setup() {
  // Initialize the LED pins as outputs
  for (uint8_t i = 0; i < sizeof(Led_Pins); i++) {
    pinMode(Led_Pins[i], OUTPUT);
  }
}

void loop() {
  // Loop through each LED, turning it on and off
  for (uint8_t i = 0; i < sizeof(Led_Pins); i++) {
    digitalWrite(Led_Pins[i], HIGH); // Turn on the LED
    delay(Delay_Time);               // Wait for Delay_Time
    digitalWrite(Led_Pins[i], LOW);  // Turn off the LED
    delay(Delay_Time);               // Wait for Delay_Time
  }
}


// Sketch uses 1008 bytes (3%) of program storage space. Maximum is 32256 bytes.
// Global variables use 15 bytes (0%) of dynamic memory, leaving 2033 bytes for local variables. Maximum is 2048 bytes.