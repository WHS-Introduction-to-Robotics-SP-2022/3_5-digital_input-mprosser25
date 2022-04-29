void setup() {
  
  pinMode(10, OUTPUT);
  pinMode(3,OUTPUT);

     digitalWrite(10, HIGH);  
  digitalWrite(3,HIGH);
  delay(1000);                       
  digitalWrite(10, LOW);    
 digitalWrite(3,LOW);
 
 delay(1000);
 digitalWrite(10, HIGH);  
  digitalWrite(3,HIGH);
  delay(1000);                       
  digitalWrite(10, LOW);    
 digitalWrite(3,LOW);
  
  
  
  
  
}

 
void loop() {
  
  delay(200);
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  delay(200);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  delay(200);
  
  
  
  
  
  
}
