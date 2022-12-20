#include "sservo.h"
#include <Arduino.h>
#include <Servo.h>
#include "test.h"
Servo kast[11];
void sservo::begin()
{
    int kastcount;
    for (int i = 2; i < aantal; i++)
    {
        kast[kastcount].attach(i);
        kast[kastcount].write(dicht);
        kastcount++;
    }
}
void sservo::setting(String b)
{
unsigned int data_num = 0;
int data[21];
// loop as long as a comma is found in the string
while(b.indexOf(",")!=-1){
  // take the substring from the start to the first occurence of a comma, convert it to int and save it in the array
  data[ data_num ] = b.substring(0,b.indexOf(",")).toInt();
  data_num++; // increment our data counter
  //cut the data string after the first occurence of a comma
 b = b.substring(b.indexOf(",")+1);
}
// get the last value out of the string, which as no more commas in it
data[ data_num ] = b.toInt();

    for (int i = 0; i <=data_num; i++)
    {
        kast[data[i]].write(open);
    }
    echtgewachtetijd=millis();
    while (echtgewachtetijd<wachttijd)
    {
    }
    for (int i = 0; i < 11; i++)
    {
        kast[i].write(dicht);
    }
    
    
}

