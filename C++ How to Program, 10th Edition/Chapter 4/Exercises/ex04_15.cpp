/* ************************************************************************************

Filename: ex04_15.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.15 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

	For Exercises 4.13––4.16, perform each of these steps:
		a) Read the problem statement.
		b) Formulate the algorithm using pseudocode and top-down, stepwise refinement.
		c) Write a C++ program.
		d) Test, debug and execute the C++ program.

Description:

4.15 (Employee Leave Calculator) A large company allocates its employees leave based on
the number of hours worked in a week. Each employee gets two hours of leave for each week 
worked plus 10% of hours worked. Develop a C++ program that uses a while statement to 
input each employee’s hours worked for last week and calculates and displays the number 
of hours of leave accrued by that employee. Process each employee’s figures at a time.

  ******   Example Output   *********************************************************
   |                                                                               |
   | Enter number of hours worked (-1 to end): 10.5                                |
   | Accrued leave: 3.05 hours                                                     |
   | Enter number of hours worked (-1 to end): 45                                  |
   | Accrued leave: 6.50 hours                                                     |
   | Enter number of hours worked (-1 to end): 30                                  | 
   | Accrued leave: 5.00 hours                                                     |
   | Enter number of hours worked (-1 to end): -1                                  |
   |                                                                               |
  ***********************************************************************************

*****************************      Pseudocode      ************************************

Initialize hours worked to 0

while user has not yet enter the sentinel
	prompt user to enter number of hours worked by the employee
	input hours worked
	
	if worked hours does not equal -1(sentinel)
		print "Accrued leave: "
		print accrued leave
		
*****************************    End Pseudocode    ************************************
************************************************************************************* */

#include <iostream> // perform input and output
#include <iomanip> // parameterized stream manipulators

using namespace std; // use names from the std namespace

//main function begins program
int main(){
//declare and initialize variables
double hoursWorked = 0;
const int sentinel = -1;

	while(hoursWorked != sentinel){
		cout << "Enter number of hours worked (-1 to end): ";
		cin >> hoursWorked;
	
		if(hoursWorked != sentinel){
			cout << setprecision(2) << fixed;
			cout << "Accrued leave: " << 2.00 + (hoursWorked * 0.10);
			cout << " hours" << endl;
		}//end if
	}//end while
}//end main funtion

