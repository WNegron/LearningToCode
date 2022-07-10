/***************************************************************************************************
File Name: numbers.h
     Date: 2022-07-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
    My answer to exercise 5.17 using only the tools and methods taught up to chapter 5.

    In section 5.8 Headers, page 172 - 173. The authors mentioned that we can put our user define 
functions into our user define "header" files.

Description:
	5.17 (Multiples) Write a function isMultiple that determines for a pair of integers whether the 
second integer is a multiple of the first. The function should take two integer arguments and return 
1 (true) if the second is a multiple of the first, and 0 (false) otherwise. Use this function in a 
program that inputs a series of pairs of integers.

    5.18 (Even or Odd) Write a program that inputs a series of integers and passes them one at a 
time to function isEven, which uses the remainder operator to determine whether an integer is even. 
The function should take an integer argument and return 1 if the integer is even and 0 otherwise.

***************************************************************************************************/
#include <stdbool.h> // allows the use of bool, true, and false

//function isMultiple determines if the 2nd integer (num2) is a multiple of the first integer (num1)
//and returns true; if true. And returns false; if false
bool isMultiple(int num1, int num2){
    if((num2 % num1) == 0){
        return true;
    }//end if
    else{
        return false;
    }//end else
}//end funciton isMultiple

//function isEven determines if an integer is an even number or an odd number
//if integer is an even number function will return true, if odd; will return false
bool isEven(int number){
    if((number % 2) == 0){
        return true;
    }//end if
    else{
        return false;
    }//end else
}//end funciton isEven