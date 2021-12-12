/* ************************************************************************************

Filename: Date.h
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.12 using only the tools and methods thought in Chapter 3.

Description:

3.12 (Date Class) Create a class called Date that includes three pieces of information
as data members—a month (type int), a day (type int) and a year (type int). Your class
should have a constructor with three parameters that uses the parameters to initialize the
three data members. For the purpose of this exercise, assume that the values provided for
the year and day are correct, but ensure that the month value is in the range 1–12; if it
isn’t, set the month to 1. Provide a set and a get function for each data member. Provide
a member function displayDate that displays the month, day and year separated by forward 
slashes (/). Write a test program that demonstrates class Date’s capabilities.

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type


class Date{// class definition

private:

/******************           Data Members           ***********************/
	int month;
	int day;
	int year;

public:

/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the three data members
	Date(int monthNumber, int dayNumber, int yearNumber){
		setMonth(monthNumber);
		setDay(dayNumber);
		setYear(yearNumber);
	}//end Date constructor function

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
 	void setMonth(int monthNumber){
 		if(monthNumber >= 1 && monthNumber <= 12){//validates month is between 1 to 12
 			month = monthNumber;//sets data member from parameter
		}//end if
		else{
			month = 1;
		}//end else
 	}//end setMonth
 	
 	void setDay(int dayNumber){
 		if(dayNumber >= 1 && dayNumber <= 31){//validates day is between 1 to 31
 			day = dayNumber;//sets data member from parameter
 		}//end if
 		else{//if value is not in range prints out error message
 			std::cerr << "Day is out of range." << std::endl;
 		}//end else
 	}//end setDay
 	
 	void setYear(int yearNumber){
 		year = yearNumber;//sets data member from parameter
 	}//end setYear
	
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

/**************************  Other Member Functions *******************************/
/* Provide a member function displayDate that displays the month, day and year separated
by forward slashes (/).*/

	void displayDate(){
		std::cout << month << "/" << day << "/" << year << std::endl;
	}//end displayDate

};// end Date class
