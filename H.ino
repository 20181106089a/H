void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.println(9600);
}

void Point(){
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}

void Straw(){
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(13,LOW);
  delay(500);
}

 void Jg(){
    digitalWrite(13,LOW);
  delay(1500);
}

void H(){
  for(int i=0;i<4;i++){
    Point();
  }
  Serial.println("H");
}

void E(){
  Point();
  void KongStraw();
  void KongStraw();
  void KongStraw();
  Serial.println("E");
}

void L(){
  Point();
  Straw();
  Point();
  Point();
  Serial.println("L");
}
void O(){
  Straw();
  Straw();
  Point();
  Straw();
  
  }

  
void loop() {
  // put your main code here, to run repeatedly:
  H();
  Jg();
  E();
  Jg();
  L();
  Jg();
  L();
  Jg();
  O();
  
}
