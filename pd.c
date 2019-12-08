byte in1=8;
byte in2=7;
byte in3=5;
byte in4=4;
byte enA=3;
byte enB=9;
const uint8_t P = 1;
const uint8_t P1 = 0;
const uint8_t PIN_L = 13;
bool FLAG_L = LOW;
void setup() {

pinMode(PIN_L, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
}

void loop() {

if ( FLAG_L = analogRead(P)>900 ) {
analogWrite (enA, 250);
analogWrite (enB, 150);
digitalWrite (in1, LOW);
digitalWrite (in2, HIGH);
digitalWrite (in3, HIGH);
digitalWrite (in4, LOW);
digitalWrite (PIN_L, FLAG_L);
}
else if (FLAG_L = analogRead (P1)>900){
analogWrite (enA, 150);
analogWrite (enB, 250);
digitalWrite (in1, HIGH);
digitalWrite (in2, LOW);
digitalWrite (in3, LOW);
digitalWrite (in4, HIGH);
digitalWrite (PIN_L, FLAG_L);
}

else {
analogWrite (enA, 150);
analogWrite (enB, 150);
digitalWrite (in1, LOW);
digitalWrite (in2, HIGH);
digitalWrite (in3, LOW);
digitalWrite (in4, HIGH);
digitalWrite (PIN_L, FLAG_L);
}
}
