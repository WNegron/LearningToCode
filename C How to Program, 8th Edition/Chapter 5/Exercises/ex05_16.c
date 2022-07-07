/***************************************************************************************************
File Name: ex05_16.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.16 using only the tools and methods taught up to chapter 5.

Description:
    5.16 (Exponentiation) Write a function integerPower(base, exponent) that returns the valueof 
        base ^ exponent
For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer, 
and base is an integer. Function integerPower should use for to control the calculation. 

** Do not use any math library functions. **

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function protorype
int integerPower(int base, int exponent);

//function main begins program execution
int main(void){
	//variable definition
    int b = 0;
    int e = 0;
    int r = 0;

    printf("%s","Enter base: ");//prompt user
    scanf("%d", &b);//read user input
    
    printf("%s","Enter exponent: ");//prompt user
    scanf("%d", &e);//read user input

    r = integerPower(b,e);//funciton call 

    printf("%d %s %d %s %d\n",b,"to the power of ",e, " = ",r);    

}//end function main

int integerPower(int base, int exponent){
    int total = 1;

    //for loop
    for(int i = 1; i <= exponent; i++){
        total *= base;
    }//end for

    return total;
}//end function integerPower