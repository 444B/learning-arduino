const int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Initialize the LED pin as an output
}

void loop() {
  // Morse code for "SOS"
  String message = "... --- ...";

  for (int i = 0; i < message.length(); i++) {
    if (message[i] == '.') {
      dot(); // DOT
    } else if (message[i] == '-') {
      dash(); // DASH
    } else if (message[i] == ' ') {
      delay(2100); // Space between letters (3 units * 700 ms)
    }
    delay(700); // Space between dots and dashes (1 unit * 700 ms)
  }

  delay(14000); // Space between repetitions of "SOS" (20 units * 700 ms)
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(140); // 0.2 seconds (0.7 seconds / 3.5)
  digitalWrite(ledPin, LOW);
  delay(140); // 0.2 seconds off
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(420); // 0.6 seconds (0.7 seconds * 3 / 1.5)
  digitalWrite(ledPin, LOW);
  delay(140); // 0.2 seconds off
}
