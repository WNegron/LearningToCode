/* ************************************************************************************

Filename: ex04_19.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.19 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.19 (Find the Two Largest Numbers) Using an approach similar to that in Exercise 4.17, 
find the two largest values among the 10 numbers. 
[Note: You must input each number only once.]

************************************************************************************ */


#include<iostream> //perform input and output

using namespace std; //uses names from the std namespace

//main function begins program
int main(){

//declare and initialize variables
int counter = 0;
int number = 0;
int largest = 0;
int largest2 = 0;

//loop while counter is less than 10
while (counter < 10){
	//prompt user for number of units sold
	cout << "Enter a number: ";
	cin >> number;//input units sold
	
	//find the largest number and 2nd largest
	if(number > largest){
		largest2 = largest;
		largest = number;
	}//end if
	else if(number > largest2){
		largest2 = number;
	}//end else if
		
	//increment counter	
	++counter;
}//end while

cout << "Largest number: " << largest << endl;
cout << "2nd Largest number: " << largest2 << endl;

return 0;//indicates program ended successfully
}//end main function
