int switch1=2;
int switch2=4;
int led1=8;
int led2=9;
int led3=10;
int led4=11;
int led5=12;
int led6=13;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
}
void loop() {
  if(digitalRead(switch1)==HIGH){
    analogWrite(led1,127);
    digitalWrite(led2,HIGH);
  }
  else{
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW); 
  }
  if(digitalRead(switch2)==HIGH){
    analogWrite(led4,127);
    digitalWrite(led6,HIGH);
  }
  else{
   digitalWrite(led4,LOW);
   digitalWrite(led6,LOW); 
  }
    
}