/* ************************************************************************************

Filename: ex05_18.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.18 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.18 Assume that a = 4, b = 3, c = 2 and d = 1. 
	
	What does each of the following statements print? 
		a) cout << (a == 1) << endl
		b) cout << (b == 3) << endl;
		c) cout<<(d>= 1 &&c< 4)<<endl;
		d) cout<<(d<= 4 &&b<d)<<endl;
		e) cout<<(b>=d||c==a)<<endl;
		f) cout<<(c+d<b||b>=a)<<endl; 
		g) cout << (!d ) << endl;
		h) cout<<(!(a-b))<<endl;
		i) cout << (!(c < d)) << endl;

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int a = 4;
int b = 3;
int c = 2; 
int d = 1;

cout << "(a == 1) " << (a == 1) << endl;

cout << "(b == 3) " << (b == 3) << endl;

cout << "(d>= 1 &&c< 4) " << (d>= 1 &&c< 4) << endl;

cout << "(d<= 4 &&b<d) " <<(d<= 4 &&b<d) << endl;

cout << "(b>=d||c==a) " << (b>=d||c==a) << endl;

cout << "(c+d<b||b>=a) " << (c+d<b||b>=a) << endl; 

cout << "(!d ) " << (!d ) << endl;

cout << "(!(a-b)) " << (!(a-b)) << endl;

cout << "(!(c < d)) " << (!(c < d)) << endl;

return 0; // indicate that program ended successfully
} // end of function main
