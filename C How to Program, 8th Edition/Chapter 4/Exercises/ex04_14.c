/***************************************************************************************************
File Name: ex04_14.c
     Date: 2022-06-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 4.14 using only the tools and methods taught up to chapter 4.

The problem with calculate the factorial of 20 (20!) will be memmory. Each data type has a limit to 
how much memory space the data type needs. The result of 20! may exceed those limits. 

Description:
	
    4.14 (Factorials) The factorial function is used frequently in probability problems. The 
factorial of a positive integer n (written n! and pronounced “n factorial”) is equal to the product 
of the positive integers from 1 to n. Write a program that evaluates the factorials of the integers 
from 1 to 5. Print the results in tabular format. What difficulty might prevent you from calculating 
the factorial of 20?
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    unsigned int nFactorial = 1;
    int counterSize = 5;

    printf("%s","n Factorial \n");
    printf("%s","n \t n!\n");
    for(int i = 1; i <= counterSize; i++){
        for(int j = 1; j <= i; j++){
            nFactorial *= j;//calculate factorial
        }//end for
        printf("%d \t %d \n",i, nFactorial);
        nFactorial = 1;
    }//end for
}//end function main
