byte onOff = LOW;
long last;

void setup() {
  Serial.begin(9600);
//  pinMode(4, OUTPUT);
//  pinMode(5, OUTPUT);
  byte* ddrE = (byte*)0x2D; // Port 4
  byte* ddrG = (byte*)0x33; // Port 5
  *ddrE |= 0x08;
  *ddrG |= 0x20;
  last = millis();
}

void loop() {
  Serial.println("Test");
  int sensorValue = analogRead(A0);
  if (millis() - last > sensorValue)
  {
    if (onOff == LOW)
      onOff = HIGH;
    else
      onOff = LOW;
    last = millis();
  }
  int redButton = digitalRead(2);
//  int yellowButton = digitalRead(3);
//  Serial.print("Pot: ");
//  Serial.println(sensorValue);
//  Serial.print("Red button: ");
//  Serial.println(redButton);
//  Serial.print("Yellow button: ");
//  Serial.println(yellowButton);
//  digitalWrite(4, HIGH);
  if (redButton == LOW)
  {
    digitalWrite(5, onOff);
    digitalWrite(4, !onOff);
  }
  else
  {
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
  }
}
