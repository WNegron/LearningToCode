/* ************************************************************************************

Filename: ex05_14.cpp
    Date: 2022-05-24
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise x.xx using only the tools and methods taught up to Chapter XX.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.14 (Modified Compound-Interest Program) Modify the compound-interest application of Fig. 5.6 
	to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9% and 10%. Use a for loop to vary 
	the interest rate.


--------- Fig 5.6  --------------------------------------------------------------
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

---------------------------------------------------------------------------------------


************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> //enables program to parameterized stream manipulators
#include <cmath> // for pow function

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double principal{1000.00}; // initial amount before interest
double rate{0.05}; // interest rate
double amount{0};//set amount to 0

// set floating-point number format
cout << fixed << setprecision(2);

//begin for loop
for(int i = 0; i <= 5; i++){
	//print out headers for the tabulated result
	cout << "Initial principal: " << principal << endl;
	cout << "    Interest rate:    " << rate << endl;
	
	// display headers
	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

	// calculate amount on deposit for each of ten years
	for (unsigned int year{1}; year <= 10; year++) {
		// calculate amount on deposit at the end of the specified year
		amount = principal * pow(1.0 + rate, year);
		// display the year and the amount
		cout << setw(4) << year << setw(20) << amount << endl;
		}// end of for loop 
		
	rate += 0.01;// increase rate amount by 0.01
}// end of for loop

return 0; // indicate that program ended successfully
} // end of function main
