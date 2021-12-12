/* ************************************************************************************

		Filename: ex02_17.cpp
			  Date: 2021-12-09
		  Author: Warren Negron
		   Email: warren.negron@gmail.com

Note: My answer to exercise 2.17 using only the tools and methods taught up to Chapter 2


Description:

2.17 (Printing) Write a program that prints the characters 1 to 4 on the same line
with each pair of adjacent characters separated by one space i.e. 12 34. 
Do this several ways:
a) Using one statement with two stream insertion operators.
b) Using one statement with four stream insertion operator.
c) Using two statements with one stream insertion operator each. 

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
int main(){
// a) Using one statement with two stream insertion operators.
cout << "12 " << "34" << endl;

// b) Using one statement with four stream insertion operator.
cout << "1" << "2 " << "3" << "4" << endl;

// c) Using two statements with one stream insertion operator each.
cout << "12 ";
cout << "34" << endl;

return 0; // indicate that program ended successfully
} // end of function main
