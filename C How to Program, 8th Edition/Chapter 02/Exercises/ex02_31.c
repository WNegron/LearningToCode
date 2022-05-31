/***************************************************************************************************
File Name: ex02_31.c
     Date: 2022-05-30
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.31 using only the tools and methods taught up to chapter 2.

Description:
	2.31 (Table of Squares and Cubes) Using only the techniques you learned in this chapter, 
write a program that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to 
print the following table of values: 


----------   Example Output   ----------------------------------------------------------------------

	number	square	cube 
	0	0	0 
	1	1	1 
	2	4	8
	3 	9 	27
	4 	16 	64 
	5 	25 	125
	6 	36 	216 
	7 	49 	343 
	8 	64 	512 
	9 	81 	729 
	10 	100 	1000
----------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition

	puts("number	square	cube");//table header
	printf("%d	%d	%d\n", 0, 0*0, 0*0*0);
	
	printf("%d	%d	%d\n", 1, 1*1, 1*1*1);
	
	printf("%d	%d	%d\n", 2, 2*2, 2*2*2);

	printf("%d	%d	%d\n", 3, 3*3, 3*3*3);
		
	printf("%d	%d	%d\n", 4, 4*4, 4*4*4);

	printf("%d	%d	%d\n", 5, 5*5, 5*5*5);

	printf("%d	%d	%d\n", 6, 6*6, 6*6*6);

	printf("%d	%d	%d\n", 7, 7*7, 7*7*7);

	printf("%d	%d	%d\n", 8, 8*8, 8*8*8);

	printf("%d	%d	%d\n", 9, 9*9, 9*9*9);

	printf("%d	%d	%d\n", 10, 10*10, 10*10*10);	

}//end function main

