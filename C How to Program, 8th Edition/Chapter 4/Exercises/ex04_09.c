/***************************************************************************************************
File Name: ex04_09.c
     Date: 2022-06-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 4.9 using only the tools and methods taught up to chapter 4.

Description:
	4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers. Assume that 
the first integer read with scanf specifies the number of values remaining to be entered. Your 
program should read only one value each time scanf is executed. A typical input sequence might be
        5 100 200 300 400 500
where the 5 indicates that the subsequent five values are to be summed.
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    int counter = 0;
    int totalSum = 0;
    int newValue = 0;

    
    printf("%s","Enter integers to be summed: ");

    scanf("%d", &counter);

    for(int i = 1; i <= counter; i++){
        scanf("%d",&newValue);
        totalSum += newValue;
    }//end for

    printf("%s %d \n","Total sums is ", totalSum);
	
}//end function main
