/* ************************************************************************************

Filename: ex05_13.cpp
    Date: 2022-05-24
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.13 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

The difficulty in calculating 100! is the range. Type double might be best for calculating 100!. 

Description:
	5.13 (Factorials) Factorials are used frequently in probability problems. The factorial of a 
	positive integer n (written n! and pronounced “n factorial”) is equal to the product of the 
	positive integers from 1 to n.
	
	Write an application that calculates the factorials of 1 through 20. Use type long. 
	Display the results in tabular format. 
	
	What difficulty might prevent you from calculating the factorial of 100?
		
-----------------------------      Pseudocode      ------------------------------------
set nFactorial to 1
set product to 1
set counter to 1

do
	while counter2 <= nFactorial
	product *= counter2
	increase counter2
	
increase nFactorial
print product
reset counter to 1
reset product to 1
while nFactorial <= 20
-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
unsigned long int product = 1;
unsigned int nFactorial = 0;
unsigned int counter = 1;
//unsigned int counter2 = 1; 

//begin do...while loop
do{
	while(counter <= nFactorial){//begin while loop
		product *= counter;// calculate factorial
		++counter;//increase counter by 1
	}//end of while loop
	
	//print factorial
	cout << nFactorial << "! = " << product << endl;
	
	++nFactorial;//increase nFactorial by 1
	product = 1; // reset product before calculating the next factorial
	counter = 1; // reset counter before calculating the next factorial
}while (nFactorial <= 20);//end of do...while

return 0; // indicate that program ended successfully
} // end of function main
