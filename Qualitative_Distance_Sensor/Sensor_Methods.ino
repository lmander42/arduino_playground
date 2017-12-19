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

