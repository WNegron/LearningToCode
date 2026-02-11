/***************************************************************************************************

File Name: coinToss.hpp
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
    return random integer between 0 and 1
end function

function coinTossing(limit)
    headsTotal = 0;
    tailsTotal = 0;
    
    for i=1; to limit do
        if flip() == 1 then
            display "heads"
            ++headsTotal
        else 
            display "tails"
            ++totalTails;
        end if
            
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

#include <iostream>//enable program to perform input/output
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time



// flip funciton begins
//returns 0 for tails and 1 for heads
int flip(){
    return rand() % 2;//simulated coin toss
}//end flip function


//coinTossing function begins
//function will track and print when the coin lands on either side
void coinTossing(int limit){
    // declaring and initializing variables
    int headsTotal = 0;//tracks amount of times coin lands on heads
    int tailsTotal = 0;//track amount of times coin lands on tails

    //for loop will flip the coin a set number of times
    //the amount of times is determin by the limit
    for(int i=1; i <= limit; i++){
        if(flip() == 1){//if heads then add to the tally of heads and printout "heads"
            ++headsTotal;//increase heads tally by 1
            std::cout << "heads" << std::endl;//printout "heads"
        }//end else
        else{//else tails then add to the tally of tails and printout "tails"
            ++tailsTotal;//increase tails tally by 1
            std::cout << "tails" << std::endl; //printout "tails"
        }//end if
        
    }//end for loop

    //display the amount of times coin landed on tails and what is that number as a percentage
    std::cout << "Total Tails: " << tailsTotal << std::endl;
    std::cout << "Percentage: " << static_cast<double>(tailsTotal)/limit * 100 << "%" << std::endl;

    //display the amount of times coin landed on heads and what is that number as a percentage
    std::cout << "Total Heads: " << headsTotal << std::endl;
    std::cout << "Percentage: " << static_cast<double>(headsTotal)/limit * 100 << "%" << std::endl;
}//end coinTossing function
