/***************************************************************************************************
File Name: ex02_19.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.19 using only the tools and methods taught up to chapter 2.

Description:
	 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three 
different integers from the keyboard, then prints the sum, the average, the product, the smallest 
and the larg- est of these numbers. 

Use only the single-selection form of the if statement you learned in this chapter. 

The screen dialogue should appear as follows:

------------ Example Output -----------------------------------------------------------------------

	Enter three different integers: 13 27 14 
	Sum is 54
 	Average is 18
	Product is 4914
	Smallest is 13
	Largest is 27

---------------------------------------------------------------------------------------------------

     
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------


***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int num1, num2, num3;

	//prompt user for  3 integers
	puts("Enter 3 different integers: ");

	//read 3 integers from user
	scanf("%d %d %d", &num1, &num2, &num3);

	//prints sum
	printf("Sum is %d\n", num1 + num2 + num3);

	//print average
	printf("Average is %d\n", (num1 + num2 + num3) / 3);

	//print product
	printf("Product is %d\n", num1 * num2 * num3);

	//print smallest
	if(num1 < num2){
		if(num1 < num3){
			printf("Smallest is %d\n", num1);
		}//end if
	}//end if

	if(num2 < num1){
		if(num2 < num3){
			printf("Smallest is %d\n", num2);
		}//end if
	}//end if

	if(num3 < num1){
		if(num3 < num2){
			printf("Smallest is %d\n", num3);
		}//end if
	}//end if

	//print largest
	if(num1 > num2){
		if(num1 > num3){
			printf("Largest is %d\n", num1);
		}//end if
	}//end if

	if(num2 > num1){
		if(num2 > num3){
			printf("Largest is %d\n", num2);
		}//end if
	}//end if

	if(num3 > num1){
		if(num3 > num2){
			printf("Largest is %d\n", num3);
		}//end if
	}//end if	
}//end function main

