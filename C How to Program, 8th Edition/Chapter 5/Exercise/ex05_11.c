/***************************************************************************************************
File Name: ex05_11.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.11 using only the tools and methods taught up to chapter 5.

Description:

    5.11 (Rounding Numbers) Function floor may be used to round a number to a specific decimal 
place. The statement
    
        y = floor(x * 10 + .5) / 10;

rounds x to the tenths position (the first position to the right of the decimal point). The 
statement

        y = floor(x * 100 + .5) / 100;

rounds x to the hundredths position (the second position to the right of the decimal point). 

Write a program that defines four functions to round a number x in various ways
    
    a) roundToInteger(number)
    b) roundToTenths(number)
    c) roundToHundreths(number) 
    d) roundToThousandths(number)

For each value read, your program should print the original value, the number rounded to the 
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest 
hundredth, and the number rounded to the nearest thousandth.

***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include <math.h>//math functions header

//function prototypes
double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number); 
double roundToThousandths(double number);
void printRoundedNumber(int,double);

//function main begins program execution
int main(void){
	//variable definition
    double x = 0.0;
    //double y = 0.0;
    int size = 4;

    printf("%s","Rounding Values\n");
    
    for(int i = 1; i <= size; i++){//for loop
        printf("%s","Enter a number: "); //prompt user
        scanf("%lf", &x);//read user input

        printf("\n%s %.5f\n", "x = ", x);//print original number

        printRoundedNumber(i,x);//prints rounded numbers
        
    }//end for
	
}//end function main

double roundToInteger(double number){
    return floor(number * 10 + .5) / 10;
}

double roundToTenths(double number){
    return floor(number * 100 + .5) / 100;
}

double roundToHundreths(double number){
    return floor(number * 1000 + .5) / 1000;
}

double roundToThousandths(double number){
    return floor(number * 10000 + .5) / 10000;
}

void printRoundedNumber(int i,double number){
     switch(i){
            case 1:
                printf("\n%s %.5f\n", "y = ", roundToInteger(number));//print rounded number
                break;
            case 2:
                printf("\n%s %.5f\n", "y = ", roundToTenths(number));//print rounded number
                break;
            case 3:
                printf("\n%s %.5f\n", "y = ", roundToHundreths(number));//print rounded number
                break;
            case 4:
                printf("\n%s %.5f\n", "y = ", roundToThousandths(number));//print rounded number
                break;
            default:
                printf("\n%s\n","Number doesn't exist!");
                break;
        }
}