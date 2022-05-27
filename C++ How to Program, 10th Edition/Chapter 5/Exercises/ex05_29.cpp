/* ************************************************************************************

Filename: ex05_29.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.29 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.29 (Peter Minuit Problem) Legend has it that, in 1626, Peter Minuit purchased Manhattan Island 
for $24.00 in barter. Did he make a good investment? 

To answer this question, modify the compound-interest program of Fig. 5.6 to begin with a principal 
of $24.00 and to calculate the amount of interest on deposit if that money had been kept on deposit 
until this year (e.g., 390 years through 2016). 

Place the for loop that performs the compound-interest calculation in an outer for loop that varies 
the interest rate from 5% to 10% to observe the wonders of compound interest.

   
--------------------------------  Fig. 5.6 Code ---------------------------------------
// Fig. 5.6: Interest.cpp
// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

int main() {
   // set floating-point number format
   cout << fixed << setprecision(2);

   double principal{1000.00}; // initial amount before interest
   double rate{0.05}; // interest rate

   cout << "Initial principal: " << principal << endl;
   cout << "    Interest rate:    " << rate << endl;

   // display headers
   cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

   // calculate amount on deposit for each of ten years
   for (unsigned int year{1}; year <= 10; year++) {
      // calculate amount on deposit at the end of the specified year
      double amount = principal * pow(1.0 + rate, year);

      // display the year and the amount
      cout << setw(4) << year << setw(20) << amount << endl;
   } 
}


 **************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************

-----------------------------    End Fig 5.6 Code    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip>//enable program to use parameterized stream manipulators
#include <cmath> //enable program to use mathematical function; e.g. pow function

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double principal{24.00}; // initial amount before interest
double rate{0.05}; // interest rate

// set floating-point number format
cout << fixed << setprecision(2);
   
cout << "Initial principal: " << principal << endl;
cout << "    Interest rate:    " << rate << endl;

// display headers
cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

//for loop rate 5% to 10%
for(int i = 5; i <= 10; i++){
	rate = double(i/ 100.00);
	cout << "Rate: " << rate << endl;
// calculate amount on deposit for each of ten years
for (unsigned int year{1}; year <= 396; year++) {
	// calculate amount on deposit at the end of the specified year
	double amount = principal * pow(1.0 + rate, year);
    // display the year and the amount
    cout << setw(4) << year << setw(25) << amount << endl;
}//end of for year
cout << endl;
}//end of for rate

return 0; // indicate that program ended successfully
} // end of function main
