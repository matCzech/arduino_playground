int voltPin = A2;
int readVal;
float V2;
int delayT = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(voltPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(voltPin);
  V2 = (5/1023.) * readVal;
  Serial.println(V2);
  delay(delayT);
}
