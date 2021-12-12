/* ************************************************************************************

Filename: ex02_31.cpp
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.31 using only the tools and methods taught up to Chapter 2.

Description:

2.31 (Car-Pool Savings Calculator) Research several car-pooling websites. Create an
application that calculates your daily driving cost, so that you can estimate how much
money could be saved by car pooling, which also has other advantages such as reducing
carbon emissions and reducing traffic congestion. The application should input the
following information and display the user’s cost per day of driving to work:

	a) Total miles driven per day.
	b) Cost per gallon of gasoline.
	c) Average miles per gallon.
	d) Parking fees per day.
	e) Tolls per day.

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

/* argc (argument count) is an integer that indicates
how many arguments were entered on the command line when the program was started.

argv (argument vector), is an array of pointers to arrays of character 
objects. The array objects are null-terminated strings, representing the arguments that 
were entered on the command line when the program was started. */

int main(int argc, const char * argv []){

// declaration and initializing variables
int milesPerDay = 0;
int	costPerGallon = 0;
int milesPerGallon = 0;
int parkingFees = 0;
int tollsFees = 0;
int dailyCost = 0;

//prompt user for input
cout << "How many miles did you drove today?: ";
cin >> milesPerDay;//read integer from user into variable

//prompt user for input
cout << "What is the cost of gasoline per gallon?: ";
cin >> costPerGallon;//read integer from user into variable

//prompt user for input
cout << "What is your car average miles per gallon?: ";
cin >> milesPerGallon;//read integer from user into variable

//prompt user for input
cout << "How much did you paid in parking fees today?: ";
cin >> parkingFees;//read integer from user into variable

//prompt user for input
cout << "How much did you paid in tolls in today?: ";
cin >> tollsFees;//read integer from user into variable

// calculate the daily cost of driving; 
//i.e. how much could you save per day by car pooling
dailyCost = ((milesPerDay / milesPerGallon) * costPerGallon) + parkingFees + tollsFees;

//display daily cost of driving; end line
cout << "Your daily driving cost is: $" << dailyCost << endl;

return 0; // indicate that program ended successfully
} // end of function main
