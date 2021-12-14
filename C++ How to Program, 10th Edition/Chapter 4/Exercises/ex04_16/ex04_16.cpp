/* ************************************************************************************

Filename: ex04_16.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.16 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

	For Exercises 4.13––4.16, perform each of these steps:
		a) Read the problem statement.
		b) Formulate the algorithm using pseudocode and top-down, stepwise refinement.
		c) Write a C++ program.
		d) Test, debug and execute the C++ program.

Description:

4.16 (Fundraising initiative Calculator) A group of school children have completed a
12-hour endurance challenge fundraiser. For each lap they complete, they are sponsored an
amount of money by generous supporters. For every additional lap over 40 that they 
complete, they are sponsored an additional 50% of the normal lap rate. For example,
a student who runs 42 laps, and who has a sponsorship of USD 10.50 per lap, will 
contribute USD 451.50 towards the fundraising initiative.

Develop a C++ program that uses a while statement to input each student's number of 
completed laps and sponsorship rate and then calculates and displays that student's 
contribution towards the fundraising initiative. Your program should also indicate the 
total amount collected from the fundraising initiative.

  ****** Example Output *******************************************************
  
		Enter laps completed(-1 to end): 10 
		Enter sponsorship rate: 12.50 
		Student contribution is: 125.00
		
		Enter laps completed(-1 to end): 40 
		Enter sponsorship rate: 20.25 
		Student contribution is: 810.00
		
		Enter laps completed(-1 to end): 42 
		Enter sponsorship rate: 10.50 
		Student contribution is: 451.50
		
		Enter laps completed(-1 to end): -1
		
		Total funds raised: 1386.50
  *****************************************************************************
   
*****************************      Pseudocode      ************************************
	Initialize laps to 0
	Initialize sponsorshipRate to 0
	initialize student contribution to 0
	initialize total funds raise to 0

		while user has not enter sentinel value
			prompt user to enter laps completed
			input the laps
	
			if laps is not equal to sentinel
				prompt user to enter sponsorship rate
				input sponsorship rate
		
				if laps over 40
					additional 50% of normal lap rate
					calculate student contribution
				else
					calculate student contribution
					
				print student contribution

	calculate total funds raise
	print "Total funds raise: "
	print total funds raise

*****************************    End Pseudocode    ************************************

************************************************************************************ */

#include "Fundraising.h"

//main function begins program
int main(){
//declare variable
Fundraising myFunds;

// loop until user enters sentinel value
while(myFunds.getLaps() != -1){

	myFunds.runFundraising();
	
}//end while

myFunds.displayTotalFunds();

return 0;// indicates program ended successfully
}//end main function
