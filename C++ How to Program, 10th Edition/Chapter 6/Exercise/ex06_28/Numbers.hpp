/***************************************************************************************************

File Name: Numbers.hpp
     Date: 2022-07-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.28 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.28 (Dudeney Numbers) A Dudeney number is a positive integer that is a perfect cube such that 
the sum of its digits is equal to the cube root of the number. There are exactly seven such integers. 

    Write a function isDudeney to test if a parameter number is a Dudeney number. Use this function 
in a program that determines and prints the first 3 Dudeney integers. Then challenge the power of your 
computer by finding all 7 Dudeney numbers. Make use of the <cmath> cube root function, cbrt.
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <cmath>//enable program to use math functions

//function separatingDigits; separates an integer into its individual digits and adds them.
int separatingDigits(int number, int divisor){
    if(number < 10){
        return number;
    }
    else{
        return (number/divisor) + separatingDigits(number % divisor, divisor/10);
    }
}//end function separatingDigits

//function isDudeney; finds Dudeney numbers;positive integer that is a perfect cube such that 
//the sum of its digits is equal to the cube root of the number
void isDudeney(int number){
    double cubeRoot = 0.0;
    int totalDigits = 0;

    totalDigits = separatingDigits(number,1000000);

    cubeRoot = cbrt(number);

    if(totalDigits == cubeRoot){
        std::cout << number << /*" is a dudeney number!" << */  std::endl;
        //std::cout << totalDigits << " = " << cubeRoot << std::endl;
    }//end if
}//end function isDudeney