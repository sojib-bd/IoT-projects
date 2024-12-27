int input1 = 2; // First input button
int input2 = 3; // Second input button
int output = 13; // Output LED

void setup() {
  pinMode(input1, INPUT); // Set input pins
  pinMode(input2, INPUT);
  pinMode(output, OUTPUT); // Set output pin
}

void loop() {
  int state1 = digitalRead(input1); // Read first input
  int state2 = digitalRead(input2); // Read second input

  // AND logic: both inputs must be HIGH
  if (state1 == HIGH && state2 == HIGH) {
    digitalWrite(output, HIGH); // Turn on LED
  } else {
    digitalWrite(output, LOW); // Turn off LED
  }
}
