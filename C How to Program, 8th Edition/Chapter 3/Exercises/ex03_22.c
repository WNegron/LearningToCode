/***************************************************************************************************
File Name: ex03_22.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.22 using only the tools and methods taught up to chapter 3.

Description:
	3.22 (Printing Numbers from a Loop) Write a program that utilizes looping to print the numbers 
from 1 to 10 side by side on the same line with three spaces between numbers.
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    int numbers = 1;

    //loop until number larger than 10
    while(numbers <= 10){
        printf("%d   ", numbers);//print number side by side
        ++numbers;//increment numbers by 1
    }//end while
	
}//end function main
