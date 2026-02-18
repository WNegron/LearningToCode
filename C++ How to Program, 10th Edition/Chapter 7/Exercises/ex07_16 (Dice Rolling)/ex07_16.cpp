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
#include <iomanip>//parameterized stream manipulators
#include <ctime>//enable program to perform time functions

//function difinition
int rollDice(){
    return (rand()%6)+1;
}//end rollDice

// function main begins program execution
int main(){
    // declaring and initializing variables
    const size_t arraySize = 13;
    std::array<int,arraySize> frequency{};
    const long long int TOTAL_ROLLS = 36000000;
    int sum = 0;

    // randomize random number generator using current time
    std::srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "\n       +++=====******     Rolling Dice     ******=====+++       \n";
    std::cout << "Simulating " << TOTAL_ROLLS << " dice rolls...\n\n";
    std::cout <<"-------------------------------------------------------------------\n";

    for (size_t i = 0; i < TOTAL_ROLLS; i++){
        /* code */
        sum = rollDice() + rollDice();

        //possible outcomes: 2 to 12
        frequency[sum]++;
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

    // Print results in a table
    std::cout << " Sum" << std::setw(12) << "Frequency"
              << std::setw(14) << "Percentage\n";
    std::cout << std::string(40, '-') << "\n";

    for (size_t i = 2; i < arraySize; i++){
        double percentage = static_cast<double>(frequency[i]) / TOTAL_ROLLS * 100.0;

        std::cout << std::setw(3) << i
                  << std::setw(12) << frequency[i]
                  << std::setw(12) << std::fixed << std::setprecision(4)
                  << percentage << "%\n";
    }//end for
    
    // Print results in a table
    std::cout << "\n\nDistribution: \n";
    std::cout << " SumofDice" << std::setw(10) << "Outcome"
              << std::setw(14) << "Expectation\n";
    std::cout << std::string(40, '-') << "\n";

    //printing out how the sums are distribute
    //compare to the expected outcome
    for (size_t i = 2; i < arraySize; i++){
        /* code */
        std::cout << std::setw(5) << i;
        std::cout << std::setw(15) << std::fixed << std::setprecision(4);
        std::cout << static_cast<double>(frequency[i] * 100.00)/TOTAL_ROLLS << "%";
        if((i < 8)){
            std::cout << std::setw(12) << std::fixed << std::setprecision(4) 
            << static_cast<double>((i-1) *100.00 )/36 << "%" << std::endl;
        }
        else{
            std::cout << std::setw(12) << std::fixed << std::setprecision(4) 
            << static_cast<double>((13-i)*100.00)/36 << "%" << std::endl;
        }//end else
    }//end for loop

    std::cout << "\nTheoretical expectations:\n";
    std::cout << "  Sum 7  → ~16.6667%\n";
    std::cout << "  Sum 2 and 12 → ~2.7778% each\n\n";

    // Quick sanity check for sum 7
    double seven_pct = static_cast<double>(frequency[7]) / TOTAL_ROLLS * 100.0;
    std::cout << "Actual percentage for sum 7 = " << std::fixed << std::setprecision(4)
              << seven_pct << "%   →  ";

    if (seven_pct >= 16.4 && seven_pct <= 16.9) {
        std::cout << "looks reasonable ✓\n";
    } else {
        std::cout << "a bit off — but should be close with 36 million rolls\n";
    }
    
    return 0;// indicate that program ended successfully
}// end of main function