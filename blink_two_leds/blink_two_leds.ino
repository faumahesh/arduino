
void setup() {
  pinMode(13, OUTPUT);     
  pinMode(12, OUTPUT); 
}


void loop() {
  digitalWrite(13, HIGH);   // Turn on the LED
  digitalWrite(12, LOW);   // Turn on the LED
  delay(1000);              // Wait for two seconds
  digitalWrite(13, LOW);    // Turn off the LED
  digitalWrite(12, HIGH);    // Turn off the LED
  delay(1000);              // Wait for two seconds
}
