#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
int angle;

void setup() {
  servo1.attach(9 );
  servo2.attach(10 );
  servo3.attach(11);
  servo1.write(angle);
}

void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++)  
  {                                  
    servo1.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo1.write(angle);           
    delay(15);       
  } 
}
