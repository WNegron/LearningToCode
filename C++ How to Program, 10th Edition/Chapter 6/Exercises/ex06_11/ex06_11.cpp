/***************************************************************************************************

File Name: ex06_11.cpp
     Date: 2024-01-27
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
    My answer to exercise 6.11 using only the tools and methods taught up to Chapter 6.

    This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.11 Show the value of x after each of the following statements is performed: 
	a) x = fabs( -2.0 )
	b) x = fabs( 2.0)
	c) x = log( 7.389056) 
	d) x = sqrt( 16.0 )
	e) x = log10(1000.0) 
	f) x = sqrt( 36 .0) 
	g) x = pow( 2, 3)

***************************************************************************************************/
#include <iostream>//enables program to perform input/output
#include <cmath>

int main(){

    int x = 0;

x = fabs( -2.0 );
count << x << endl;

	x = fabs( 2.0);
count << x << endl;

	x = log( 7.389056);
count << x << endl;

	x = sqrt( 16.0 );
count << x << endl;
	
x = log10(1000.0);
count << x << endl;
 
	x = sqrt( 36 .0);
count << x << endl;

	x = pow( 2, 3);
count << x << endl;

return 0;
}//end function main