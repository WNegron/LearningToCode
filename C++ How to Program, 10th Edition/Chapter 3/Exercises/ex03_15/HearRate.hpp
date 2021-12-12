/* ************************************************************************************

Filename: HeartRate.hpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.15 using only the tools and methods taught up to Chapter 3.

Description:

3.15 (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor
to see that your heart rate stays within a safe range suggested by your trainers and
doctors. According to the American Heart Association (AHA)
(http://bit.ly/AHATargetHeartRates), the formula for calculating your maximum heart rate
in beats per minute is 220 minus your age in years. Your target heart rate is a range
that’s 50–85% of your maximum heart rate. [Note: These formulas are estimates provided by
the AHA. Maximum and target heart rates may vary based on the health, fitness and gender
of the individual. Always consult a physician or qualified health-care professional before
beginning or modifying an exercise program.]

Create a class called HeartRates. The class attributes should include the person’s
first name, last name and date of birth (consisting of separate attributes for the month,
day and year of birth). Your class should have a constructor that receives this data as
parameters. For each attribute provide set and get functions. The class also should
include a member function that calculates and returns the person’s age (in years), a
member function that calculates and returns the person’s maximum heart rate and a member
function that calculates and returns the person’s target heart rate.

Write a program that prompts for the person’s information, instantiates an object of class
HeartRates and prints the information from that object—including the person’s first name,
last name and date of birth—then calculates and prints the person’s age in (years),
maximum heart rate and target-heart-rate range. 

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type

class HeartRate{// class definition

private:

/******************           Data Members           ***********************/
int month;
int day;
int year;
std::string firstName;
std::string lastName;
	
public:

/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
	explicit HeartRate(std::string first,std::string last, int monthNumber, int dayNumber,
	int yearNumber):firstName(first),lastName(last),month(monthNumber),day(dayNumber),
	year(yearNumber){
	}//end HeartRate constructor function

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members

	// function that sets the month
	void setMonth(int monthNumber){
 		if(monthNumber >= 1 && monthNumber <= 12){//validates month is between 1 to 12
 			month = monthNumber;//sets data member from parameter
		}//end if
		else{
			month = 1;
		}//end else
 	}//end setMonth
 	
 	// function that sets the day
 	void setDay(int dayNumber){
 		if(dayNumber >= 1 && dayNumber <= 31){//validates day is between 1 to 31
 			day = dayNumber;//sets data member from parameter
 		}//end if
 		else{//if value is not in range prints out error message
 			std::cerr << "Day is out of range." << std::endl;
 		}//end else
 	}//end setDay
 	
 	// function that sets the year
 	void setYear(int yearNumber){
 		year = yearNumber;//sets data member from parameter
 	}//end setYear
 	
 	// function that sets the first name
		void setFirstName(std::string first){
			firstName = first;
		}// end setFirstName
		
		// function that sets the last name
		void setLastName(std::string last){
			lastName = last;
		}// end setLastName
 	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
	int getMonth(){
		return month;
	}//end getMonth
	
	int getDay(){
		return day;
	}//end getDay
	
	int getYear(){
		return year;
	}//end getYear
	
	// function that returns the name
	std::string getFirstName(){
		return firstName;
	}// end getFirstName
		
	// function that returns the name
	std::string getLastName(){
		return lastName;
	}// end getLastName
	

/**************************  Other Member Functions *******************************/
	void displayDate(){
		std::cout << month << "/" << day << "/" << year << std::endl;
	}//end displayDate
	
	/*int maxHeartRate(){
		return 220 - calculateAge()
	}//end maxHeartRate
	
	int calculateAge(){
	}//end calculateAge */
	
};// end HeartRate class

