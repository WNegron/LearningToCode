/* ************************************************************************************

Filename: ex02_32.cpp
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 2.32 using only the tools and methods taught up to Chapter 2.
This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

2.32 (Maximal Heart Rate Calculator) Doctors suggest individuals exercise to stay healthy
and that they monitor their heart rate while exercising to ensure that they are not doing 
too much or too little. The Maximal Heart rate (MHR) is a guideline that is used to
indicate when an individual should ease off a little. 

The equation that is commonly used is:
	220 − age = Maximum Heart Rate (MHR)
	
This formula was empirically derived from young athletes. A broader age distribution in a 
study by Tanaka in 2001 showed that this formula often underestimated the MHR in older 
subjects. Hence the formula 
	MHR = 208 − 0.7(age) was suggested. 

Gellish in 2007 showed good correlation to stress-testing results using 
	MHR = 207 − 0.7(age) 

and a later study by Nes et al in 2012 suggested that the equation be 
	MHR = 211 − 0.64(age).
	
Write a program that requests the user to enter their age and then displays the suggested 
MHR values using each of these equations. As a conclusion, suggest the range of values 
that the user should consider by displaying the smallest and largest MHR values 
calculated. Test your pro- gram by entering several ages that are a few decades apart. 
(Take a look at “Age-predicted maximal heart rate in healthy subjects: The HUNT Fitness 
Study” published in the Scandinavian Journal of Medicine and Science in Sports for a 
discussion about these MHR equations).

************************************************************************************ */

#include <iostream>//enables program to perform input and output

using namespace std;//program uses names from the std namespace

//main function begins program
//main function parameter store information from the program is called
//argc an integer; how many arguments were entered
//argv is an arrauy pointer; stores the name of the program
int main(int argc, const char * argv[]){

//declaration and initializing variables
int mhr = 0;
int tanakaMHR = 0;
int gellishMHR = 0;
int nesMHR = 0;
int age = 0;
int lowestMHR = 0;
int highestMHR = 0;

//prompt user for age
cout << "Please enter your age: ";
cin >> age;// read integer from user into age

mhr = 220 - age;

tanakaMHR = 208 - (0.7 * age);

gellishMHR = 207 - (0.7 * age);

nesMHR = 211 - (0.64 * age);

//find the lowest MHR
// sotres mhr value in lowestMHR and then compares the variable to the other MHR
//if there is a value lower than mhr it will store that value in lowestMHR and then 
//it will continue comparing against the remaining MHR 
lowestMHR = mhr;

if(tanakaMHR < lowestMHR)
	lowestMHR = tanakaMHR;

if(gellishMHR < lowestMHR)
	lowestMHR = gellishMHR;
	
if(nesMHR < lowestMHR)
	lowestMHR = nesMHR;
	
//find the highest MHR
// sotres mhr value in highestMHR and then compares the variable to the other MHR
//if there is a value higher than mhr it will store that value in highestMHR and then 
//it will continue comparing against the remaining MHR 
highestMHR = mhr; 

if(tanakaMHR > highestMHR)
	highestMHR = tanakaMHR;

if(gellishMHR > highestMHR)
	highestMHR = gellishMHR;
	
if(nesMHR > highestMHR)
	highestMHR = nesMHR;
	
//print out all the MHR as well as the lowest and the highest
cout << "MHR: "         << mhr        << endl;
cout << "Tanaka MHR: "  << tanakaMHR  << endl;
cout << "Gellish MHR: " << gellishMHR << endl;
cout << "Nes MHR: "     << nesMHR     << endl;

cout << "Your lowest MHR: "  << lowestMHR  << endl;
cout << "Your highest MHR: " << highestMHR << endl;
	

return 0;//indicates program ended successfully
}//end main function
