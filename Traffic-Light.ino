int redLED = 2;    // Red LED connected to digital pin 2
int yellowLED = 3; // Yellow LED connected to digital pin 3
int greenLED = 4;   // Green LED connected to digital pin 4

void setup()
{
  pinMode(redLED, OUTPUT);     // set the redLED pin as an output
  pinMode(yellowLED, OUTPUT);  // set the yellowLED pin as an output
  pinMode(greenLED, OUTPUT);   // set the greenLED pin as an output
}

void loop()
{
  digitalWrite(redLED, HIGH);  // turn on the red LED
  delay(10000);                // wait for 10 seconds
  digitalWrite(redLED, LOW);   // turn off the red LED
  
  digitalWrite(greenLED, HIGH);// turn on the green LED
  delay(10000);                // wait for 10 seconds
  digitalWrite(greenLED, LOW); // turn off the green LED
  
  digitalWrite(yellowLED, HIGH);// turn on the yellow LED
  delay(2000);                 // wait for 2 seconds
  digitalWrite(yellowLED, LOW);// turn off the yellow LED
  
}
