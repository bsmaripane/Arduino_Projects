int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  delay(60);
  digitalWrite(8, LOW);
  setColor(255, 0, 0); // Red Color
  delay(1000);
  setColor(0, 255, 0); // Green Color
  delay(1000);
  setColor(0, 0, 255); // Blue Color
  delay(1000);
  setColor(255, 255, 255); // White Color
  delay(1000);
  setColor(170, 0, 255); // Purple Color
  delay(1000);
  setColor(148, 0, 211);
  delay(1000);
  setColor(75, 0, 130);
  delay(1000);
  setColor(0, 0, 255);
  delay(1000);
  setColor(0, 255, 0);
  delay(1000);
  setColor(255, 255, 0);
  delay(1000);
  setColor(255, 127, 0);
  delay(1000);
  setColor(255, 0, 0);
  delay(1000);
  setColor(1, 1, 1);
  delay(1000);
  setColor(128, 0, 32);
  delay(3000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
