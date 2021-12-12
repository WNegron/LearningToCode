/* ************************************************************************************

Filename: ex03_15.cpp
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
#include "HeartRate.hpp" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaration and initializing variables
int age = 0;
int maximum = 0;
string first;
string last;
int month;
int day;
int year;

cout << "Enter your First Name: ";
getline(cin,first);

cout << "Enter your Last Name: ";
getline(cin,last);

cout << "Enter your date of birth (mm dd yyyy): ";
cin >> month >> day >> year;

HeartRate myHeartRate(first,last,month,day,year);

age = 2021 - myHeartRate.getYear();
maximum = 220 - age;
//target = maximum;

cout << "Full Name: " << myHeartRate.getLastName() << ", " << myHeartRate.getFirstName();
cout << "\nDate of Birth: ";
myHeartRate.displayDate();
cout << "Age: " << age;
cout << "\nMax Heart Rate: " << maximum;
cout << "\nTarget Max 85%: " << maximum * 0.85;
cout << "\nTarget Min 50%: " << maximum * 0.50;

cout << endl << endl;

return 0; // indicate that program ended successfully
} // end of function main
