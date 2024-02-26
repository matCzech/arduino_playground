int readPin = A2;
int ledPin = 11;
int readVal;
float V2;
int pause = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V2 = (5./1023.) * readVal;
  Serial.print("Potentiometer voltage is: ");
  Serial.println(V2);
  if(V2 > 4.0){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }
  delay(pause);
}
