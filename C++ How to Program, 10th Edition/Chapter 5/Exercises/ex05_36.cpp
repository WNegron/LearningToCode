/* ************************************************************************************

Filename: ex05_36.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.36 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

The error shows at a precision of 15

Description:
	5.36 (Showing That double Values Are Approximate) Create a program that assigns 123.02 to a 
double variable, then displays the variable’s value with many digits of precision to the right of 
the decimal point. Which precision first shows you the representational error of storing 123.02 in 
a double variable?

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> //enable program to use parameterized stream manipulators

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double number = 123.02;

cout << fixed;

//for(int i = 2; i <= 20; i++)
//	cout << i << " " << setprecision(i) << number << endl;

cout << "Error: " << setprecision(15) << number << endl;



return 0; // indicate that program ended successfully
} // end of function main
