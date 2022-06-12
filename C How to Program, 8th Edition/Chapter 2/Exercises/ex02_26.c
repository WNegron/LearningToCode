/***************************************************************************************************
File Name: ex02_26.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.26 using only the tools and methods taught up to chapter 2.

Description:
	2.26 (Multiples) Write a program that reads in two integers and determines and prints 
whether the first is a multiple of the second. [Hint: Use the remainder operator.]

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int num1, num2;

	//prompt user to enter 2 integers
	printf("Enter 2 numbers: ");

	//read 2 numbers from user
	scanf("%d %d", &num1, &num2);
	
	//finding out if the first number is a multiple of the second number
	if(num1 % num2 == 0){
		printf("%d is a multiple of %d \n", num1, num2);
	}//end if
	
	if(num1 % num2 > 0){
		printf("%d is not a multiple of %d \n", num1, num2);
	}//end if	
	
}//end function main
