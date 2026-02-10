/***************************************************************************************************

File Name: greatestCommonDivisor.hpp
     Date: 2026-02-09
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.31 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.31 (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
integer that evenly divides each of the numbers. Write a function gcd that returns the greatest common 
divisor of two integers.

-------------------------------------    Pseudocode    ---------------------------------------------
function gcd(x, y)
    // Returns the greatest common divisor of two integers x and y
    // Works for positive, negative, or zero values (gcd(0,0) returns 0)

    if x == 0 and y == 0 then
        return 0  // Special case: undefined, but convention is 0
    
    // Make both numbers positive (GCD is always positive)
    x = absolute value of x
    y = absolute value of y
    
    // Euclidean algorithm (iterative version)
    while y != 0 do
        remainder = x modulo y
        x = y
        y = remainder
    end while
    
    return x
end function
-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <cmath>//enable program to perform math functions

//gcd function begins
int gcd(int x, int y){
    //variable declaration
    int remainder{0};
    // Returns the greatest common divisor of two integers x and y
    // Works for positive, negative, or zero values (gcd(0,0) returns 0)

    if(x == 0 && y == 0){
        return 0;  // Special case: undefined, but convention is 0
    }//end if
    
    // Make both numbers positive (GCD is always positive)
    x = std::abs(x);
    y = std::abs(y);
    
    // Euclidean algorithm (iterative version)
    while(y != 0){
        remainder = x % y;
        x = y;
        y = remainder;
    }//end of while loop
    
    return x;//returns the gcd
}//end of gcd function