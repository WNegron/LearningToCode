/***************************************************************************************************
File Name: ex05_10.c
     Date: 2022-07-05
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.10 using only the tools and methods taught up to chapter 5.

Description:
	5.10 (Rounding Numbers) An application of function floor is rounding a value to the nearest
integer. The statement
        
            y = floor(x + .5);

will round the number x to the nearest integer and assign the result to y. 

Write a program that reads several numbers and uses the preceding statement to round each of these 
numbers to the nearest integer. For each number processed, print both the original number and the 
rounded number.

***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include <math.h>//enable program to use mathematical functions that are part of the header file 

//function prototype
double roundingNumbers(double x);

//function main begins program execution
int main(void){
	//variable definition
    double x = 0.0;
    double y = 0.0;
    int size = 5;

    printf("%s","Rounding Values\n");

    
    for(int i = 0; i < size; i++){//for loop
        printf("%s","Enter a number: "); //prompt user
        scanf("%lf", &x);//read user input

        printf("\n%s %.2f\n", "x = ", x);//print original number
        printf("\n%s %.2f\n", "y = ", roundingNumbers(x));//print rounded number
    }//end for
    
}//end function main

double roundingNumbers(double x){

    return floor(x + 0.5);
}
