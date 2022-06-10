/***************************************************************************************************
File Name: ex03_24.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.24 using only the tools and methods taught up to chapter 3.

Description:
	3.24 (Tabular Output) Write a program that uses looping to print the following table of values. 
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.

----------   Example Output   ----------------------------------------------------------------------
        N 10*N 100*N 1000*N
        1   10   100   1000
        2   20   200   2000
        3   30   300   3000
        4   40   400   4000
        5   50   500   5000
        6   60   600   6000
        7   70   700   7000
        8   80   800   8000
        9   90   900   9000
       10  100  1000  10000

----------------------------------------------------------------------------------------------------
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int n = 1;

    //print table header
    printf("%s","N \t 10*N \t 100*N \t 1000*N \n");
    //loop while n less than or equal to 10
    while(n <= 10){
        //print n and n * 10,100,1000
        printf("%d \t %d \t %d \t %d \n", n, n*10, n*100, n*1000);
        ++n;//increase n by 1 
    }//end while
}//end function main
