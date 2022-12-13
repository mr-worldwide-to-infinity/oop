#ifndef test_h
#define test_h
#include <Arduino.h>

class test
{
private:
   String data;

public:
   String GetData();
   void SendData(String k);
   };

#endif