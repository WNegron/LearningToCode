/***************************************************************************************************

File Name: ex06_36.cpp
     Date: 2026-02-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.36 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.36 (Recursive Exponentiation) Write a recursive function power(base, exponent) that, when
    invoked, returns
        
        base exponent

    For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
to 1. Hint: The recursion step would use the relationship
        
        base exponent = base · base exponent - 1

    and the terminating condition occurs when exponent is equal to 1, because
        
        base1 = base

-------------------------------------    Pseudocode    ---------------------------------------------

main function
    base
    exponent
    result

    display "Enter base integer:"
    reads base

    display "Enter exponent integer:"
    reads exponent

    result = power(base,integer)

    display base, " to the power of ", exponent, " = ", result
end main

funciton power(base, exponent)
    if exponent = 0 then
        return 1
    if exponent = 1 then
        return base
    else
        return base * power(base,exponent -1)
end power function
-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features
#include <utility>//enables program to use pair

#include "recursiveExponentiation.hpp"//enable program to use function from recursiveExponentiation

using namespace std;//program uses names from namespace std

// function main begins program execution
int main(){
    // declaring and initializing variables
    int base = 0;
    int exponent = 0;

    std::cout << "Recursive Exponentiation (now handles exponent = 0)\n\n";

    // Test cases
    std::cout << "3^4   = " << power(3, 4)   << "\n";    // 81
    std::cout << "2^10  = " << power(2, 10)  << "\n";    // 1024
    std::cout << "5^3   = " << power(5, 3)   << "\n";    // 125
    std::cout << "7^1   = " << power(7, 1)   << "\n";    // 7
    std::cout << "10^5  = " << power(10, 5)  << "\n";    // 100000
    std::cout << "8^0   = " << power(8, 0)   << "\n";    // 1

    //this loop will gone on foever
    //to end loop press and hold the control key (^ on mac, crtl on Windows), and press z
    while(true){//forever loop

    //promtp user to enter base and exponent
    std::cout << "\nEnter base and exponent (e.g. 4 3 or 5 0): ";
    std::cin >> base >> exponent;

    //result = power(base,exponent);//call power function

    //displays the result
    // We now allow exponent >= 0
    if (exponent >= 0) {
        std::cout << base << "^" << exponent << " = " << power(base, exponent) << "\n";
    } else {
        std::cout << "This version only handles non-negative exponents.\n";
    }
    }//end of while loop

    return 0;// indicate that program ended successfully
}// end of main function

