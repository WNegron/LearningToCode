/* ************************************************************************************

Filename: ex04_29.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.29 using only the tools and methods taught up to Chapter 4.

I have change the output stament from "* " to "*". But the resulting output is the same.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.29 (Checkerboard Pattern of Asterisks) Write a program that displays the following 
checkerboard pattern. Your program must use only three output statements, one of each of 
the following forms:
	cout << "* "; 
	cout << ' '; 
	cout << endl;
	
    ------ Example Output -------------------------------------------------------
       * * * * * * * * 
		* * * * * * * *
       * * * * * * * * 
        * * * * * * * *
       * * * * * * * * 
        * * * * * * * *
       * * * * * * * * 
        * * * * * * * *  
    -----------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------
	Initialize column counter
	Initialize row counter
	Initialize column size
	Initialize row size
	
	loop while row counter is less than row size
		loop while column counter is less than column size
		 	if row counter is an odd number and column counter is an odd number 
		 	or row counter is an even number and column counter is an even number
		 	
		 		print an asterisks (*)
		 		
		 		Increment columnCounter
		 		
		 	else if row counter is an odd number and column counter is an even number
		 	or row counter is an even number and column counter is an odd number
		 	
		 		print a blank space (" ")
		 		
		 		Increment columnCounter
			
			When column counter reaches column size output a new line
		
		Reset column counter to 1 for the next row
		
		Increment rowCounter
-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int columnCounter = 1;
int rowCounter = 1;

// size (amount) of rows and columns cannot be change
const int rowSize = 8;
const int columnSize = 15;

while(rowCounter <= rowSize){//loop until rowCounter is greater than rowSize
	while(columnCounter <= columnSize){//loop until columnCounter is greater than columnSize
		//validates when to print an asterisks
		if((rowCounter % 2 == 1 && columnCounter % 2 == 1) || 
		(rowCounter %2 == 0 && columnCounter % 2 == 0)){
			cout << "*";//output asterisks
			++columnCounter;//increment columnCounter by 1
		}//end if
		//validates when to print an empty space
		else if((rowCounter % 2 == 1 && columnCounter % 2 == 0) ||
		(rowCounter % 2 == 0 && columnCounter % 2 == 1)){
			cout << " ";//output empty space
			++columnCounter;//increment columnCounter by 1
		}//end else if 
	}//end inner while
	
	columnCounter = 1;//re-initialize
	cout << endl;//outputs newline
	++rowCounter;//increment rowCounter
}//end while
return 0; // indicate that program ended successfully
} // end of function main
