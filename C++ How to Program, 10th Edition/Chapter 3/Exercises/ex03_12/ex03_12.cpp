/* ************************************************************************************

Filename: ex03_12.cpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.12 using only the tools and methods thought in Chapter 2.

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
#include "Date.h" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaration and initializing variables
int month = 0;
int day = 0;
int year = 0;

cout << "Enter a date (mm dd yyyy): ";
cin >> month >> day >> year;

Date myDate(month,day,year);//create Date object
myDate.displayDate(); 

return 0; // indicate that program ended successfully
} // end of function main
