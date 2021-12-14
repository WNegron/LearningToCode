/* ************************************************************************************

Filename: ex04_20.cpp
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.20 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.20 (Validating User Input) The examination-results program of Fig. 4.14 assumes that 
any value input by the user that’s not a 1 must be a 2. Modify the application to validate 
its inputs. On any input, if the value entered is other than 1 or 2, keep looping until 
the user enters a correct value.

************************************************************************************ */


// Fig. 4.14: Analysis.cpp
// Analysis of examination results using nested control statements.
#include <iostream>
using namespace std;

int main() {
   // initializing variables in declarations
   unsigned int passes{0}; 
   unsigned int failures{0};
   unsigned int studentCounter{1}; 

   // process 10 students using counter-controlled loop
   while (studentCounter <= 10) {
      // prompt user for input and obtain value from user
      cout << "Enter result (1 = pass, 2 = fail): ";
      int result;
      cin >> result;

      // if...else is nested in the while statement           
      if (result == 1) {         
         ++passes;  
         // increment studentCounter so loop eventually terminates
		 ++studentCounter;
      }
      else if(result == 2){    
         ++failures; 
        // increment studentCounter so loop eventually terminates
		 ++studentCounter;
      }
   
   } // end while

   // termination phase; prepare and display results
   cout << "Passed: " << passes << "\nFailed: " << failures << endl;

   // determine whether more than 8 students passed
   if (passes > 8) {
      cout << "Bonus to instructor!" << endl;
   }
} 

