/***************************************************************************************************

File Name: ex05_35.cpp
     Date: 2022-06-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note:  
My answer to exercise 5.35 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

     5.35 (Displaying the Interest Rate in the DollarAmount Example) Enhance the main program in 
Fig. 5.7 to display the interest rate based on the two integers entered by the user. For example, 
if the user enters 2 and 100, display 2.0%, and if the user enters 2015 and 100000, display 2.015%.  

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
//d1.toPennies();
//d2.toPennies();

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
//balance.toPennies();

cout << "\nInitial balance: " << balance.toString() << endl;
if(rate < 10){
   cout << "Rate: " << fixed << setprecision(2) << float(rate / 1.00) << "%" << endl;  
}
if(rate >= 10 && rate < 100){
     cout << "Rate: " << fixed << setprecision(2) << float(rate / 10.00) << "%" << endl;
}
if(rate >= 100 && rate < 1000){
     cout << "Rate: " << fixed << setprecision(2) << float(rate / 100.00) << "%" << endl;
}
if(rate >= 1000){
     cout << "Rate: " << fixed << setprecision(2) << float(rate / 1000.00) << "%" << endl;
}

// display headers
cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

// calculate amount on deposit for each of ten years
for (unsigned int year{1}; year <= 10; year++) {
// increase balance by rate % (i.e., rate / divisor)
balance.addInterest(rate, divisor);

// display the year and the amount
cout << setw(4) << year << setw(20) << balance.toString() << endl;
}//end for

//int divisor;
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
