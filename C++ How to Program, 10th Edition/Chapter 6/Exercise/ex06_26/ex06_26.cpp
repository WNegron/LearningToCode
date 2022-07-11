/***************************************************************************************************

File Name: ex06_26.cpp
     Date: 2022-07-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
    My answer to exercise 6.26 using only the tools and methods taught up to Chapter 6.

    This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.26 (Celsius and Fahrenheit Temperatures) Implement the following integer functions:
        a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
        b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
        c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents 
of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit 
temperatures from 32 to 212 degrees. 

    Print the outputs in a neat tabular format that minimizes the number of lines of output while 
remaining readable.

***************************************************************************************************/
//#include <iostream>//enables program to perform input/output
#include "Temperature.hpp"//enable program to use Temperature functions

int main(){

    printCelsius();

    printFahrenheit();
    
    return 0;
}//end function main