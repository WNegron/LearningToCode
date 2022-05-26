/* ************************************************************************************

Filename: ex05_22.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.22 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.22 (De Morgan’s Laws) In this chapter, we discussed the logical operators &&, || and !.
	
	De Morgan’s laws can sometimes make it more convenient for us to express a logical expression.
	These laws state that the expression !(condition1 && condition2) is logically equivalent to the
	expression (!condition1 || !condition2). Also, the expression !(condition1 || condition2) is
	logically equivalent to the expression (!condition1 && !condition2). 
	
	Use De Morgan’s laws to write equivalent expressions for each of the following, then write an 
	application to show that both the original expression and the new expression in each case 
	produce the same value:
		
		a) !((x <= 6) && (y % 2 == 1)) 
		b) !((a < 4)||(b >= 6))
		c) !(x < 3) && !(y >= 2)
		d) !(a == b) || !(b != 2)

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int x = 7;
int y = 25;
int a = 15;
int b = 12;


//a) !((x <= 6) && (y % 2 == 1)) 
cout << "!((x <= 6) && (y % 2 == 1)) = " << !((x <= 6) && (y % 2==1));
cout << endl;

// Applying De Morgan's Law;
// this (!(x <= 6) || !(y % 2 == 1)) is the same as a) !((x <= 6) && (y % 2 == 1))
cout << "(!(x <= 6) || !(y % 2 == 1)) = " << (!(x <= 6) || !(y % 2==1));
cout << endl;
 
//b) !((a < 4)||(b >= 6))
cout << "!((a < 4)||(b >= 6)) = " << !((a< 4)||(b>= 6));
cout << endl;

// Applying De Morgan's Law;
// this (!(a < 4) && !(b >= 6)) is the same as b) !((a < 4)||(b >= 6))
cout << "(!(a < 4) && !(b >= 6)) = " << (!(a < 4) && !(b >= 6));
cout << endl;

//c) !(x < 3) && !(y >= 2)
cout << "!(x < 3) && !(y >= 2) = " << !(x < 3)&&!(y >= 2); 
cout << endl;

// Applying De Morgan's Law;
// c) !(x < 3)&&!(y >= 2)
cout << "(!(x < 3) || !(y >= 2)) = " << (!(x < 3) || !(y >= 2));
cout << endl;

//d) !(a == b)||!(b != 2)
cout << "!(a == b)||!(b != 2) = " << !(a == b)||!(b != 2); 
cout << endl;

// Applying De Morgan's Law;
// d) !(a == b)||!(b != 2)
cout << "!((a == b) && (b != 2)) = " << !((a == b) && (b != 2));
cout << endl;

return 0; // indicate that program ended successfully
} // end of function main
