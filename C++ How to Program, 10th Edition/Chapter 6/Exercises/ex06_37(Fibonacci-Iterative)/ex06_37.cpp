/***************************************************************************************************

File Name: ex06_73.cpp
     Date: 2026-02-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.37 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.37 (Fibonacci Series: Iterative Solution) Write a nonrecursive version of the function fibonacci
from Fig. 6.26.

-------------------------------------------------------------------------------------------------------
// Fig. 6.26: fig06_26.cpp
// Recursive function fibonacci.
#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long); // function prototype

int main() {
   // calculate the fibonacci values of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter)
      cout << "fibonacci(" << counter << ") = "
         << fibonacci(counter) << endl;

   // display higher fibonacci values
   cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
   cout << "fibonacci(30) = " << fibonacci(30) << endl;
   cout << "fibonacci(35) = " << fibonacci(35) << endl;
}

// recursive function fibonacci                            
unsigned long fibonacci(unsigned long number) {
   if ((0 == number) || (1 == number)) { // base cases     
      return number;
   }
   else { // recursion step                                
      return fibonacci(number - 1) + fibonacci(number - 2);
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
-------------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features
#include <utility>//enables program to use pair

#include "fibonacciIterative.hpp"//enable program to use function from headerFileNames

using namespace std;//program uses names from namespace std

int main() {
   // calculate the fibonacci values of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter)
      cout << "fibonacci(" << counter << ") = "
         << fibonacci(counter) << endl;

   // display higher fibonacci values
   cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
   cout << "fibonacci(30) = " << fibonacci(30) << endl;
   cout << "fibonacci(35) = " << fibonacci(35) << endl;

   //iterative version
   cout << "\nfibonacci iterative version\n" << endl;
   // calculate the fibonacci values of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter)
      cout << "fibonacci(" << counter << ") = "
         << fibonacciIterative(counter) << endl;
}

