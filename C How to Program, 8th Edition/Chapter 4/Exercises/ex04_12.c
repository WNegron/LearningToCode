/***************************************************************************************************
File Name: ex04_12.c
     Date: 2022-06-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 4.12 using only the tools and methods taught up to chapter 4.

Description:
	
    4.12 (Calculating the Sum of Even Integers) Write a program that calculates and prints the sum 
of the even integers from 2 to 30.
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    int totalSum = 0;

    for(int i = 2; i <= 30; i+=2){
        totalSum += i;
    }//end for

    printf("%s %d \n","Sum of Even Integers: ", totalSum);	
}//end function main
