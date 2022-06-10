/***************************************************************************************************
File Name: ex03_21.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.21 using only the tools and methods taught up to chapter 3.

Description:
	3.21 (Predecrementing vs. Postdecrementing) Write a program that demonstrates the difference 
between predecrementing and postdecrementing using the decrement operator --.

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int c; // define variable 
   
   // demonstrate postincrement 
   c = 5; // assign 5 to c 
   printf( "%d\n", c ); // print 5 
   printf( "%d\n", c-- ); // print 5 then postincrement
   printf( "%d\n\n", c ); // print 4                                   
   
   // demonstrate preincrement 
   c = 5; // assign 5 to c 
   printf( "%d\n", c ); // print 5 
   printf( "%d\n", --c ); // preincrement then print 4
   printf( "%d\n", c ); // print 4 
}//end function main
