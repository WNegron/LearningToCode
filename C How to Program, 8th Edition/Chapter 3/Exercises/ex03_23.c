/***************************************************************************************************
File Name: filename.c
     Date: yyyy-mm-dd
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise x.xx using only the tools and methods taught up to chapter xx.

Description:
	3.23 (Find the Largest Number) The process of finding the largest number (i.e., the maximum of 
a group of numbers) is used frequently in computer applications. For example, a program that 
determines the winner of a sales contest would input the number of units sold by each salesperson. 
The salesperson who sells the most units wins the contest. Write a pseudocode program and then a 
program that inputs a series of 10 non-negative numbers and determines and prints the largest of the 
numbers. [Hint: Your program should use three variables as shown below.]
    
        counter:    A counter to count to 10 (i.e., to keep track of how many numbers have been input 
                    and to determine when all 10 numbers have been processed)
         number:    The current number input to the program
        largest:    The largest number found so far
   
-------------------------------------    Pseudocode    ---------------------------------------------
initialize
    counter = 1
    number = 0
    largest = 0

while counter <= 10
    prompt user Enter number
    read number

    if largest < number
        largest = number
    
     increment counter by 1

 print Largest number was: number    
-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int counter = 1;
    int number = 0;
    int largest = 0;

    //loop while counter is less than or equal to 10
    while(counter <= 10){
        //prompt user for a number
        printf("%s","Enter number: ");
        //read number
        scanf("%d",&number);

        //compare largest and number
        if(largest < number){
            //if largest is smaller than number
            //store number in largest
            largest = number;
        }//end if
        ++counter;//increase counter by 1
    }//end while

    //print largest number
    printf("%s %d \n","Largest number was: ", largest);
}//end function main
