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

int hypotenuseCalc(int,int); // function prototype

void printTable(int,int);

int main(){
    int s1 = 0, s2 = 0;//, c1 = 0;
    int s3 = 0, s4 = 0;//, c2 = 0;
    int s5 = 0, s6 = 0;//, c3 = 0;

    cout << "First triangle\n";
    cout << "Enter value: ";
    cin >> s1;
    cout << "Enter value: ";
    cin >> s2;  

    cout << "\nSecond triangle\n";
    cout << "Enter value: ";
    cin >> s3;
    cout << "Enter value: ";
    cin >> s4;

    cout << "\nThird triangle\n";
    cout << "Enter value: ";
    cin >> s5;
    cout << "Enter value: ";
    cin >> s6;    

    //cout << "the hypotenuse is: " << hypotenuseCalc(s1[counter],s2[counter]) << endl;

    cout << "Triangle\tSide 1\tSide 2\tHypotenuse \n";  
    cout << 1;  
    printTable(s1,s2);
    cout << 2;  
    printTable(s3,s4);
    cout << 3;  
    printTable(s5,s6);
    
    return 0;
}//end function main

int hypotenuseCalc(int side1, int side2){

    return pow(side1,2) + pow(side2,2);

}// end hypotenuseCalc function

void printTable(int side1, int side2){

    cout << "\t\t" << side1 << "\t" << side2 << "\t" << hypotenuseCalc(side1,side2) << endl;

}