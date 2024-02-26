int ledPin = 8;
int readPin = A3;
int readVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(INPUT,readPin);
  pinMode(OUTPUT,ledPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = digitalRead(readPin);
  Serial.println();
  if(readVal == 1){
    digitalWrite(ledPin,HIGH);
  }else{
    digitalWrite(ledPin,LOW);
  }
}
