#include "test.h"
#include <Arduino.h>

String test::GetData()
{
    if(Serial.available()){
    data = Serial.readString();
    }
    return data;
}
void test::SendData(String k ){
    Serial.println(k);
}