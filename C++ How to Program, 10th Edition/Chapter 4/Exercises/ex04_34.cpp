/* ************************************************************************************

Filename: ex04_34.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.34 using only the tools and methods taught up to Chapter 4.

The Pythagorean Theorem:
	c^2 = a^2 + b^2

So, if the sum of the squares of the 2 smaller sides equal the length of the square of the
longest side means these 3 sides could make a right triangle.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.34 (Sides of a Right Triangle) Write a program that reads three nonzero integers and determines 
and prints whether they’re the sides of a right triangle.

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

void squareSums(double a, double b, double c){
	double squareSums = 0;
	squareSums = (a * a) + (b * b);
	if((c * c) == squareSums){
		cout << "These sides could be of a right triangle." << endl;
	}//end if
	else{
	cout << "These sides could not be of a right triangle." << endl;
	}//end else

}//end squareSums function

// main function begins program
int main(){

// declaration and initializing variables
double a = 0, b = 0, c = 0;
//int squareSums = 0;

while (a == 0 || b == 0 || c == 0){ 
cout << "Program determines whether 3 sides could represent the sides of a right triangle" << endl;
cout << "Enter 3 sides: ";
cin >> a >> b >> c;
}//end while

if( a < c && b < c){
	squareSums(a,b,c);
}//end if
else if(a < b && c < b){
	squareSums(a,c,b);
}//end if
else {
	squareSums(c,b,a);
}//end else

return 0; // indicate that program ended successfully
} // end of function main
