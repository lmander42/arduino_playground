//control sensor & find distance
double sensorDistance(double distance){
  sensorControl();
  return distance = Position(distance);
}

//control sensor
void sensorControl(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
}


//return distance
double Position(double distance){
  //read pulse from echoPin
  double duration = pulseIn(echoPin,HIGH);
  //convert pulse to a distance
  return distance = toCm(duration);
}

//convert time to distance
double toCm(double time){
  return time / 30.17 / 2;
    //divide by 2 b/c time = distance there + distance back
      /*
      speed o/ sound @ sea level 
      ~331.5 m/s => 33150 cm/s
      ~0.00003017 s/cm => 30.17 microsec/cm
      */
}

//prints inputs to serial monitor
void Print(double xi, double xf, int dx){
  Serial.print("Position Initial: ");
  Serial.println(xi);
  
  Serial.print("Position Final: ");
  Serial.print(xf),("\t");
  
  Serial.print("Displacement:\t");
  Serial.print(dx);
}

//controls leds
void ledControl(int posLed,int negLed, int dx){
  if(dx>0){
    digitalWrite(posLed,HIGH);
    digitalWrite(negLed,LOW);
  }
  else if(dx<0){
    digitalWrite(posLed,LOW);
    digitalWrite(negLed,HIGH);
  }
  else
    digitalWrite(posLed,LOW);
    digitalWrite(negLed,LOW);
}
