/* ************************************************************************************

Filename: ex04_26.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.26 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.26 (Square of Asterisks) Write a program that reads in the size of the side of a square, 
then prints a hollow square of that size out of asterisks and blanks. Your program should 
work for squares of all side sizes between 1 and 20. For example, if your program reads a 
size of 5, it should print

  ****** Example Output *******************************************************
   
   ***** 
   *   *
   *   *
   *   *
   *****
   
  *****************************************************************************
   
************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int counter = 0;
int size = 0;
int column = 0;
//int tempCounter = 0;

//prompt user for the size
cout << "Enter the size of the side of a square: ";
cin >> size; //input the size

//loop while the counter is less than the size
while(counter < size){
	if(counter == 0 || counter == (size - 1) ){
		while(column < size){
			cout << "*";
			++column;
		}//end while
		column = 0;
		cout << endl;
	}//end if
	else{
		while(column < size){
			if(column == 0 || column == (size-1)){
				cout << "*";
			}//end if
			else {
				cout << " ";
			}//end else
			++column;
		}//endwhile
		cout << endl;
		column = 0;
	}//end else
	
	++counter;
}//end while

return 0; // indicate that program ended successfully
} // end of function main
