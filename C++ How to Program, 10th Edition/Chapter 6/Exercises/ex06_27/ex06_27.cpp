/***************************************************************************************************

File Name: ex06_27.cpp
     Date: 2026-02-03
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.27 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.27 (Find the Minimum) Write a program that inputs three double-precision, floating-point
numbers and passes them to a function that returns the smallest number.

***************************************************************************************************/

#include <iostream>//enable program to perform input/output
//#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
//#include <cmath>//enable program to perform math functions
//#include <cstdlib> // contains prototypes for functions srand and rand
//#include <random> // contains C++11 random number generation features

/* #include "headerFileName.hpp"//enable program to use function from headerFileNames */


float minimum(float, float, float); //function prototype

using namespace std;//program uses names from namespace std

int main(){

    //variable declarations
    float num1 = 0.000;
    float num2 = 0.000;
    float num3 = 0.000;

    //prompt asking the user to enter a floating point number
    cout << "\nEnter a floating point number: ";
    cin >> num1;

    //prompt asking the user to enter a floating point number
    cout << "\nEnter a floating point number: ";
    cin >> num2;

    //prompt asking the user to enter a floating point number
    cout << "\nEnter a floating point number: ";
    cin >> num3;

    cout << setprecision(3) << fixed;
    //printing the numbers
    cout << "\nThe smallest number is " << minimum(num1, num2, num3) << endl;

    return 0;//program ended successfully
}//end of main function

float minimum(float x, float y, float z){
    float minimumValue = x;//assumes x is the smallest number

    //if to compare the 1st two numbers
    if(y < minimumValue){
        minimumValue = y;
    }
    
    if(z < minimumValue){
        minimumValue = z;
    }//end of else if
    
    return minimumValue;
}
