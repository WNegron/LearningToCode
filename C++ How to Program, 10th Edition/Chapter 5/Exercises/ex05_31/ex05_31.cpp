/***************************************************************************************************

File Name: ex05_31.cpp
     Date: 2022-06-07
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note:  
My answer to exercise 5.31 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.31 (DollarAmount Arithmetic) Enhance class DollarAmount from Exercise 5.30 with a divide member 
function that receives an int parameter, divides the data member amount by that value and stores the 
result in the data member. Use rounding techniques similar to the addInterest member function. 

Test your new divide member function.
	
----------   Example Output   ----------------------------------------------------------------------

----------------------------------------------------------------------------------------------------

   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <iostream> //enables program to perform input and output
#include <iomanip> //enable to program to use parameterized stream manipulators
#include <string> //enable program to use C++ string data type

#include "DollarAmount.h" // enables program to use DollarAmount data type and functions

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){
// declaration and initializing variables
DollarAmount d1{123,45};// $123.45
DollarAmount d2{15,76};// $15.76

//conver dollars and cents to pennies
d1.toPennies();
d2.toPennies();

cout << "After adding d2 (" << d2.toString() << ") from d1 ("
	 << d1.toString() << "), d1 = ";	 
d1.add(d2);//modifies object d1
cout << d1.toString() << "\n";

cout << "After subtracting d2 (" << d2.toString() << ") from d1 ("
     << d1.toString() << "), d1 = ";
d1.subtract(d2); // modifies object d1
cout << d1.toString() << "\n";

cout << "After subtracting d1 (" << d1.toString() << ") from d2 ("
     << d2.toString() << "), d2 = ";
d2.subtract(d1); // modifies object d2
cout << d2.toString() << "\n\n";


int divisor;
cout << "Testing divide function \n";
cout << "Enter an integer to divide amount: ";
cin >> divisor;

cout << "Before division d1 = " << d1.toString() << endl; 
d1.divide(divisor);
cout << "After division d1 = " << d1.toString() << endl;

//the rounding technique does not work with negative numbers
//as you can see the number is not properly rounded
//to make the roudning technique work for negative number 
//instead of + 50 it should be - 50; I think!
cout << "Before division d2 = " << d2.toString() << endl; 
d2.divide(divisor);
cout << "After division d2 = " << d2.toString() << endl;

return 0; // indicate that program ended successfully
} // end of function main
