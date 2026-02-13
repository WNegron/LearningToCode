/***************************************************************************************************

File Name: ex06_41.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.41 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

#include "greatestCommonDivisor.hpp"//enable program to use function gcd

using namespace std;//program uses names from namespace std

// function main begins program execution
int main(){
    // declaring and initializing variables
    //variable decalration
    int x{0}, y{0}, gcd_Num{0};

    //messaging and prompting user for input
    std::cout << "\n==== Greatest Common Divisor ====" << std::endl;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    //calling function gcd
    gcd_Num = iterativeGCD(x,y);

    //dsiplay gcd
    std::cout << "\ngcd(" << x << ", " << y << ") = " << gcd_Num << std::endl;

    //messaging and prompting user for input
    std::cout << "\n==== Greatest Common Divisor ====" << std::endl;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    //calling function gcd
    gcd_Num = recursiveGCD(x,y);

    //dsiplay gcd
    std::cout << "\ngcd(" << x << ", " << y << ") = " << gcd_Num << std::endl;

    return 0;// indicate that program ended successfully
}// end of main function

