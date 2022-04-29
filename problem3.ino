
  
void setup() {
  
  Serial.begin(9200);
}


void loop() {
 
  int sensorValue = analogRead(A2);
 
  Serial.println(sensorValue);
  delay(1);
}
