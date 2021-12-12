/* ************************************************************************************

		Filename: ex02_16.cpp
			  Date: 2021-12-09
		  Author: Warren Negron
		   Email: warren.negron@gmail.com
		   
Note: My answer to exercise 2.16 using only the tools and methods taught up to Chapter 2


Description:

2.16 (Arithmetic) Write a program that asks the user to enter two numbers, 
obtains the two numbers from the user and prints the sum, product, difference,
and quotient of the two numbers. 

************************************************************************************ */

#include<iostream> //enables program to perform input and output

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begins program
int main(){

// variables declaration, will store numbers enter by user
float number1 = 0;
float number2 = 0;

// prompt user for input; two numbers
 cout << "I will print the sum, product, difference, and quotient of the two numbers.\n";
 cout << "Enter the first number: ";
 cin >> number1;
 cout << "Enter the second number: ";
 cin >> number2;
 
//print the sum, product, difference, and quotient of the two numbers.
 
 //addition
 cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
 
 //multiplication
 cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
 
 //subtraction
 cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
 
 //division
 cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
 
 /*cout << "Bonus: The remainder of the division" << endl; 
 cout << number1 << " % " << number2 << " = " << number1 % number2 << endl; */
 
return 0;// indicates program ended succesfully	
} // end of function main
