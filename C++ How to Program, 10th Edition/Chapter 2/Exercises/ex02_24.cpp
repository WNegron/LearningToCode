/* ************************************************************************************

Filename: ex02_24.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.24 using only the tools and methods taught up to Chapter 2.

Description:

2.24 (Odd or Even) Write a program that reads in two integers and determines and
prints whether each integer, as well as the sum of the two integers is an odd number.
[Hint: Use the remainder operator (%). An odd number is not a multiple of two. Any odd 
number has a remainder of one when divided by 2.] 

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaring and initializing variables
int number1 = 0;
int number2 = 0;
int sum = 0;

//prompt user for integers
cout << "Enter two integers: ";
cin >> number1 >> number2;

sum = number1 + number2;
cout << "Sum is: " << sum << endl;

if((number1 % 2) == 0)
	cout << number1 << " is an even number.\n";
else
	cout << number1 << " is an odd number.\n";

if((number2 % 2) == 0)
	cout << number2 << " is an even number.\n";
else
	cout << number2 << " is an odd number.\n";
	
if((sum % 2) == 0)
	cout << sum << " is an even number.\n";
else
	cout << sum << " is an odd number.\n";

return 0; // indicate that program ended successfully
} // end of function main
