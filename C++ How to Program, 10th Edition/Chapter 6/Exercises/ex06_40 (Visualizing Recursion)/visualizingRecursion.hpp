/***************************************************************************************************

File Name: ex06_40.cpp
     Date: 2026-02-12
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.40 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.40 (Visualizing Recursion) It’s interesting to watch recursion “in action.” Modify the factorial
function of Fig. 6.25 to print its local variable and recursive call parameter. For each recursive call,
display the outputs on a separate line and add a level of indentation. Do your utmost to make the
outputs clear, interesting and meaningful. Your goal here is to design and implement an output for-
mat that helps a person understand recursion better. You may want to add such display capabilities
to the many other recursion examples and exercises throughout the text.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/



/* this the original version 
// Fig. 6.25: fig06_25.cpp
// Recursive function factorial.
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long); // function prototype

int main() {
   // calculate the factorials of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter) {
      cout << setw(2) << counter << "! = " << factorial(counter)
         << endl;
   }
}

// recursive definition of function factorial   
unsigned long factorial(unsigned long number) {
   if (number <= 1) { // test for base case     
      return 1; // base cases: 0! = 1 and 1! = 1
   }
   else { // recursion step                     
      return number * factorial(number - 1);
   }
}*/

#include <iostream>//enable program to perform input/output
#include <iomanip>//parameterized stream manipulators
#include <string>

using namespace std;//program uses names from namespace std

// Helper to create indentation string (2 spaces per level)
string indent(int level) {
    return string(level * 2, ' ');
}

// recursive definition of function factorial 
// Recursive factorial with visualization  
unsigned long factorial(unsigned long number, int depth) {
    // Show entry into this call
    cout << indent(depth);
    if (number <= 1) { // test for base case
        cout << "Base case reached: " << number << "! = 1";
        if (number == 0) cout << "  (by definition 0! = 1)";
        cout << "\n";   
        return 1; // base cases: 0! = 1 and 1! = 1
    }//end if

   else { // recursion step 
        // Recursive case - show what we're computing
        cout << number << "!  =  " << number << " x " 
             << (number-1) << "!\n";       

        // Make the recursive call (go deeper)
        unsigned long subResult = factorial(number - 1, depth + 1);

        // Show return / unwind
        cout << indent(depth);
        cout << number << "! = " << number << " x " << subResult 
             << "  =  " << (number * subResult) << "\n";
        
        return number * subResult;
    }//end else
}