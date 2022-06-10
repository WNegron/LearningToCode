/***************************************************************************************************
File Name: ex03_25.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.25 using only the tools and methods taught up to chapter 3.

Description:
	3.25 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
----------   Example Output   ----------------------------------------------------------------------
        A  A+2  A+4  A+6
        3   5    7    9 
        6   8   10   12 
        9  11   13   15 
        12 14   16   18 
        15 17   19   21
----------------------------------------------------------------------------------------------------
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int number = 3;

    //print table header
    printf("%s","A \t A+2 \t A+4 \t A+6 \n");

    //loop while number is lees than or equal to 15
    while(number <= 15){
        //print values number, number + 2, 4, 6
        printf("%d \t %d \t %d \t %d \n",number, number+2,number+4,number+6);
        number += 3;//increase number by 3
    }//end while
}//end function main
