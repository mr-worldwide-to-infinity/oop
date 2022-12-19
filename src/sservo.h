#ifndef sservo_h
#define sservo_h
#include <Arduino.h>
#include "test.h"
class sservo
{
private:
int graden=0;
int aantal=11;
int open=90;
int dicht =0;
int wachttijd=500;
int echtgewachtetijd;
public:
void setting(String b);
void begin();

};

#endif