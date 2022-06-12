/*********************************************************************************************
File Name: ex02_16.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.16 using only the tools and methods taught up to chapter 2.

Description:
	2.16 (Arithmetic) Write a program that asks the user to enter two numbers, 
obtains them from the user and prints their sum, product, difference, quotient and remainder.

*********************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int num1, num2;

	//prints string and automatically adds  a newline character 
	puts("Arithmetic, Enter 2 integers to calculate their sum, product, difference, quotient, and remainder");
	
	//prompts user to enter 2 numbers
	printf("%s","Enter 2 integers: ");

	//reads 2 numbers entered by user
        scanf("%d %d", &num1, &num2);

	//prints the sum
	printf("%s %d \n", "Sum: ", num1 + num2);

	//prints the product
	printf("%s %d \n", "Product: ", num1 * num2);

	//prints the difference
	printf("%s %d \n", "Difference: ", num1 - num2);

	//prints the quotient
	if(num2 == 0){//make sure the denominator is not a 0
		printf("%s %d \n", "Quotient: ", num2/num1);
	}//end if

	printf("%s %d \n", "Quotient: ", num1/num2);

	//prints remainder		
	if(num2 == 0){//make sure the denominator is not a 0
		printf("%s %d \n", "Remainder: ", num2%num1);
	}//end if

	printf("%s %d \n", "Remainder: ", num1%num2);
	
}//end function main
