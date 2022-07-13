/***************************************************************************************************
File Name: ex06_11.c
     Date: 2022-07-12
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 6.11 using only the tools and methods taught up to chapter 6.

Description:
    6.11 (Bubble Sort) The bubble sort presented in Fig. 6.15 is inefficient for large arrays. Make 
the following simple modifications to improve its performance:
        
        a) After the first pass, the largest number is guaranteed to be in the highest-numbered 
element of the array; after the second pass, the two highest numbers are “in place,” and so on. 
Instead of making nine comparisons on every pass, modify the bubble sort to make eight comparisons on 
the second pass, seven on the third pass and so on.

        b) The data in the array may already be in the proper or near-proper order, so why make nine 
passes if fewer will suffice? Modify the sort to check at the end of each pass whether any swaps have 
been made. If none has been made, then the data must already be in the proper order, so the program 
should terminate. If swaps have been made, then at least one more pass is needed.

***************************************************************************************************/

#include <stdio.h>//standard input/output
#include "bubblesort.h"

//symbolic constant
#define SIZE 10 //maximum size of array

int main(void){
        int values[SIZE] = {6,1,8,2,13,30,0,23,4,11};

        printf("%s","\nUnsorted array: \n");
        for(int i = 0; i < SIZE; i++){
                printf("%d %s",values[i],", ");
        }//end for loop 'i'
        
        puts("");

        /*originalBubbleSort(values,SIZE);

        printf("%s","\nSorted array: \n");
        for(int i = 0; i < SIZE; i++){
                printf("%d %s",values[i],", ");
        }//end for loop 'i'

        puts("");*/

        modBubbleSort(values,SIZE);

        printf("%s","\nSorted array: \n");
        for(int i = 0; i < SIZE; i++){
                printf("%d %s",values[i],", ");
        }//end for loop 'i'

        puts("");

}//end function main