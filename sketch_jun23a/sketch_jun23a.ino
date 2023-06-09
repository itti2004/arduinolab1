const int sensor1 = 12;
const int sensor2 = 13;
const int R1 = 23;
const int R2 = 22;
const int L1 = 19;
const int L2 = 18;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int  sn1 = digitalRead(sensor1);
int  sn2 = digitalRead(sensor2);
  if(sn1 == HIGH){
    right();
  }else if (sn2 == HIGH){
    left();
  }else if (sn1 == HIGH && sn2 == HIGH){    
    stopped ();
  }
}

void forward() {
    digitalWrite(R1,HIGH);
    digitalWrite(R2,LOW);
    digitalWrite(L1,HIGH);
    digitalWrite(L2,LOW);
    delay(1000);
}

void reverse() {
    digitalWrite(R1,LOW);
    digitalWrite(R2,HIGH);
    digitalWrite(L1,LOW);
    digitalWrite(L2,HIGH);
    delay(1000);
   
}
void stopped() {
    digitalWrite(R1,LOW);
    digitalWrite(R2,LOW);
    digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    delay(1000);
}
void right() {
    digitalWrite(R1,LOW);
    digitalWrite(R2,HIGH);
    digitalWrite(L1,HIGH);
    digitalWrite(L2,LOW);
    delay(1000);
   
}
void left() {
    digitalWrite(R1,HIGH);
    digitalWrite(R2,LOW);
    digitalWrite(L1,LOW);
    digitalWrite(L2,HIGH);
    delay(1000);
   
}
