int lightPin = A3;
int whiteLED = 7;
int yellowLED = 10;
int lightVal;
int pause = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(whiteLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.print("Voltage: ");
  Serial.println(lightVal);

  if(lightVal > 200){
    digitalWrite(whiteLED,LOW);
    digitalWrite(yellowLED,HIGH);
  }else{
    digitalWrite(whiteLED,HIGH);
    digitalWrite(yellowLED,LOW);
  }
  delay(pause);
}
