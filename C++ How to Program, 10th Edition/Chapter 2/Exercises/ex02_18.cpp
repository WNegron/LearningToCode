/* ************************************************************************************

Filename: ex02_18.cpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.18 using only the tools and methods taught up to Chapter 2

Description:

 2.18 (Comparing Integers) Write a program that asks the user to enter two integers,
obtains the numbers from the user, then prints the larger number followed by the words
"is larger." If the numbers are equal, print the message "These numbers are equal." 

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(){

int number1 = 0; // first integer to compare (initialized to 0) 
int number2 = 0; // second integer to compare (initialized to 0)

cout << "Enter two integers to compare: "; // prompt user for data 
cin >> number1 >> number2; // read two integers from user

// comparing integers
if (number1 == number2) {
	cout << "These numbers are equals" << endl;}
else if(number1 < number2) {
	cout << number2 << " is larger" << endl; }
else {
	cout << number1 << " is larger" << endl; }

return 0; // indicate that program ended successfully
} // end of function main
