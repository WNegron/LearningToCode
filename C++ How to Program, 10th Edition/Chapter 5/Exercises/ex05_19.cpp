/* ************************************************************************************

Filename: ex05_19.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
	My answer to exercise 5.19 using only the tools and methods taught up to Chapter XX.

	This exercise is from the global Edition of C++ How to Program, 10/e 

	On my MacBookPro running MacOS X El Capitan, I needed 753,510 terms to get a value that 
	begins with 3.14159

Description:

	5.19 (Calculating the Value of Pi) Calculate the value of π from the infinite series
				    4   4   4   4   4    ... 
			π = 4 – - + - – - + - – - +  ...
                    3   5   7   9   11   ...
 Print a table that shows the value of π approximated by computing the first 200,000 terms of this
 series. 
 
 How many terms do you have to use before you first get a value that begins with 3.14159?

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> // parameterized stream manipulators

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double pi = 4.00;
int signedAddOrSub = 1; // 1 will be subtract, 2 will be add

for(int i = 3; i < 200000; i+=2){//using the counter as the denominator
	switch(signedAddOrSub){
		case 1:
			pi = pi - double(4.00/i);
			signedAddOrSub = 2;
			break;
		case 2:
			pi = pi + double(4.00/i);
			signedAddOrSub = 1;
			break;
	}//end of switch case
}//end of for

// set floating-point number format
cout << fixed << setprecision(20);
cout << "pi = " << pi <<endl;

return 0; // indicate that program ended successfully
} // end of function main
