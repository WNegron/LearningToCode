/***************************************************************************************************

File Name: Temperature.hpp
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
#include <iostream>//enables funciton to perform input/output

//function template; function toCelsius
template <typename C>
C toCelsius(C fValue){
    return (((fValue - 32) * 5))/9;
}//end funciton toCelsius

//function template; function toFahrenheit
template <typename F>
F toFahrenheit(F cValue){
    return ((cValue * 9)/5) + 32;
}//end function toFahrenheit


void printCelsius(){
    std::cout << "Celsius \t Fahrenheit" << std::endl;
    for(int i = 0; i <= 100; i++){
        std::cout << "  " << i << "  \t\t   " << toFahrenheit(double(i * 1.0)) << std::endl;
    }//end for
}//end function printCelsius

void printFahrenheit(){
    std::cout << "Fahrenheit \t Celsius" << std::endl;
    for(int i = 32; i <= 212; i++){
        std::cout << "  " << i  << "  \t\t   "  << toCelsius(double(i * 1.0)) << std::endl;
    }//end function printFahrenheit
}//end function printFahrenheit
