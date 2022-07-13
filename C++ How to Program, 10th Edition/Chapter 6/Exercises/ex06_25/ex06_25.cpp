/***************************************************************************************************

File Name: ex06_25.cpp
     Date: 2022-07-10
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.25 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.25 (Calculating Number of Minutes) Write a function that takes the time as three integer 
arguments, days, hours, and minutes, and returns the number of minutes since the start of the current 
month, i.e., days=0; hours=0 and months=0; Use this function to calculate the amount of time in 
minutes between two times, both of which are within the same calendar month.

***************************************************************************************************/
#include <iostream>//enable program to perform input/output
//#include <ctime>//enable program to perform time functions
#include "numbers.hpp"//enable program to use function numberOfMinutes

using namespace std;//program uses names from namespace std

int main(){
    //variable declaration
    unsigned int days = 0;
    unsigned int hours = 0;
    unsigned int minutes = 0;
    unsigned int totalMinutes = 0;

    
    cout << "Enter days: ";
    cin >> days;

    cout << "Enter hours (0 - 23): ";
    cin >> hours;

    cout << "Enter minutes (0 - 59): ";
    cin >> minutes;

    totalMinutes = numberOfMinutes(days,hours,minutes);

    cout << "\nThe total number of minutes is: " << totalMinutes << endl;

    cout << "Enter days: ";
    cin >> days;

    cout << "Enter hours (0 - 23): ";
    cin >> hours;

    cout << "Enter minutes (0 - 59): ";
    cin >> minutes;

    totalMinutes -= numberOfMinutes(days,hours,minutes);

    cout << "\nThe total number of minutes is: " << totalMinutes << endl;




    /* using time functions
    time_t currentTime = time(0);
    char* ct = ctime(&currentTime);
    tm *localTime = localtime(&currentTime);

    cout << "Current date and time: " << ct << endl;

    cout << "Current year: " << 1900 + localTime -> tm_year << endl;
    cout << "Current month: " << localTime -> tm_mon << endl;
    cout << "Current day: " << localTime -> tm_mday << endl;
    cout << "Current hour: " << localTime -> tm_hour << endl;
    cout << "Current minute: " << localTime -> tm_min << endl;*/
    
    return 0;
}//end function main