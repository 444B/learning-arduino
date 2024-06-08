// Define pin numbers for LEDs
uint8_t Led_Pin1 = 3; // LED connected to digital pin 3
uint8_t Led_Pin2 = 4; // LED connected to digital pin 4
uint8_t Led_Pin3 = 5; // LED connected to digital pin 5
uint8_t Led_Pin4 = 6; // LED connected to digital pin 6
uint8_t Led_Pin5 = 7; // LED connected to digital pin 7

// Define the delay time between LED on and off states
uint16_t Delay_Time = 500; // 500 milliseconds

void setup() {
  // put your setup code here, to run once:
  // Initialize the LED pins as outputs
  pinMode(Led_Pin1, OUTPUT);
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Led_Pin3, OUTPUT);
  pinMode(Led_Pin4, OUTPUT);
  pinMode(Led_Pin5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn on LED1, wait for Delay_Time, then turn it off, wait for Delay_Time
  digitalWrite(Led_Pin1, HIGH);
  delay(Delay_Time);
  digitalWrite(Led_Pin1, LOW);
  delay(Delay_Time);
  
  // Turn on LED2, wait for Delay_Time, then turn it off, wait for Delay_Time
  digitalWrite(Led_Pin2, HIGH);
  delay(Delay_Time);
  digitalWrite(Led_Pin2, LOW);
  delay(Delay_Time);
  
  // Turn on LED3, wait for Delay_Time, then turn it off, wait for Delay_Time
  digitalWrite(Led_Pin3, HIGH);
  delay(Delay_Time);
  digitalWrite(Led_Pin3, LOW);
  delay(Delay_Time);
  
  // Turn on LED4, wait for Delay_Time, then turn it off, wait for Delay_Time
  digitalWrite(Led_Pin4, HIGH);
  delay(Delay_Time);
  digitalWrite(Led_Pin4, LOW);
  delay(Delay_Time);
  
  // Turn on LED5, wait for Delay_Time, then turn it off, wait for Delay_Time
  digitalWrite(Led_Pin5, HIGH);
  delay(Delay_Time);
  digitalWrite(Led_Pin5, LOW);
  delay(Delay_Time);
}


// Sketch uses 1146 bytes (3%) of program storage space. Maximum is 32256 bytes.
// Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.