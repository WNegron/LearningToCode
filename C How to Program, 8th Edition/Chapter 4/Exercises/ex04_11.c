/***************************************************************************************************
File Name: ex04_11.c
     Date: 2022-06-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 4.11 using only the tools and methods taught up to chapter 4.

Description:
	
    4.11 (Find the Smallest) Write a program that finds the smallest of several integers. Assume 
that the first value read specifies the number of values remaining.
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    int smallest = 0;
    int counterSize = 0;
    int newValue = 0;

    printf("%s","Enter integers to find smallest: ");
    scanf("%d", &counterSize);

    for(int i = 1; i <= counterSize; i++){
        scanf("%d", &newValue);

        if(smallest > newValue){
            smallest = newValue;
        }//end if
        else if(i == 1){
            smallest = newValue;
        }//end if
    }//end for
	
    printf("%s %d \n","Smallest: ", smallest);
}//end function main
