/* ************************************************************************************

Filename: ex02_19.cpp
    Date: 2021-12-09
	Author: Warren Negron
	Email: warren.negron@gmail.com

Note: My answer to exercise 2.19 using only the tools and methods taught up to Chapter 2.

Description:
2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers
from the keyboard and prints the sum, average, product, smallest and largest of these
numbers. The screen dialog should appear as follows:

	Input three different integers: 13 27 14 
	Sum is 54
	Average is 18
	Product is 4914
	Smallest is 13
	Largest is 27

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
int main(){

// variables declaration, will store numbers enter by user
float number1 = 0;
float number2 = 0;
float number3 = 0;

// prompt user for input
 cout << "Sum, product, average, smallest, and larger of the three numbers.\n";
 cout << "Input three different integers: ";
 cin >> number1 >> number2 >> number3;
 
 //print the sum, product, difference, and quotient of the two numbers.
 cout << "The sum is " << number1 + number2 + number3 << endl;
 
 cout << "The product is "<< number1 * number2 * number3 << endl;
 
 cout << "The average is " << (number1 + number2 + number3) / 3 << endl;
 
 if(number1 < number2 && number1 < number3)
 	cout << "Smallest is " << number1 << endl;
 if(number2 < number1 && number2 < number3)
 	cout << "Smallest is " << number2 << endl;
 if(number3 < number1 && number3 < number2)
 	cout << "Smallest is " << number3 << endl;
 	
 if(number1 > number2 && number1 > number3)
 	cout << "Largest is " << number1 << endl;	
 if(number2 > number1 && number2 > number3)
 	cout << "Largest is " << number2 << endl;
 if(number3 > number1 && number3 > number2)
 	cout << "Largest is " << number3 << endl;

return 0; // indicate that program ended successfully
} // end of function main
