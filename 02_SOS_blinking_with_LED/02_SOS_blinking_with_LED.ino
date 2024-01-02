int ledPin = 8;
int shortDot = 250;
int longDot = 700;
int pause = 3000;


void setup() {
  pinMode(8,OUTPUT);   
}

void loop() {
  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);
  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);
  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);

  digitalWrite(ledPin,HIGH);
  delay(longDot);
  digitalWrite(ledPin,LOW);
  delay(longDot);
  digitalWrite(ledPin,HIGH);
  delay(longDot);
  digitalWrite(ledPin,LOW);
  delay(longDot);
  digitalWrite(ledPin,HIGH);
  delay(longDot);
  digitalWrite(ledPin,LOW);
  delay(longDot);


  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);
  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);
  digitalWrite(ledPin,HIGH);
  delay(shortDot);
  digitalWrite(ledPin,LOW);
  delay(shortDot);

  delay(pause);
}
