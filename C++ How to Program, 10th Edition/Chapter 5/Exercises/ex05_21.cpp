/* ************************************************************************************

Filename: ex05_21.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.21 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	5.21 (Modified Triangle-Printing Program) Modify Exercise 5.15 to combine your code from the 
	four separate triangles of asterisks such that all four patterns print side by side. 
	
	[Hint: Make clever use of nested for loops.]

--------- Example Output --------------------------------------------------------------

(a)       (b)          (c)          (d)
*          **********  **********           *
**         *********    *********          **
***        ********      ********         ***
****       *******        *******        ****
*****      ******          ******       *****
******     *****            *****      ******
*******    ****              ****     *******
********   ***                ***    ********
*********  **                  **   *********
********** *                    *  **********

---------------------------------------------------------------------------------------

-----------------------------      Exercise 5.15 Code      ------------------------------------

********************* for loop to print '*' pattern (a) ****************************
//for loop to print '*' pattern (a)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 0; j <= i; j++){
		cout << "*";//print asterisk
	}//end of nested for loop
	cout << endl;//print new line
}//end of for loop pattern (a)

********************* for loop to print '*' pattern (b) ****************************
//for loop to print '*' pattern (b)
for(int i = 0; i < 10; i++){
	//nested for loop
	for(int j = 10; j > i; j--){
		cout << "*";//print asterisk
	}//end of nested for loop
	cout << endl;//print newline
}//end of for loop pattern (b)

********************* for loop to print '*' pattern (c) ****************************
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

********************* for loop to print '*' pattern (d) ****************************
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

-----------------------------    End Exercise 5.15 Code    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> //enables parameterized stream manipulators

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

//using stream manipulators to tabulate the output
cout << "(a)" << setw(10) << "(b)" << setw(13) << "(c)" << setw(12) << "(d)" << endl;

// for loop to print '*' patterns side by side
for(int i = 0; i < 10; i++){
	//nested for loop to print '*' pattern (a)
	for(int a = 0; a <= i; a++){
		cout << "*";//print asterisk
	}//end of nested for loop
	
	//nested for loop to print spaces between (a) and (b)
	for(int k = 10; k > i; k--){
		cout << " ";//print blank space
	}//end of nested for 
	
	//for loop to print '*' pattern (b)
	for(int b = 10; b > i; b--){
		cout << "*";//print asterisk
	}//end of nested for loop
	
	//nested for loop to print spaces between (b) and (c)
	for(int k = 0; k <= i; k++){
		cout << " ";//print blank space
		cout << " ";//print blank space
	}//end of nested for
	
	//for loop to print '*' pattern (c)
	for(int c = 10; c > i; c--){
		cout << "*";//print asterisk
	}//end of nested for loop
	
	//nested for loop to print spaces between (c) and (d)
	for(int k = 10; k > i; k--){
		cout << " ";//print blank space
	}//end of nested for 
	
	//for loop to print '*' pattern (d)
	for(int d = 0; d <= i; d++){
		cout << "*";//print asterisk
	}//nested for loop
	
	cout << endl;//print newline
}//end of for loop

return 0; // indicate that program ended successfully
} // end of function main
