/* ************************************************************************************

Filename: ex04_33.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.33 using only the tools and methods taught up to Chapter 4.

To determine if the number can be sides of a triangle all of the following statements 
must be true:
	a + b > c
	c + a > b
	b + c > a

This is called the Inequality Triangle Theorem.
	
This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.33 (Sides of a Triangle) Write a program that reads three nonzero double values and determines 
and prints whether they could represent the sides of a triangle.

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double a = 0, b = 0, c = 0;

cout << "Program determines whether 3 sides could represent the sides of a triangle" << endl;
cout << "Enter 3 sides: ";
cin >> a >> b >> c;

if((b + c) > a){
	if((a + b) > c){
		if((a + c) > b){
			cout << "This sides could be the sides of a triangle" << endl;
		}//end if
		else{
			cout << "This is sides could not be the sides of a triangle" << endl;
		}//end else
	}//end inner if
	else{
		cout << "This is sides could not be the sides of a triangle" << endl;
	}//end else
}//end if
else{
	cout << "This is sides could not be the sides of a triangle" << endl;
}//end else

return 0; // indicate that program ended successfully
} // end of function main
