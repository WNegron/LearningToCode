/***************************************************************************************************
File Name: ex05_18.c
     Date: 2022-07-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.18 using only the tools and methods taught up to chapter 5.

Description:
    5.18 (Even or Odd) Write a program that inputs a series of integers and passes them one at a 
time to function isEven, which uses the remainder operator to determine whether an integer is even. 
The function should take an integer argument and return 1 if the integer is even and 0 otherwise.

***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include "numbers.h"//my own header file, it has the funciton isMultiple, isEven


//function main begins program execution
int main(void){
	//variable definition
	int number = 0;
    bool evenOrOdd;

    //loop will continue until -1 has been enter by user
    while(number != -1){
        printf("%s","Enter an integer: ");//prompt user
        scanf("%d",&number);//read user input

        if(number > -1){
            evenOrOdd = isEven(number);

            if(evenOrOdd){
                printf("%d %s",number, " is an even\n");
            }//end if
            else{
                printf("%d %s",number, " is an odd\n");
            }//end else
        }//end if
        else if(number == -1){
                continue;
        }//end else if
        else{
            printf("%s", "\nNot a valid number! Enter -1 to quit!\n");
        }//end else
    }//end while
}//end function main
