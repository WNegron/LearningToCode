/* ************************************************************************************

Filename: ex02_20.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.20 using only the tools and methods thought in Chapter 2.

Description:

2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads in the
radius of a circle as an integer and prints the circle’s diameter, circumference and area.
Use the constant value 3.14159 for π. Do all calculations in output statements. 
[Note: In this chapter, we’ve discussed only integer constants and variables.
In Chapter 4 we discuss floating-point numbers, i.e., values that have decimal points.]


************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip>
using namespace std; //program uses names from the std namespace

// function main begins program
int main(){

const float pi = 3.14159;
float radius = 0;

//prompt user for radius value
cout << "Enter radius: ";
cin >> radius;

//Diameter = 2 * r
cout << "The diameter is " << 2 * radius << endl;
//Circumference = 2 * pi * r
cout << "The circumference is " << 2 * pi * radius << endl;
//Area = pi * r^2
cout << "The area is " << pi * (radius * radius) << endl;

return 0; // indicate that program ended successfully
} // end of function main
