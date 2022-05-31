/***************************************************************************************************
File Name: ex02_30.c
     Date: 2022-05-30
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.30 using only the tools and methods taught up to chapter 2.

Description:
	2.30 (Separating Digits in an Integer) Write a program that inputs one five-digit number, 
separates the number into its individual digits and prints the digits separated from one another by 
three spaces each. 

	[Hint: Use combinations of integer division and the remainder operation.] 
	
	For example, if the user types in 42139, the program should print

----------   Example Output   ----------------------------------------------------------------------
	
	4 2 1 3 9

----------------------------------------------------------------------------------------------------

   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int numberToDigits;

	//prompt user for a 5 digit integer
	printf("Please enter a 5 digit integer: ");

	//read the integer from the user
	scanf("%d", &numberToDigits);

	//splitting up the integers
	printf("%d ", numberToDigits/10000); // prints the first integer
	numberToDigits %= 10000;// stores the last 4 integers
       	
	printf("%d ", numberToDigits/1000);// prints the second integer
	numberToDigits %= 1000;// stores the last 3 integers

	printf("%d ", numberToDigits/100);// prints the third integer
	numberToDigits %= 100;// stores the last 2 integers

	printf("%d ", numberToDigits/10);// prints the fourth integer
	numberToDigits %= 10;// stores the last integer

	printf("%d \n", numberToDigits);// prints the last integer
	
}//end function main

