/* ************************************************************************************

Filename: ex04_30.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.30 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.30 (Fibonacci Sequence) Write a program that prints the Fibonacci sequence 0, 1, 1, 2, 3, 5, 8, 
etc. Use 0 and 1 as your seed values. Each subsequent number in the Fibonacci sequence is the sum 
of the previous two numbers. Your while loop should not terminate (i.e., you should create an 
infinite loop). To do this, simply use the keyword true as the expression for the while statement. 
What happens when you run this program?

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

/*int fibonacci(int sumNumber,int previousNumber){
	return 
}//end fibonacci*/

// main function begins program
int main(){

// declaration and initializing variables
int number = 0;
int number1 = 1;
int sum = 1;

//prints the first 2 numbers in the fibonacci sequence
cout << number << ", " << number1 << ", ";

//infinite loop; press control + z (on Mac or Linux) or ctrl + z (on Windows)
while(true){
	sum = number + number1;// add the previous numbers to find the next number in the sequence
	cout << sum << ", ";//output the next number
	number = number1;//keep the previous number
	number1 = sum;//keep the current number
}//end while

return 0; // indicate that program ended successfully
} // end of function main

