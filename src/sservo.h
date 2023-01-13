#ifndef sservo_h
#define sservo_h
#include <Arduino.h>
#include "test.h"
class sservo
{
private:
int graden=0;
int aantal=11;
int open=0;
int dicht =180;
int wachttijd=1500;
float echtgewachtetijd;
public:
void setting(String b);
void begin();

};

#endif