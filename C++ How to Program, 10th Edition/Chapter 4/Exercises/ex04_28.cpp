/* ************************************************************************************

Filename: ex04_28.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.28 using only the tools and methods taught up to Chapter 4.

The exercise only requires for you to assume a 4-digit(4 bits) binary number, but I made the
program assuming an 8-digit (8 bits or 1 byte) as the binary number. The program still works
if the user input less than 8-digits because the divison (/) and the reminder(%) will equal 0 until
it reaches to correct value to get a quotient value of 1;

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.28 (Printing the Decimal Equivalent of a Binary Number) Input an integer containing 
only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. 

Use the remainder and division operators to pick off the “binary” number’s digits one at 
a time from right to left. Much as in the decimal number system, where the rightmost 
digit has a positional value of 1, the next digit left has a positional value of 10, 
then 100, then 1000, and so on, in the binary number system the rightmost digit has a 
positional value of 1, the next digit left has a positional value of 2, then 4, then 8, 
and so on. Thus the decimal number 234 can be interpreted as 2 * 100 + 3 * 10 + 4 * 1. 

The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8, 
or 13. [Note: To learn more about binary numbers, refer to Appendix D.]

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

//declaring and initializing variables
int binary = 0, decimal = 0, counter = 0, divisor = 0, multiplier = 0;

//value will not change, this variable are use to re-initialize
const int divisorConst = 10000000;
const int bitSize = 128;

//value will not change; use to validate loops
const int size = 8;
const int sentinel = -1;

multiplier = bitSize;
divisor = divisorConst;

//prompt user for binary
cout << "Enter a binary number: ";
cin >> binary;//input binary

//loop until user inputs sentinel value
while(binary != sentinel){

multiplier = bitSize; // re-initialize values
divisor = divisorConst;// re-initialize values
counter = 0;// re-initialize values
decimal = 0;// re-initialize values

	if(binary > sentinel){//validate binary value
		while(counter < size){//loop until counter is equal to size
			//change binary into decimal
			decimal = decimal + ((binary/divisor) * multiplier );
			
			//eliminate the outter most left digit
			binary %= divisor;
			
			//reduce the value of divisor to get the next proper value from binary
			divisor/=10; 
			
			//reduce value of the multiplier to properly calculate next decimal value
			multiplier /= 2;
			
			//increment counter
			++counter;
		}//end while
		
		//output the decimal value of the binary number entered by user
		cout << "The Decimal equivalent is: " << decimal << endl;
		
		// re-initialize values to continue loop but skip the if
		binary = -2;
	}//end if
	else{
		//prompt user for binary
		cout << "Enter a binary number: ";
		cin >> binary;//input binary
	}//end else
}//end while

return 0; // indicate that program ended successfully
} // end of function main
