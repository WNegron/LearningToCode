/***************************************************************************************************
File Name: ex04_15.c
     Date: 2022-06-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 4.15 using only the tools and methods taught up to chapter 4.

Description:
	4.15 (Modified Compound-Interest Program) Modify the compound-interest program of Section 4.6 to 
repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop to vary the 
interest rate.
***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include <math.h>//math functions

//function main begins program execution
int main(void){
	//variable definition
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate
    
    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {
        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year);
        // output one table row
        printf("%4u%21.2f\n", year, amount);
    }//end for	
}//end function main
