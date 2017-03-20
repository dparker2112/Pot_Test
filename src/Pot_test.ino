/*
  AnalogReadSerial
  Reads an analog mic input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A1, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 1:
  int potValue = analogRead(A1);
  // read the mic value
  int micValue = analogRead(A0);
  // scale the pot input to a range that accomodates the MIC input
  potValue = ((potValue /10) + 300);
  // print out the value you read:
  Serial.println(potValue);
  Serial.println(micValue);
  delay(500);        // delay in between reads for stability
}
