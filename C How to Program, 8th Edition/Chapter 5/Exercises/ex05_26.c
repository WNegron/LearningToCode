/***************************************************************************************************
File Name: ex05_26.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.26 using only the tools and methods taught up to chapter 5.

Description:
    5.26 (Perfect Numbers) An integer number is said to be a perfect number if its factors, 
including 1 (but not the number itself), sum to the number. For example, 6 is a perfect number 
because 6 = 1 + 2 + 3. 

Write a function isPerfect that determines whether parameter number is a perfect number. Use this 
function in a program that determines and prints all the perfect numbers between 1 and 1000. Print 
the factors of each perfect number to confirm that the number is indeed perfect. Challenge the power 
of your computer by testing numbers much larger than 1000.

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function prototype
int isPerfect(int number);//find perfect number
void printPerfect();//print perfect number
void factors(int number);//find and print factors of the perfect number 

//function main begins program execution
int main(void){
	//variable definition

    printf("%s\n","Perfect numbers between 1 and 1000");
    
    printPerfect();
	
}//end function main

void printPerfect(){
    //variable definition
    int size = 1000;
    int perfect = 0;
    int numFactors = 0;

    printf("%s","Perfect Num \t Factors \n");

    //for loop 1 to 1000
    for(int i = 1; i <= size; i++){
        perfect = isPerfect(i);//find perfect number
        if(perfect == 1){
            printf("%d\t\t",i);//print perfect number
            factors(i);//find and print factors of perfect number
            printf("\n");//print newline
        }//end if
        else{
            continue;
        }//end else
    }//end for

    printf("\n");//print newline
}//end function printPerfect

int isPerfect(int number){
    int factor = 0;

    //for loop to find and add factors
    for(int i = 1; i < number; i++){
        //find factors of the number
        if((number % i) == 0){
            factor += i;
        }//end if
        else{
            continue;
        }//end else
    }//end for

    //determine if number is perfect
    if(factor == number){
        return 1;
    }//end if
    else{ //if(factor > number){
        return 0;
    }//end else...if
}//end function isPerfect


void factors(int number){
    //for loop
    for(int i = 1; i < number; i++){
        if((number % i) == 0){
            printf("%d, ",i);
        }//end if
        else{
            continue;
        }//end else
    }//end for loop
}//end function factor