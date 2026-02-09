

/***************************************************************************************************

File Name: ex06_30.cpp
     Date: 2026-02-09
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.30 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.30 (Reverse Digits) Write a function that takes an integer value and returns the number with
its digits reversed. For example, given the number 7631, the function should return 1367.

-------------------------------------    Pseudocode    ---------------------------------------------
FUNCTION reverseDigits(n):
    // Assume n is a non-negative integer; if negative, handle sign separately if needed
    IF n < 0:
        // Optional: Handle negative numbers by reversing the absolute value and reapplying sign
        RETURN -reverseDigits(-n)
    END IF
    
    DECLARE integer reversed = 0
    DECLARE integer original = n  // To preserve original for edge cases if needed
    
    WHILE n > 0:
        DECLARE integer digit = n % 10  // Get last digit
        reversed = reversed * 10 + digit  // Append to reversed
        n = n / 10  // Remove last digit (integer division)
    END WHILE
    
    RETURN reversed

MAIN:
    DISPLAY "Enter an integer: "
    READ number
    
    reversed_num = reverseDigits(number)
    DISPLAY "Reversed: ", reversed_num

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include "reverseDigits.hpp"//enable program to use function from reverseDigits.hpp


int main(){
    //variable declaration
    int number{0};
    int reversed_Num{0};

    //prompt user for input
    std::cout << "\n\nEnter a number and I will reverse it" << std::endl;
    std::cout << "e.g. given the number 7631, will return 1367." << std::endl;
    std::cout << "Enter a number: ";
    std::cin >> number;//reads input from user

    reversed_Num = reverseDigits(number);//calls function to reverse the digits in the number provided by user

    std::cout << "\nReversed: " << reversed_Num << std::endl;//display the reversed number

}//end of main function
