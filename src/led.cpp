#include "led.h"
# include <Arduino.h>
void led::ledonaantal(int a, int b){
     ledpin=A0;
    for (int i = 0; i < vorigaantal; i++)
    {
        
        pinMode(ledpin, OUTPUT);
        analogWrite(ledpin, 0);
        ledpin++;
    }
    ledpin=A0;

    for (int i = 0; i < a; i++)
    {
        
        pinMode(ledpin, OUTPUT);
        analogWrite(ledpin, b);
        ledpin++;
    }
    vorigaantal=a;
   
    

}