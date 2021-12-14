/* ************************************************************************************

Filename: Fundraising.h
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

#include <iostream> //perform input and output
#include <iomanip>// parameterized stream manipulators

class Fundraising{// class definition

private:
/******************           Data Members           ***********************/
// declare and initialize variables
int laps;
double sponsorshipRate;
double studentContribution;
double totalFundsRaise;

public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
//C++11 List Initializer
// constructor initializes data member name with parameter accountName
explicit Fundraising(): laps{0} { // member initializer
// empty body 
}//end Fundraising constructor

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
void setLaps(int lapsAmount){ 
	laps = lapsAmount;
}//end setLaps

void setSponsorshipRate(double rate){
	sponsorshipRate = rate;
}//end setSponsorshipRate

void setStudentContribution(double contribution){
	studentContribution = contribution;
}//end setStudentContribution

void setTotalFundsRaise(double total){
	totalFundsRaise = total;
}//end setTotalFundsRaise
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
int getLaps(){
	return laps;
}//end getLaps

double getSponsorshipRate(){
	return sponsorshipRate;
}//end getSponsorshipRate

double getStudentContribution(){
	return studentContribution;
}//end getStudentContribution

double getTotalFundsRaise(){
	return totalFundsRaise;
}//end getTotalFundsRaise
	

/**************************  Other Member Functions *******************************/
void runFundraising(){
	double tempNum = 0;//temporary number
	int tempLaps = 0;
	
	
	// prompt user for laps run by student
	std::cout << "Enter laps completed (-1 to end): ";
	std::cin >> tempNum; // inputs laps
	
	setLaps(tempNum);
	
	//validate laps
	if(getLaps() != -1){
		//prompt user for sponsorship rate
		std::cout << "Enter sponsorship rate: ";
		std::cin >> tempNum;//input sponsorship rate
		
		setSponsorshipRate(tempNum);
		
		//validate if laps are over 40
		if(getLaps() > 40){
		
			setStudentContribution((laps * sponsorshipRate) + ((laps - 40) * 
			(sponsorshipRate * 0.50)));
			 
			displayContribution();
		
		}//end if
		else {//if laps are 40 or less
			setStudentContribution(laps * sponsorshipRate);
			
			displayContribution();
		}//end else
		
		setTotalFundsRaise(getTotalFundsRaise() + getStudentContribution());
	}//end if
}//end runFundraising

void displayContribution(){

std::cout << std::setprecision(2) //floating-point values should be output with two 
	// digits of precision to the right of the decimal point (e.g., 92.37).
	 << std::fixed; //indicates that floating-point values should be output in fixed-point 
	 //format, as opposed to scientific notation.		
std::cout << "Student contribution: " << getStudentContribution() << std::endl;
}//end displayContribution

void displayTotalFunds(){
std::cout << std::setprecision(2)//two digits of precision after the decimal point
	 << std::fixed; 	//output in fixed-point format,instead of scientific notation
std::cout <<"Total funds raise: " << getTotalFundsRaise() << std::endl;
}//end displayTotalFunds
};// end ClassName class
