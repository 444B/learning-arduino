/*
  ReadAnalogVoltage

  Reads an analog input on pin A1, converts it to voltage, and controls the number of LEDs lighting up based on the voltage level.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/

int leds[] = {3, 4, 5, 6, 7}; // Array to hold the LED pins
int numLeds = 5; // Number of LEDs
float voltageThreshold = 5.0 / numLeds; // Voltage increment per LED

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // Set LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A1:
  int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print out the voltage value to the Serial Monitor:
  Serial.println(voltage);

  // Determine the number of LEDs to light up based on the voltage:
  int ledsToLight = voltage / voltageThreshold;

  // Light up the appropriate number of LEDs
  for (int i = 0; i < numLeds; i++) {
    if (i < ledsToLight) {
      digitalWrite(leds[i], HIGH);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }

  delay(10); // Small delay to stabilize readings
}
// Sketch uses 3798 bytes (11%) of program storage space. Maximum is 32256 bytes.
// Global variables use 214 bytes (10%) of dynamic memory, leaving 1834 bytes for local variables. Maximum is 2048 bytes.