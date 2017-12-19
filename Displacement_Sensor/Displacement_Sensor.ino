//sound in and outs
const int trigPin = 4;
const int echoPin = 3;
//leds
const int posLed = 13;
const int negLed = 11;

//vars
double xi = 0;
double xf = 0;
int dx = 0;
double distance = 0;

void setup(){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  xi = sensorDistance(xi);

  /*
    max range o/ sesor => 3m
    speed o/ sound @ sea level ~ 331.5 m/s
    So 9050 microsec to travel 3m
  */  
  delayMicroseconds(9050);
  
  xf = sensorDistance(xf);
  
  dx = xf-xi;
  
  //print results to serial monitor
  Print(xi,xf,dx);
  
  //control leds
  ledControl(posLed,negLed,dx);
}

