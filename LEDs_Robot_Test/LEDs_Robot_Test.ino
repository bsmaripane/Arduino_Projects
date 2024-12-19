void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  // digitalWrite(7, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(8, HIGH);
   delay(60);  
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  delay(1500);                      // wait for a second

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(8, HIGH);
   delay(60);  
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  delay(1500);
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(8, HIGH);
   delay(60);  
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(1500);
}
