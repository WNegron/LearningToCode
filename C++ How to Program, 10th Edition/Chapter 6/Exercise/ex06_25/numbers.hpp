/***************************************************************************************************

File Name: numbers.hpp
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

#include <ctime>//enable program to use time funcitons

//function to calculate number of minutes
//using a function template
template <typename T>
T numberOfMinutes (T days, T hours, T minutes){
    T daysInMinutes = ((days * 24) * 60);//changing days into minutes
    T hoursInMinutes = (hours * 60);//changing hours into minutes
    /*time_t currentTime = time(0);
    tm *localTime = localtime(&currentTime);
    unsigned int currentMonth = localTime -> tm_mon;
    unsigned int currentDay = localTime -> tm_mday;
    unsigned int currentHour = localTime -> tm_hour;
    unsigned int currentMinute = localTime -> tm_min;*/


    return daysInMinutes + hoursInMinutes + minutes;

    //return totalMinutes;
}//end of function numberOfMinutes
