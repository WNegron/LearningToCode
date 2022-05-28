/***************************************************************************************************
File Name: ex02_24.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.24 using only the tools and methods taught up to chapter 2.

Description:
	2.24 (Odd or Even) Write a program that reads an integer and determines and prints whether 
it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any 
multiple of two leaves a remainder of zero when divided by 2.]

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int number;

	//promtp user for an integer
	puts("Enter an integer:");

	//read an integer
	scanf("%d", &number);

	//find out if number is even or odd
	if(number % 2 == 0)
		printf("%d is an even number.\n", number);
	if(number % 2 == 1)
		printf("%d is an odd number.\n", number);
}//end function main

