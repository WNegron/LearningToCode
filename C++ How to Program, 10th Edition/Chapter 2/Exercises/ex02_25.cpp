/* ************************************************************************************

Filename: ex02_25.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.25 using only the tools and methods taught up to Chapter 2.

Description:

2.25 (Multiples) Write a program that reads in two integers and determines and prints
if the first is a multiple of the second. 
[Hint: Use the remainder operator (%).] 

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaring and initializing variables
int number1 = 0, number2 = 0;

//prompt user for integers
cout << "Enter two integers: ";
cin >> number1 >> number2;

if((number1 % number2) == 0)
	cout << number1 << " is a multiple of " << number2 << endl;

if((number1 % number2) != 0)
	cout << number1 << " is not a multiple of " << number2 << endl;

return 0; // indicate that program ended successfully
} // end of function main
