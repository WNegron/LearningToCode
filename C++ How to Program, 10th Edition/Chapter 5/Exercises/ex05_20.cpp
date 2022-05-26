/* ************************************************************************************

Filename: ex05_20.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.20 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.20 (Pythagorean Triples) A right triangle can have sides whose lengths are all integers. The 
	set of three integer values for the lengths of the sides of a right triangle is called a 
	Pythagorean triple. The lengths of the three sides must satisfy the relationship that the sum 
	of the squares of two of the sides is equal to the square of the hypotenuse. 
	
	Write an application that displays a table of the Pythagorean triples for side1, side2 and the 
	hypotenuse, all no larger than 500. Use a triple-nested for loop that tries all possibilities. 
	
	This is an example of “brute-force” computing. You’ll learn in more advanced computer-science 
	courses that for many interesting problems there’s no known algorithmic approach other than 
	using sheer brute force.
************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> // parameterized stream manipulators
#include <cmath> //enable program to use mathematical functions that are part of the header file
//e.g. pow function use in this program

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int sideSquared = 0;
//int side2Squared = 0;
int hypotenuseSquared = 0;

cout << "Pythagorean Triples (up to 500)" << endl;
cout << "Hypotenuse" << setw(10) << "Side1" << setw(10) << "Side2" << endl;

//hypotenuse for loop
for(int hypotenuse = 1; hypotenuse <= 500; hypotenuse++){
	//side1 for loop
	for(int side1 = 1; side1 <= 500; side1++){
		//side2 for loop
		for(int side2 = 1; side2 <= 500; side2++){
			//calculate the square of the hypotenuse 
			hypotenuseSquared = pow(hypotenuse,2);
			
			//calculate the square of the sides and add them
			sideSquared = pow(side1,2) + pow(side2,2);
			
			// using if to determine it's a Pythagorean Triple
			if(hypotenuseSquared == sideSquared){
				//print triples
				cout << hypotenuse << setw(15) << side1 << setw(10) << side2 << endl;
			}//end of if
			else{
				continue;
			}//end of else
		}//end of side2 for loop
	}//end of side1 for loop
}//end of hypotenuse for loop

return 0; // indicate that program ended successfully
} // end of function main
