/***************************************************************************************************

File Name: ex06_28.cpp
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

**************************************************************************************************/
#include "Numbers.hpp"

int main(){
    //variable declaration
    int size = 1000000;

    for(int i = 1; i < size; i++){
        isDudeney(double(i * 1.0));
    }
    
}//end function main