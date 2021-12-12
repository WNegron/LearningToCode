/* ************************************************************************************

Filename: ex02_23.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.23 using only the tools and methods thought in Chapter 2.

Description:

2.23 (Largest and Smallest Integers) Write a program that reads in five integers and
determines and prints the largest and the smallest integers in the group. Use only the 
programming techniques you learned in this chapter.

************************************************************************************ */ 

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// variables declaration, will store numbers enter by user
int number1 = 0;
int number2 = 0;
int number3 = 0;
int number4 = 0;
int number5 = 0;
int smallest = 0;
int largest = 0;

// prompt user for input
 cout << "Largest and Smallest Integer \n";
 cout << "Input three different integers: ";
 cin >> number1 >> number2 >> number3 >> number4 >> number5;
 
smallest = number1;

if(number2 < smallest)
	smallest = number2;
if(number3 < smallest)
	smallest = number3;
if(number4 < smallest)
	smallest = number4;
if(number5 < smallest)
	smallest = number5;
 
//printout smallest integer
cout << "Smallest integer is: " << smallest << endl;
	
largest = number1;

if(number2 > largest)
	largest = number2;
if(number3 > largest)
	largest = number3;
if(number4 > largest)
	largest = number4;
if(number5 > largest)
	largest = number5;
  
//printout largest integer	
cout << "Largest integer is: " << largest << endl;

return 0; // indicate that program ended successfully
} // end of function main
