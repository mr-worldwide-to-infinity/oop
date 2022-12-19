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
    int str_length = b.length();

    // create an array with size as string
    // length and initialize with 0
    int arr[str_length] = {0};

    int j = 0, i, sum = 0;

    // Traverse the string
    for (i = 0; b[i] != '&#092;&#048;'; i++)
    {

        // if str[i] is ', ' then split
        if (b[i] == ',')
            continue;
        if (b[i] == ' ')
        {
            // Increment j to point to next
            // array location
            j++;
        }
        else
        {

            // subtract str[i] by 48 to convert it to int
            // Generate number by multiplying 10 and adding
            // (int)(str[i])
            arr[j] = arr[j] * 10 + (b[i] - 48);
        }

    }
    for (int i = 0; i < str_length; i++)
    {
        kast[arr[i]].write(open);
        
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

