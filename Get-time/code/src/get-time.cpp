/* time example */
//
//
#include <iostream>
#include <ctime>
#include "MathFuncsLib.h"

// compile: g++ -I ..\..\MathLib-project\build\DESTINATION\usr\inc -c get-time.cpp -o get-time.o
// link: g++ -o get-time.exe get-time.o ..\..\MathLib-project\build\DESTINATION\usr\lib\libMathFuncs.a

using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;

   cout << "Using the MathFunctions library" << endl;
   cout << 1 + ltm->tm_hour << " + " << 1 + ltm->tm_min << " = ";
   cout << MathFuncs::MyMathFuncs::Add(1 + ltm->tm_hour, 1 + ltm->tm_min) << endl;

   cout << 1 + ltm->tm_hour << " - " << 1 + ltm->tm_min << " = ";
   cout << MathFuncs::MyMathFuncs::Subtract(1 + ltm->tm_hour, 1 + ltm->tm_min) << endl;

   cout << 1 + ltm->tm_hour << " * " << 1 + ltm->tm_min << " = ";
   cout << MathFuncs::MyMathFuncs::Multiply(1 + ltm->tm_hour, 1 + ltm->tm_min) << endl;

   cout << 1 + ltm->tm_hour << " / " << 1 + ltm->tm_min << " = ";
   cout << MathFuncs::MyMathFuncs::Divide(1 + ltm->tm_hour, 1 + ltm->tm_min) << endl;


   return 0;
}
