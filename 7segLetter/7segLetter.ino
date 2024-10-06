// Define the pins for each segment (a to g)
const int segmentPins[] = {2, 3, 4, 6, 7, 8, 9};

// Define the common cathode pin
const int commonPin = 10; // You can choose any digital pin for this

// Define the delay between each letter display
const int delayTime = 1000; // in milliseconds

void setup() {
  // Set the segment pins as outputs
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }

  // Set the common pin as output
  pinMode(commonPin, OUTPUT);
}

void loop() {
  // Define the patterns for each letter (J, E, S, I, A)
  byte patterns[][7] = {
    {1, 1, 1, 1, 0, 0, 0}, // J
    {0, 1, 1, 1, 1, 0, 0}, // E
    {0, 0, 0, 1, 0, 0, 1}, // S
    {0, 1, 1, 0, 1, 1, 1}, // I
    {1, 0, 0, 0, 1, 0, 1}  // A
  };

  // Display each letter one by one
  for (int i = 0; i < 5; i++) {
    displayLetter(patterns[i]);
    delay(delayTime);
  }
}

void displayLetter(byte pattern[]) {
  // Turn on/off each segment based on the pattern
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], pattern[i]);
  }

  // Turn on the common pin to display the letter
  digitalWrite(commonPin, HIGH);
  delay(5); // Delay for stability

  // Turn off the common pin to prepare for the next letter
  digitalWrite(commonPin, LOW);
  // Turn off all segments
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
}
