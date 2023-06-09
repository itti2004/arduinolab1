void setup() {
  pinMode(16,OUTPUT);
  pinMode(15,OUTPUT);
}

void loop() {
  digitalWrite(16,HIGH);
  delay(1000);
  digitalWrite(16,LOW);
  delay(500);
  digitalWrite(15,HIGH);
  delay(1000);
  digitalWrite(15,LOW);
  delay(500);
  // put your main code here, to run repeatedly:

}
