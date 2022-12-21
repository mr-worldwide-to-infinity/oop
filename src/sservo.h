#ifndef sservo_h
#define sservo_h
#include <Arduino.h>
#include "test.h"
class sservo
{
private:
int graden=0;
int aantal=15;
int open=90;
int dicht =0;
int wachttijd=500;
float echtgewachtetijd;
public:
void setting(String b);
void begin();

};

#endif