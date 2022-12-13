#ifndef sservo_h
#define sservo_h
#include <Arduino.h>
#include "test.h"
class sservo
{
private:
int graden=0;
public:
void setting(int a, test ar );
void begin();

};

#endif