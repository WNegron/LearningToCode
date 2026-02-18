/***************************************************************************************************

File Name: ex07_16.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.16 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

7.16 (Dice Rolling) Write a program that simulates the rolling of two dice. The sum of the two values 
should then be calculated. [Note: Each die can show an integer value from 1 to 6, so the sum of the
two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 being the least
frequent sums.] Figure 7.22 shows the 36 possible combinations of the two dice. Your program should
roll the two dice 36,000,000 times. Use a one-dimensional array to tally the numbers of times each
possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable
(i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7).

    Fig. 7.22 | The 36 possible outcomes of rolling two dice.

         1  2  3  4   5   6
         ------------------
       1| 2  3  4  5  6   7
       2| 3  4  5  6  7   8
       3| 4  5  6  7  8   9
       4| 5  6  7  8  9   10
       5| 6  7  8  9  10  11
       6| 7  8  9  10 11  12

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime>//enable program to perform time functions

//function difinition
int rollDice(){
    return (rand()%6)+1;
}//end rollDice

// function main begins program execution
int main(){
    // declaring and initializing variables
    const size_t arraySize = 11;
    std::array<int,arraySize> frequency{};
    const long long int TOTAL_ROLLS = 36000000;
    int sum = 0;

    // randomize random number generator using current time
    std::srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "\n       +++=====******     Rolling Dice     ******=====+++       \n";
    std::cout <<"-------------------------------------------------------------------\n";

    for (size_t i = 0; i < TOTAL_ROLLS; i++){
        /* code */
        sum = rollDice() + rollDice();

        //possible outcomes: 2 to 12
        switch(sum){
            case 2:  frequency[0]++;  break;//index 0 -  2
            case 3:  frequency[1]++;  break;//      1 -  3
            case 4:  frequency[2]++;  break;//      2 -  4
            case 5:  frequency[3]++;  break;//      3 -  5
            case 6:  frequency[4]++;  break;//      4 -  6
            case 7:  frequency[5]++;  break;//      5 -  7
            case 8:  frequency[6]++;  break;//      6 -  8
            case 9:  frequency[7]++;  break;//      7 -  9
            case 10: frequency[8]++;  break;//      8 - 10
            case 11: frequency[9]++;  break;//      9 - 11
            case 12: frequency[10]++; break;//      10 -12
        }//end switch
    }//end for loop

    //printout counter for loop
    for (size_t i = 0; i < arraySize; i++){

        if((i+2) < 10) std::cout << " " << i+2 << ": ";
        else std::cout << i+2 << ": ";
        //printout a '*' for every 50 times that a number came out
        // 2 came out 50 times then it will only print one '*'
        // 3 came out 100 times then it will print two '*'
        for (size_t j = 0; j < frequency[i]; j+=100000){
            /* code */
            std::cout << '*';
        }//end '*' for loop
        std::cout << std::endl;
         
    }//end printout for loop

    std::cout <<"-------------------------------------------------------------------\n";

    std::cout << "Distribution: \n";
    std::cout << "SumofDice - Outcome - Expectation\n";
    std::cout << "----------------------------------\n";

    //printing out how the sums are distribute
    //compare to the expected outcome
    for (size_t i = 0; i < arraySize; i++){
        /* code */
        std::cout << i + 2 << ":\t\t" << (frequency[i] * 100)/TOTAL_ROLLS << "\t\t";
        if((i < 6)){
            std::cout << ((i+1) *100 )/36 << std::endl;
        }
        else{
            std::cout << ((11 - i)*100)/36 << std::endl;
        }//end else
    }//end for loop
    
    return 0;// indicate that program ended successfully
}// end of main function