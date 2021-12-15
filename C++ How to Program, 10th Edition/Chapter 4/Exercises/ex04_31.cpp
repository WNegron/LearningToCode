/* ************************************************************************************

Filename: ex04_31.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.31 using only the tools and methods taught up to Chapter 4.

Formulas for this exercise
	Volumen = (4*pi*r^3)/3
	Surface Area = 4*pi*r^2
	Circumference = 2*pi*r

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
4.31 (Calculating a Sphere’s Circumference, Area and Volume) Write a program that reads the radius 
of a sphere (as a double value) and computes the circumference, area and volume of the spheres. 
Use the value 3.14159 for π.

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
const double pi = 3.14159;

double radius = 0;
double volumen = 0;
double surfaceArea = 0;
double circumference = 0;

cout << "Program calculates the circumference, are, and volumen of a sphere." << endl;

//prompt user for the radius
cout << "Enter radius of a sphere: ";
cin >> radius;//input radius

//calculate Volumen
volumen = (4 * pi *(radius * radius * radius)) / 3;

//output volumen value
cout << "Volumen: " << volumen << endl;

//calculate Circumference
circumference = 2 * pi * radius;

//output circumference value
cout << "Circumference: " << circumference << endl;

//calculate Surface Area
surfaceArea = 4 * pi * (radius * radius);

//output surfaceArea
cout << "Surface Area: " << surfaceArea << endl;

return 0; // indicate that program ended successfully
} // end of function main
