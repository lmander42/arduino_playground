//sound in and outs
const int trigPin = 4;
const int echoPin = 3;
const int dxLed = 11;
//vars
float x = 0;
float distance = 0;

void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  sensorControl();
  x = Position(distance);
  Serial.println(x);
  ledBrightness(dxLed,x);
}


