/***************************************************************************************************
File Name: bubblesort.h
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

#include <stdbool.h> // allows the use of bool, true, and false

//sorting an array using Bubble Sort algorithm
void originalBubbleSort(int arrayToSort[], int size){
    int temporaryValue = 0;
    for(int pass = 1; pass < size; pass++){
        for(int i = 0; i < (size - 1); i++){
            if(arrayToSort[i] > arrayToSort[i+1]){
                temporaryValue = arrayToSort[i];
                arrayToSort[i] = arrayToSort[i+1];
                arrayToSort[i+1] = temporaryValue;
            }//end if
        }//end for loop 'i'
    }//end for loop 'pass'
}//end function bubblesort

//exercise 6.11
//sorting an array using a modified Bubble Sort algorithm
void modBubbleSort(int arrayToSort[], int size){
    int temporaryValue = 0;
    //this variable are use to terminate the algorithm; making it more efficient
    //implementing part b of the exercise
    bool lastPassSwap;
    bool swap;

    for(int pass = 1; pass < size; pass++){
        //instead of subtracting 1 from size we subtract 'pass' which will decrease the number of comparison
        //this will make the algorithm faster and more efficient
        for(int i = 0; i < (size - pass); i++){  
            if(arrayToSort[i] > arrayToSort[i+1]){
                temporaryValue = arrayToSort[i];
                arrayToSort[i] = arrayToSort[i+1];
                arrayToSort[i+1] = temporaryValue;
                swap = true;
            }//end if
            else{
                lastPassSwap = swap;
                swap = false;
            }
        }//end for loop 'i'
        if((lastPassSwap == swap) && (lastPassSwap == false)){
            printf("\n%d\n",pass);
            break;//end algorithm
        }//end if
    }//end for loop 'pass'
}//end function bubblesort