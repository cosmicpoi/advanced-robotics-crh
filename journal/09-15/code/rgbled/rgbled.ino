/*
Code adapted from Adafruit.
https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/overview?view=all
*/

int redPin = 11;
int bluePin = 10;
int greenPin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

//set the color to an rgb(byte, byte, byte) value
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}