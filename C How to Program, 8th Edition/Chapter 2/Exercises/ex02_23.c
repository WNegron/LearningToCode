/***************************************************************************************************
File Name: ex02_23.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.28 using only the tools and methods taught up to chapter 2.

Description:
	2.23 (Largest and Smallest Integers) Write a program that reads in three integers and then 
determines and prints the largest and the smallest integers in the group. 

Use only the programming tech- niques you have learned in this chapter.

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int num1, num2, num3;

	//prompt user for 3 integers
	puts("Enter 3 numbers: ");

	//read numbers from user
	scanf("%d %d %d", &num1, &num2, &num3);

	//finding smallest integer
	if(num1 < num2){
		if(num1 < num3){
			printf("Smallest is %d \n", num1);
		}//end if
	}//end if

	if(num2 < num1){
		if(num2 < num3){
			printf("Smallest is %d \n", num2);
		}//end if
	}//end if

	if(num3 < num1){
		if(num3 < num2){
			printf("Smallest is %d \n", num3);
		}//end if
	}//end if

	//finding largest integer
	if(num1 > num2){
		if(num1 > num3){
			printf("Largest is %d \n", num1);
		}//end if
	}//end if

	if(num2 > num1){
		if(num2 > num3){
			printf("Largest is %d \n", num2);
		}//end if
	}//end if
	
	if(num3 > num2){
		if(num3 > num1){
			printf("Largest is %d \n", num3);
		}//end if
	}//end if	
}//end function main

