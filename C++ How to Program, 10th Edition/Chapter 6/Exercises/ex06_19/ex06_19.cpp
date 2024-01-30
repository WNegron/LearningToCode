/***************************************************************************************************

File Name: ex06_19.cpp
     Date: 2024-01-28
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
    My answer to exercise 6.19 using only the tools and methods taught up to Chapter 6.

    This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.19 (Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of a 
right triangle when the other two sides are given. The function should take two double arguments and 
return the hypotenuse as a double. Use this function in a program to determine the hypotenuse for 
each of the triangles shown below.

***************************************************************************************************/

#include <iostream>//enables program to perform input/output
#include <cmath>

using namespace std;
//#include ".hpp"//enable program to use Temperature functions

int hypotenuseCalc(int,int); // function prototype

int main(){
    int s1 = 0, s2 = 0;

    cout << "Enter value: ";
    cin >> s1;

    cout << "Enter value: ";
    cin >> s2;

    cout << "the hypotenuse is: " << hypotenuseCalc(s1,s2) << endl;
    
    return 0;
}//end function main

int hypotenuseCalc(int side1, int side2){

    return pow(side1,2) + pow(side2,2);

}// end hypotenuseCalc function