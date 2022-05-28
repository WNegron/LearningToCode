/***************************************************************************************************
File Name: ex02_18.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com

Notes:
My answer to exercise 2.18 using only the tools and methods taught up to chapter 2.

Description:
        2.18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains
the numbers from the user, then prints the larger number followed by the words “is larger.” If the
numbers are equal, print the message “These numbers are equal.”

Use only the single-selection form of the if statement you learned in this chapter.

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
        //variable definition
        int num1, num2;

        //prompt user for two integers
        puts("Please enter 2 numbers to compare: ");

        //read two integers from user
        scanf("%d %d", &num1, &num2);

        if(num1 > num2){
                printf("%d is larger.\n", num1);
        }//end if

        if(num2 > num1){
                printf("%d is larger.\n", num2);
        }//end if

        if(num1 == num2){
                puts("These numbers are equal.\n");
        }//end if
}//end function main
