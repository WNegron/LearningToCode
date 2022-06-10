/***************************************************************************************************
File Name: ex03_26.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.26 using only the tools and methods taught up to chapter 3.

Description:

    3.26 (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find the two 
largest values of the 10 numbers. [Note: You may input each number only once.]
***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int counter = 1;
    int number = 0;
    int largest1 = 0;
    int largest2 = 0;

    //loop while counter is less than or equal to 10
    while(counter <= 10){
        //prompt user for a number
        printf("%s","Enter number: ");
        //read number
        scanf("%d",&number);

        //compare largest and number
        if(largest1 < number){
            //if largest1 is smaller than number
            //store largest1 in largest2
            largest2 = largest1;
            //store number in largest1
            largest1 = number;
        }//end if
        else if(largest2 < number){//compare largest2 to number
            //if largest2 is smaller than number
            //store number in largest2
            largest2 = number;
        }
        ++counter;//increase counter by 1
    }//end while

    //print largest number
    printf("%s %d \n","Largest number was: ", largest1);

     //print 2nd largest number
    printf("%s %d \n","2nd Largest number was: ", largest2);
}//end function main

