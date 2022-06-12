/***************************************************************************************************
File Name: filename.c
     Date: yyyy-mm-dd
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise x.xx using only the tools and methods taught up to chapter xx.

Description:
	
    4.13 (Calculating the Product of Odd Integers) Write a program that calculates and prints the 
product of the odd integers from 1 to 15.
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int totalProduct = 1;

    for(int i = 1; i <= 15; i+=2){
        totalProduct *= i;
    }//end for

    printf("%s %d \n","Product of Odd integers: ",totalProduct);
}//end function main
