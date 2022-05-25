/* ************************************************************************************

Filename: ex05_16.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.16 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.16 (Bar-Chart Printing Program) One interesting application of computers is to display graphs
	and bar charts. Write an application that reads five numbers between 1 and 9.
	
	For each number that’s read, your program should display a double row of the same number 
	repeated as many times as the number read.
	
	For example, if your program reads the number 7, it should display 7777777 followed by 7777777 
	on the next line. 
	
	Display the bars of numbers after you read all five numbers.

--------- Example Output --------------------------------------------------------------
7777777
7777777
---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------
prompt user for 5 integer between 1 and 9
read integers

for loop until iCounter greater than 1
	for loop until jCounter greater than the integer
		print integer
	
	print new line
-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

//function declaration and implementation
void barChartPrinting(int number){
//begin for loop
for(int i = 0; i <= 1; i++){
	for(int j = 0; j < number; j++){
		cout << number;//print number
		}//end of for loop
	cout << endl;//print new line
	}//end of for loop
}//end of barChart function

// main function begins program
int main(){

// declaration and initializing variables
int number0 = 0;
int number1 = 0;
int number2 = 0;
int number3 = 0;
int number4 = 0;
int counter = 0;

//prompt user for 5 integer between 1 and 9
cout << "Enter 5 digits between 1 and 9: ";
cin >> number0 >> number1 >> number2 >> number3 >> number4;

barChartPrinting(number0);
barChartPrinting(number1);
barChartPrinting(number2);
barChartPrinting(number3);
barChartPrinting(number4);

return 0; // indicate that program ended successfully
} // end of function main
