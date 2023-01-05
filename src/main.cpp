#include <Arduino.h>
#include "test.h"
#include "sservo.h"

test arduinocom;
String received;
sservo locker;
String oldreceived;


void setup()
{
    Serial.begin(9600);
    locker.begin();
}

void loop()
{
    received=arduinocom.GetData();
    if(received!=oldreceived){
    received=("1,2,3");
    locker.setting(received);
    received="";
    }
    oldreceived=received;
}