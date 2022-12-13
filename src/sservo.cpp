#include "sservo.h"
#include <Arduino.h>
#include <Servo.h>
#include "test.h"
 Servo servoa;
 void sservo::begin(){
 servoa.attach(9);   
 servoa.write(graden);
}
void sservo::setting(int a, test ar){
servoa.write(a);
ar.SendData("done");
}