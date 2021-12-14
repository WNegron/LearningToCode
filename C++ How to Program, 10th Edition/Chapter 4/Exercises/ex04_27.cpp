/* ************************************************************************************

Filename: ex04_27.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.27 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.27 (Palindromes) A palindrome is a number or a text phrase that reads the same backward 
as forward. For example, each of the following five-digit integers is a palindrome: 12321, 
55555, 45554 and 11611. 

Write a program that reads in a five-digit integer and determines whether it’s a 
palindrome. [Hint: Use the division and remainder operators to separate the number into 
its individual digits.]

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

//declaring and initializing variables
int number = 0, digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0;

//prompt user for an integer
cout << "Enter an integer(4 digit): ";
cin >> number;

digit0 = number / 10000;
number%=10000;

digit1 = number / 1000;
number%=1000;

digit2 = number / 100;
number%=100;

digit3 = number / 10;

digit4 = number % 10;

if(digit0 == digit4 && digit1 == digit3){
	cout << "Number is a palindrome!" << endl;	
}//end if
else{
	cout << "Number is not a palindrome!" << endl;
}// end else

cout << digit4 << " " << digit3 << " " << digit2 << " " 
	 << digit1 << " " << digit0 << endl;

return 0; // indicate that program ended successfully
} // end of function main
