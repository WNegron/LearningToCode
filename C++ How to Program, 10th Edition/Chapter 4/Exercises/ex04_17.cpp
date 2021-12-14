/* ************************************************************************************

Filename: ex04_17.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.17 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.17 (Find the Largest) The process of finding the largest number (i.e., the maximum of a 
group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest inputs the number of units sold by each 
salesperson. The salesperson who sells the most units wins the contest. 

Write a C++ program that uses a while statement to determine and print the largest of 
10 numbers input by the user. Your program should use three variables, as follows:

	a) counter—A counter to count to 10 (i.e., to keep track of how many numbers have been
	 input and to determine when all 10 numbers have been processed).
	
	b) number—The current number input to the program. 
	
	c) largest—The largest number found so far.

************************************************************************************ */

#include<iostream> //perform input and output

using namespace std; //uses names from the std namespace

//main function begins program
int main(){

//declare and initialize variables
int counter = 0;
int number = 0;
int largest = 0;

//loop while counter is less than 10
while (counter < 10){
	//prompt user for number of units sold
	cout << "Enter units sold: ";
	cin >> number;//input units sold
	
	//find the largest number
	if(number > largest)
		largest = number;
		
	//increment counter	
	++counter;
}//end while

cout << "Largest amount of unit solds: " << largest << endl;

return 0;//indicates program ended successfully
}//end main function
