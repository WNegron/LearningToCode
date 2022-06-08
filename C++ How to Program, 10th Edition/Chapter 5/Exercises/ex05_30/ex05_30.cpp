/***************************************************************************************************

File Name: ex05_30.cpp
     Date: 2022-06-07
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note:  
My answer to exercise 5.30 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.30 (DollarAmount Constructor with Two Parameters) Enhance class DollarAmount (Fig. 5.8) with a 
constructor that receives two parameters representing the whole number of dollars and the whole 
number of cents. Use these to calculate and store in the data member amount the total number of 
pennies. 

	Test the class with your new constructor.
	
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

cout << "Enter integer interest rate and divisor. For example:\n" 
     << "for     2%, enter:    2 100\n" 
     << "for   2.3%, enter:   23 1000\n"
     << "for  2.37%, enter:  237 10000\n"
     << "for 2.375%, enter: 2375 100000\n> ";
int rate; // whole-number interest rate
int divisor; // divisor for rate 
cin >> rate >> divisor;

DollarAmount balance{1000,00}; // initial principal amount in pennies
balance.toPennies();

cout << "\nInitial balance: " << balance.toString() << endl;

// display headers
cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

// calculate amount on deposit for each of ten years
for (unsigned int year{1}; year <= 10; year++) {
// increase balance by rate % (i.e., rate / divisor)
balance.addInterest(rate, divisor);

// display the year and the amount
cout << setw(4) << year << setw(20) << balance.toString() << endl;
}//end for

return 0; // indicate that program ended successfully
} // end of function main
