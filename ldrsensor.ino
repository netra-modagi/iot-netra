const int ldrPin = A0; // Analog pin to which the LDR is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the LDR value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue); // Print the LDR value to the serial monitor
  delay(1000); // Delay for 1 second (you can adjust this)
}