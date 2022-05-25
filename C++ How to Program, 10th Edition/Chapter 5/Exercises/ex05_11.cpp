/* ************************************************************************************

Filename: ex05_11.cpp
    Date: 2022-05-24
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.11 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	5.11 (Find the Smallest Value) Write an application that finds the smallest of several integers.
	Assume that the first value read specifies the number of values to input from the user.

-----------------------------      Pseudocode      ------------------------------------
prompt user for the number of iterations
read numberOfIterations

while counter < numberOfIterations
	prompt user for integer
	read integer
	if integer < smallest
		smallest = integer
	increase counter

print smallest
-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int counter = 0;
int numberOfIterations = 0;
int smallest = 0;
int number = 0;

//prompt user for the amount of integers he will be entering
cout << "Enter an integer: ";
cin >> numberOfIterations; //read integer

//begin while loop; until "counter" is equal to "numberOfIterations"
while(counter < numberOfIterations){
	//prompt use for an integer
	cout << "Enter an integer: ";
	cin >> number;//read integer
	
	if(counter == 0){//checks if this is the first integer being enter
		smallest = number;//assigns the first integer entered to smallest
	}//end of if
	else if(number < smallest){ //compares the new integer with the value in "smallest"
		smallest = number;//assigns the new integer to smallest
	}//end of else if
	
	++counter;//increase "counter"
}//end of while

//print smallest integer
cout << "The smallest integer entered was " << smallest << endl;

return 0; // indicate that program ended successfully
} // end of function main
