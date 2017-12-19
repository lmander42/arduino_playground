//sound in and outs
const int trigPin = 4;
const int echoPin = 3;
const int dxLed   = 11;
const int buzzer  = 5;
//vars
float dist;

void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(dxLed,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  //Perform a distance reading
  sensorControl(); 
  //Check the distance
  dist = Position(dist);
  //Return the distance to a serial monitor
  Serial.read(dist);
  //If distance < 10cm, do something
  if( dist < 10 ) alarm();
}


