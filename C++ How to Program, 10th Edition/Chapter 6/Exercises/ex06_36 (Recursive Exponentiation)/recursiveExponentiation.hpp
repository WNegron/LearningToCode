/***************************************************************************************************

File Name: recursiveExponentiation.hpp
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

//power function begins
int power(int base, int exponent){
    //exponent == 0; any non-zero number to the power of 0 is 1
    if(exponent == 0){
        return 1;
    }//end if

    //exponent == 1; return the base itself
    if (exponent == 1){
        return base;
    }//end if

    //recursion; base^exponent = base * base^(exponent - 1)
    else{
        return base * power(base,exponent -1);
    }
}//end power function