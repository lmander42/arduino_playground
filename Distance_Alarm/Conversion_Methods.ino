//return distance
float Position(float duration){
  //time echoPin reads high ~> 2x distance
  duration = pulseIn(echoPin,HIGH);
  //convert time -> distance
  return toCm(duration);
}

//convert time to distance
float toCm(float time){
   return time / 30.17 / 2;     
     /*
       divide by 2 b/c time = distance there + distance back
       speed o/ sound @ sea level 
       ~331.5 m/s => 33150 cm/s
       ~0.00003017 s/cm => 30.17 microsec/cm
     */
}

//convert a value to analog
float toAnalog(float b){
  return 300*255/b;
  
/*
 distance sensor max = 3m = 300 cm  analog max = 255
 distance senor min = 0cm           analog min = 0
 
 therefore:
   255/300 = conversion factor
  
 for big distance =>  low val:
   max val could be the same if:
     b = 300*255/b
*/      
}

