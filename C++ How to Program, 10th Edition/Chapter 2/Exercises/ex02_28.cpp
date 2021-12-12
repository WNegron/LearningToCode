/* ************************************************************************************

Filename: ex02_28.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.28 using only the tools and methods thought in Chapter 2.

Description:

2.28 (Digits of an Integer) Write a program that inputs a four-digit integer, separates
the integer into its digits and prints them separated by three spaces each.
[Hint: Use the integer division and remainder operators.] 
For example, if the user types in 4315, the program should print:
	4   2   3   3   9

************************************************************************************ */
	
#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

//declaring and initializing variables
int number = 0;

//prompt user for an integer
cout << "Enter an integer(4 digit): ";
cin >> number;

//prompt user for an integer
cout << "Enter an integer(4 digit): ";
cin >> number;

cout << number / 10000;
number = number % 10000;
cout << "   " << number / 1000;
number = number % 1000;
cout << "   " << number / 100;
number = number % 100;
cout << "   " << number / 10;
number = number % 10;
cout << "   " << number << endl;


return 0; // indicate that program ended successfully
} // end of function main
