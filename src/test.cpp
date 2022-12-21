#include "test.h"
#include <Arduino.h>

String test::GetData()
{
    data = Serial.readString();
    return data;
}
void test::SendData(String k)
{
    Serial.println(k);
}