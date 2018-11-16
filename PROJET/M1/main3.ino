void setup() {
  Serial.begin(9600); 

}
int t2 = 0; 
void loop() {
  
  int pouls = 0; 
  int t1 = millis(); 

  while (t2 - t1 < 15000) {
    int sensorValue = analogRead(A0); 
    if (sensorValue > 500) { 
      Serial.println(pouls);
      Serial.println(t1);
      pouls = pouls + 1;
    }
    t2 = millis();
    delay(150); 
  }
  Serial.print(t2);
  Serial.print(";");
  Serial.println(pouls);
}
