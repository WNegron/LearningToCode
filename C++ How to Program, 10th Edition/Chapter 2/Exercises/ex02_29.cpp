/* ************************************************************************************

Filename: ex02_29.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.29 using only the tools and methods thought in Chapter 2.

Description:

2.29 (Table) Using the techniques of this chapter, write a program that calculates the
square and the cube of the integers from 0 to 10. Use tabs to print the following neatly
formatted table of values:

	Integer	Square	Cube
	0       0       0
	1       1		    1
	2		    4   		8
	3		    9   		27
	4		    16  		64
	5		    25  		125
	6		    36	  	216
	7		    49	  	343
	8		    64	  	512
	9		    81  		729
	10		  100		  1000
************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){


cout << "Integer\t\t Square\t\t Cube \n";
cout << 0 << " \t\t " << 0*0 << " \t\t " << 0*0*0 << endl;
cout << 1 << " \t\t " << 1*1 << " \t\t " << 1*1*1 << endl;
cout << 2 << " \t\t " << 2*2 << " \t\t " << 2*2*2 << endl;
cout << 3 << " \t\t " << 3*3 << " \t\t " << 3*3*3 << endl;
cout << 4 << " \t\t " << 4*4 << " \t\t " << 4*4*4 << endl;
cout << 5 << " \t\t " << 5*5 << " \t\t " << 5*5*5 << endl;
cout << 6 << " \t\t " << 6*6 << " \t\t " << 6*6*6 << endl;
cout << 7 << " \t\t " << 7*7 << " \t\t " << 7*7*7 << endl;
cout << 8 << " \t\t " << 8*8 << " \t\t " << 8*8*8 << endl;
cout << 9 << " \t\t " << 9*9 << " \t\t " << 9*9*9 << endl;
cout << 10 << " \t\t " << 10*10 << " \t\t " << 10*10*10 << endl;


return 0; // indicate that program ended successfully
} // end of function main
