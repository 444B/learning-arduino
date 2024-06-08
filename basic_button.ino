const int buttonPin = 2;    // the number of the pushbutton pin
const int buzzerPin = 9;    // the number of the buzzer pin

int buttonState = 0;        // variable for reading the pushbutton status

void setup() {
  // Initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // Initialize the buzzer pin as an output:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // Check if the pushbutton is pressed.
  // If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // Turn the buzzer on:
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Turn the buzzer off:
    digitalWrite(buzzerPin, LOW);
  }
}


// Sketch uses 892 bytes (2%) of program storage space. Maximum is 32256 bytes.
// Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.