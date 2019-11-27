
// Двигатель A 
int enA = 9;
int in1 = 8;
int in2 = 7;
// Двигатель B
int enB = 3;
int in3 = 5;
int in4 = 4;


const uint8_t P = 0;                    
const uint8_t PIN_L  = 13;                    
      bool    FLAG_L = LOW;                   
void setup(){
  pinMode(PIN_L, OUTPUT);                     
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void loop(){
  if (FLAG_L = analogRead(P)>600)
  {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
    }

  else if (FLAG_L == LOW){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
    
    }


   
  if (FLAG_L = analogRead(P)==600){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);}
  digitalWrite(PIN_L, FLAG_L);            
  
  
  
  analogWrite(enA, 255);   
  analogWrite(enB, 255);



}
