#include <Arduino.h>
#include "test.h"
#include "sservo.h"
#include "led.h"
led led1;
test arduinocom;
sservo sservo1;
String received;
void setup() {
Serial.begin(9600);
sservo1.begin();
}

void loop() {
received=arduinocom.GetData();
if(received.startsWith("s")){
int start= received.indexOf("o");
String hoek= received.substring(start+1);
sservo1.setting(hoek.toInt(), arduinocom);
}
if(received.startsWith("l")){
int start= received.indexOf("?");
int eind = received.indexOf("d");
String helderheid= received.substring(start+1);
String aantal= received.substring(eind+1, start);
led1.ledonaantal(aantal.toInt(), helderheid.toInt());
}
 
    
    
}
