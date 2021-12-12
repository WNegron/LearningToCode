/* ************************************************************************************

Filename: ex03_16.cpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.16 using only the tools and methods taught up to Chapter 3.

Description:

3.16 (Computerization of Health Records) A health-care issue that has been in the news
lately is the computerization of health records. This possibility is being approached
cautiously because of sensitive privacy and security concerns, among others. [We address
such concerns in later exercises.] 

Computerizing health records could make it easier for patients to share their health
profiles and histories among their various health-care professionals. This could improve
the quality of health care, help avoid drug conflicts and erroneous drug prescriptions,
reduce costs and, in emergencies, could save lives. 

In this exercise, you’ll design a “starter” HealthProfile class for a person. The class
attributes should include the person’s first name, last name, gender, date of birth 
(consisting of separate attributes for the month, day and year of birth),
height (in inches) and weight (in pounds).

Your class should have a constructor that receives this data. For each attribute, provide
set and get functions. The class also should include member functions that calculate and 
return the user’s age in years, maximum heart rate and target-heart-rate range
(see Exercise 3.15), and body mass index (BMI; see Exercise 2.30).

Write a program that prompts for the person’s information, instantiates an object of class
HealthProfile for that person and prints the information from that object—including the
person’s first name, last name, gender, date of birth, height and weight—then calculates
and prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range.

It should also display the BMI values chart from Exercise 2.30. 

BMI VALUES
Underweight: less than 18.5 
Normal: between 18.5 and 24.9 
Overweight: between 25 and 29.9 
Obese: 30 or greater

 
                     weightInPounds x 703
BMI =  ---------------------------------------------  
                heightInInches × heightInInches
                
or

                     weightInKilograms
BMI = ----------------------------------------------
				      heightInMeters × heightInMeters

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type
#include "HealthProfile.h" //enable program to perform HeartProfile functions

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaration and initializing variables
int age = 0;
int maximum = 0;
int month = 0;
int day = 0;
int year = 0;
string first;
string last;
char gender;
int height;
int weight;

cout << "Enter your First Name: ";
getline(cin,first);

cout << "Enter your Last Name: ";
getline(cin,last);

cout << "Enter your date of birth (mm dd yyyy): ";
cin >> month >> day >> year;

cout << "Enter your gender (M = male, F = female): ";
cin >> gender;

cout << "Enter your height in inches: ";
cin >> height;

cout << "Enter your weight in pounds: ";
cin >> weight;

HealthProfile myProfile(first,last,gender,month,day,year,height,weight);

cout << endl;

myProfile.displayProfile();

cout << endl << endl;

return 0; // indicate that program ended successfully
} // end of function main
