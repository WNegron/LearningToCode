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

/*
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features
#include <utility>//enables program to use pair*/

#include "visualizingRecursion.hpp"//enable program to use function from visualizingRecursion

// function main begins program execution
int main(){
    // declaring and initializing variables

    cout << "Calculating factorials with recursion trace:\n\n";

    // calculate the factorials of 0 through 10
   for (unsigned int counter{0}; counter <= 10; ++counter) {

        cout << "----------------------------------------\n";
        cout << counter << "! is being calculated:\n\n";

        //cout << setw(2) << counter << "! = " << factorial(counter,0)
         //<< endl;
        
         unsigned long result = factorial(counter, 0);
        
        cout << "\n" << indent(0) << "Final result: " 
             << counter << "! = " << result << "\n\n";
    }//end for loop
    
    cout << "Done.\n";

    return 0;// indicate that program ended successfully
}// end of main function



