#include <Arduino.h>
#include "test.h"
#include "sservo.h"

test arduinocom;
String received;
sservo locker;
String k = "kpldfji";
void setup()
{
    Serial.begin(9600);
    locker.begin();
}

void loop()
{
    locker.setting("4,8,10");
  
}