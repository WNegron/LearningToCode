/***************************************************************************************************

File Name: ex06_33.cpp
     Date: 2026-02-10
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.33 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.33 (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin, the
program should print Heads or Tails. Let the program toss the coin 100 times and count the number of 
times each side of the coin appears. Print the results. The program should call a separate function 
flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program
realistically simulates the coin tossing, then each side of the coin should appear approximately half
the time.]

-------------------------------------    Pseudocode    ---------------------------------------------
function flip()
    if random number // will select either 0 or 1 at random
        return 0 // 0 = tails
    else
        return 1  // 1 = heads
end function

function coinTossing(limit)
    headsTotal = 0;
    tailsTotal = 0;
    coinSide = 0;

    for i=1; to limit do
        coinSide = flip();
        if coinSide == 0
            display "tails"
            ++totalTails;
        else 
            display "heads"
            ++headsTotal
    end for

    display "total amount of time it landed on heads: ", headsTotal, "percentage: ", headsTotal/limit *100, "%"
    display "total amount of time it landed on tails: ", tailsTotal, "percentage: ", tailsTotal/limit *100, "%"

end function

function main
    display "==== Coin Tossing Program ==="
    display "Lets begin"
    coinTossing(100)
end function
   
-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/


/*#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features
#include <utility>//enables program to use pair */


#include "coinToss.hpp"//enable program to use function from headerFileNames

//using namespace std;//program uses names from namespace std

// function main begins program execution
int main(){
    // declaring and initializing variables

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    //message user
    std::cout << "=== Coin Tossing Program ===" << std::endl;
    std::cout << "Let's begin... press enter" << std::endl;
    std::cin.get();
    
    coinTossing(100);//simulating a coin being toss a 100 times

    std::cout << "\nSimulation finished." << std::endl;//display message
    return 0;// indicate that program ended successfully
}// end of main function

