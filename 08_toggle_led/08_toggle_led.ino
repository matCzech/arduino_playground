int ledState = 0;
int ledPin = 10;
int buttonPin = A3;
int buttonNew;
int buttonOld = 1;
int pause = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  if(buttonOld == 0 && buttonNew == 1){
    if(ledState == 0){
      digitalWrite(ledPin,HIGH);
      ledState = 1;
    }else{
      digitalWrite(ledPin,LOW);
      ledState = 0;
    }
  }
  buttonOld = buttonNew;
  delay(pause);
}
