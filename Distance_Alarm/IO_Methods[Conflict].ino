//control sensor
void sensorControl(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
}

//analog write led based on distance
void ledBrightness(int led, float x){
  //converts a distance value into an analog one
  x = toAnalog(x);
  //analogWrite converted value
  analogWrite(led,x);
} 

void alarm(){
  //Turn on the buzzer
  digitalWrite(buzzer,HIGH);
  //Wait a little bit
  delay(500);
  //Then turn it off
  digitalWrite(buzzer,LOW);
}

