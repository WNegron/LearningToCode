/* ************************************************************************************

Filename: ex04_18.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.18 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.18 (Tabular Output) Write a C++ program that uses a while statement and the tab escape 
sequence \t to print the following table of values:

  ****** Example Output *******************************************************
  	
  		N    5*N    10*N    15*N 
  		1     5      10      15
      2    10      20      30
      3    15      30      45 
      ...
      10   50     100     150 
      11   55     110     165
      12   60     120     180
        
  *****************************************************************************

************************************************************************************ */

#include <iostream> //program performs input and output

using namespace std;//use names from the std namespace

//main function begins program
int main(){

//declare and initialize variables
int counter = 1;

cout << "N\t 5*N\t 10*N\t 15*N" << endl;

while (counter <= 12){
    //tabular output
	cout << counter << "\t " << 5*counter << "\t " << 10*counter << "\t " << 15* counter
		 << endl;
		 
	//increment counter
	++counter;
}//end while
return 0;//indicates program ended successfully
}//end main function
