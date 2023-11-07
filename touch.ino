const int touchPin = 2; // Define the digital pin where the touch sensor is connected

void setup() {
  pinMode(touchPin, INPUT); // Set the touch pin as an input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int touchValue = digitalRead(touchPin); // Read the touch sensor value
  
  if (touchValue == HIGH) {
    Serial.println("Touch detected!"); // Print a message when the touch sensor is touched
    // You can add any additional actions you want here
  }
  
  delay(100); // Add a small delay to prevent multiple rapid readings
}