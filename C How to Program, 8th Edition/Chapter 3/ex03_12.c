/***************************************************************************************************
File Name: ex03_12.c
     Date: 2022-05-31
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.12 using only the tools and methods taught up to chapter 3.

Description:
	3.12 What does the following program print?

----------   Example Output   ----------------------------------------------------------------------
	1
	4
	9
	16
	25
	36
	49
	64
	81
	100
	Total is 385
----------------------------------------------------------------------------------------------------
  
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	unsigned int x = 1; 
	unsigned int total = 0; 
	unsigned int y;
	
	while(x<=10){ y = x * x;
		printf( "%d\n", y ); total += y;
		++x;
	} // end while

	printf( "Total is %d\n", total );
}//end function main

