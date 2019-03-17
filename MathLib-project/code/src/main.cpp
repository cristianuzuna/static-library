  //
//  Conversion - Program to convert temperature from
//             Celsius degrees into Fahrenheit:
//             Fahrenheit = Celsius  * (212 - 32)/100 + 32
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "temperature.h"
#include "MathFuncsLib.h"

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // enter the temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius:";
    cin >> celsius;

    // use conversion factor to convert Celsius
    // into Fahrenheit values
    int fahrenheit;
    fahrenheit = Fahrenheit(celsius);

    // output the results (followed by a NewLine)
    cout << "Fahrenheit value is:";
    cout << fahrenheit << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();


    cout << "Using the MathFunctions library" << endl;
    cout << "75 + 87 = " << MathFuncs::MyMathFuncs::Add(75, 87) << endl;
    cout << "75 - 87 = " << MathFuncs::MyMathFuncs::Subtract(75, 87) << endl;
    cout << "75 * 87 = " << MathFuncs::MyMathFuncs::Multiply(75, 87) << endl;
    cout << "75 / 87 = " << MathFuncs::MyMathFuncs::Divide(75, 87) << endl;


    return 0;
}
