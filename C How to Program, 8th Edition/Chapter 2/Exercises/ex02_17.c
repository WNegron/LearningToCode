/***********************************************************************************************
File Name: ex02_17.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com

Notes:
My answer to exercise 2.17 using only the tools and methods taught up to chapter 2.

Description

        2.17 (Printing Values with printf) Write a program that prints the numbers 1 to 4 on
the same line.

        Write the program using the following methods.
                a) Using one printf statement with no conversion specifiers.
                b) Using one printf statement with four conversion specifiers.
                c) Using four printf statements.

***********************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
        //variable definition

        puts("Printing values with printf()");
        printf("1, 2, 3, 4\n");// no conversion specifiers
        printf("%d, %d, %d, %d\n", 1, 2, 3, 4);//using four conversion specifiers

        //using four printf statements
        printf("%d, ",1);
        printf("%d, ",2);
        printf("%d, ",3);
        printf("%d\n",4);

}//end function main
