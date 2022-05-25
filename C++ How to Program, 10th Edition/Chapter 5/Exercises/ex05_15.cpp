/* ************************************************************************************

Filename: ex05_15.cpp
    Date: 2022-05-24
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.15 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.15 (Triangle-Printing Program) Write an application that displays the following patterns 
	separately, one below the other. Use for loops to generate the patterns. 
	
	All asterisks (*) should be printed by a single statement of the form cout << '*'; which causes
	the asterisks to print side by side. 
	
	A statement of the form cout << '\n'; can be used to move to the next line.
	
	A statement of the form cout << ' '; can be used to display a space for the last two patterns. 
	
	There should be no other output statements in the program. 
	
	[Hint: The last two patterns require that each line begin with an appropriate number of blank 
	spaces.]

--------- Example Output --------------------------------------------------------------

(a) 	        (b) 		      (c)		        (d)
* 			     ********** 	  **********             *
** 			     *********	     *********            **
*** 		     ********	        ********           ***
**** 		     ******* 	         ******* 	        ****
*****		     ******		          ******         *****
****** 		   ***** 			         ***** 	      ******
******* 	   **** 			          ****       *******
******** 	   ***			 	           ***      ********
********* 	 **					            **     *********
**********	 *					             *    **********

---------------------------------------------------------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

/********************* for loop to print '*' pattern (a) ****************************/
//for loop to print '*' pattern (a)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 0; j <= i; j++){
		cout << "*";//print asterisk
	}//end of nested for loop
	cout << endl;//print new line
}//end of for loop pattern (a)

/********************* for loop to print '*' pattern (b) ****************************/
//for loop to print '*' pattern (b)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 10; j > i; j--){
		cout << "*";//print asterisk
	}//end of nested for loop
	cout << endl;//print newline
}//end of for loop pattern (b)

/********************* for loop to print '*' pattern (c) ****************************/
//for loop to print '*' pattern (c)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 0; j < i; j++){//print blank spaces after the first line
		cout << " ";
	}//end of nested for loop
	
	//nested for loop
	for(int k = 10; k > i; k--){
		cout << "*";//print asterisk
	}//end of nested for loop
	
	cout << endl;//print newline
}//end of for loop pattern (c)

/********************* for loop to print '*' pattern (d) ****************************/
//for loop to print '*' pattern (d)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 9; j > i; j--){
		cout << " ";//print blank spaces
	}//end of nested for loop
	
	//nested for loop
	for(int k = 0; k <= i; k++){
		cout << "*";//print asterisk
	}//nested for loop
	
	cout << endl;//print newline
}//end of for loop pattern (d)

return 0; // indicate that program ended successfully
} // end of function main
