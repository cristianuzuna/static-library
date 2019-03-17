//
//  Conversion - Program to convert temperature from
//             Celsius degrees into Fahrenheit:
//             Fahrenheit = Celsius  * (212 - 32)/100 + 32
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "temperature.h"

// enter the temperature in Celsius

int Fahrenheit(const int celsius)
{
    // calculate conversion factor for Celsius
    // to Fahrenheit
    int factor;
    factor = 212 - 32;

    // use conversion factor to convert Celsius
    // into Fahrenheit values
    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    return fahrenheit;
}

