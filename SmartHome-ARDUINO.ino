const int ventilador = 6;
const int sala = 7;
const int quarto = 8;
const int tv = 9;

void setup(){
  pinMode(ventilador,OUTPUT);
  pinMode(sala,OUTPUT);
  pinMode(quarto,OUTPUT);
  pinMode(tv,OUTPUT);
  Serial.begin(9600);
}

int cmd;
void loop(){
  if(Serial.available()){   
    
    cmd = Serial.read();
        
     if (cmd==10) {
        digitalWrite(ventilador,HIGH);
     }else if (cmd==11){
        digitalWrite(ventilador,LOW);
     }else if (cmd==12) {
        digitalWrite(sala,HIGH);
     }else if (cmd==13){
        digitalWrite(sala,LOW);
     }else if (cmd==14) {
        digitalWrite(quarto,HIGH);
     }else if (cmd==15){
        digitalWrite(quarto,LOW);
     }else if (cmd==16) {
        digitalWrite(tv,HIGH);
     }else if (cmd==17){
        digitalWrite(tv,LOW);
     }
  }
}
