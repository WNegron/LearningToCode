/***************************************************************************************************

File Name: ex06_35.cpp
     Date: 2026-02-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.35 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.35 (Guess-the-Number Game Modification) Modify the program of Exercise 6.34 to count the
number of guesses the player makes. If the number is 10 or fewer, print "Either you know the se-
cret or you got lucky!" If the player guesses the number in 10 tries, then print "Ahah! You know
the secret!" If the player makes more than 10 guesses, then print "You should be able to do
better!" Why should it take no more than 10 guesses? Well, with each “good guess” the player
should be able to eliminate half of the numbers. Now show why any number from 1 to 1000 can
be guessed in 10 or fewer tries.
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include "guessTheNumber.hpp"//enable program to use function from guessTheNumber

// function main begins program execution
int main(){
    // declaring and initializing variables

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Welcome to Guess the Number!" << std::endl;

    playTheGame();//starts the game
    
    return 0;// indicate that program ended successfully
}// end of main function

