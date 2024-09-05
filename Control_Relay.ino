// Control-Relay(Switching)
#define Relay 2
#define tb_on 3
#define tb_off 4

void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}
void loop(){
  if(digitalRead(tb_on)==LOW){
    digitalWrite(Relay,HIGH);
  }
  else if(digitalRead(tb_off)==LOW){
    digitalWrite(Relay,LOW);
  } 
  
}