/***************************************************************************************************

File Name: greatestCommonDivisor.hpp
     Date: 2026-02-09
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.41 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

The Euclidean Algorithm for finding GCD(A,B) is as follows:
If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
Write A in quotient remainder form (A = B⋅Q + R)
Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)

GCD(270,192) = GCD(192,78) = GCD(78,36) = GCD(36,6) = GCD(6,0) = 6
GCD(270,192) = 6

Description:

    6.41 (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is
the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the
greatest common divisor of x and y, defined recursively as follows: If y is equal to 0, then gcd(x, y)
is x; otherwise, gcd(x, y) is gcd(y, x % y), where % is the remainder operator. [Note: For this al-
gorithm, x must be larger than y.]

-------------------------------------    Pseudocode    ---------------------------------------------
function iterativeGCD(x, y)
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

function revursiveGCD(a, b)
    // Returns the greatest common divisor of two integers x and y
    // Works for positive, negative, or zero values (gcd(0,0) returns 0)

    // Make both numbers positive (GCD is always positive)
    a = std::abs(a);
    b = std::abs(b);

    if b == 0 then
        return a //base case

    //recursive function call
    return recursiveGCD(b, a % b);

end function
-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <cmath>//enable program to perform math functions

//gcd function begins
int iterativeGCD(int x, int y){
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

//recursiveGCD function begins
int recursiveGCD(int a, int b){
    // Returns the greatest common divisor of two integers x and y
    // Works for positive, negative, or zero values (gcd(0,0) returns 0)
    
    // Make both numbers positive (GCD is always positive)
    a = std::abs(a);
    b = std::abs(b);

    if(b == 0){
        return a;//base case
    }//end if

    //recursive function call
    return recursiveGCD(b,a%b);
}//end of recursiveGCD