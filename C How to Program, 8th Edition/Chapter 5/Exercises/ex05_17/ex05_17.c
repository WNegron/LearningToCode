/***************************************************************************************************
File Name: ex05_17.c
     Date: 2022-07-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.17 using only the tools and methods taught up to chapter 5.

Description:
	5.17 (Multiples) Write a function isMultiple that determines for a pair of integers whether the 
second integer is a multiple of the first. The function should take two integer arguments and return 
1 (true) if the second is a multiple of the first, and 0 (false) otherwise. Use this function in a 
program that inputs a series of pairs of integers.

***************************************************************************************************/

#include <stdio.h>//standared input/output header
#include "numbers.h"//my own header file, it has the funciton isMultiple

int main(void){
    //variable declaration
    int num1 = 0;
    int num2 = 0;
    bool isNumMultiple;

    //prompt user
    printf("%s", "Enter an integer: ");
    scanf("%d", &num1);//read user input

    //prompt user
    printf("%s", "Enter an integer: ");
    scanf("%d", &num2);//read user input

    isNumMultiple = isMultiple(num1,num2);// call function to determine is num2 is a multplie of num1

    //print message
    if(isNumMultiple){
        printf("%d %s %d\n",num2," is a multiple of ",num1);
    }//end if
    else{
        printf("%d %s %d\n",num2, " is NOT a multiple of ", num1);
    }//end else

}//end function main