/***************************************************************************************************

File Name: ex06_34.cpp
     Date: 2026-02-10
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.34 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.34 (Guess-the-Number Game) Write a program that plays the game of “guess the number” as
follows: Your program chooses the number to be guessed by selecting an integer at random in the
range 1 to 1000. The program then displays the following:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player then types a first guess. The program responds with one of the following:

1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

If the player’s guess is incorrect, your program should loop until the player finally gets the number
right. Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer.

-------------------------------------    Pseudocode    ---------------------------------------------

//function chooses a number to be guessed by selecting an integer at random
function generateSecretNumber
    return random number between 1 and 1,000
end function

//recursive function to play the guessing game
function playTheGame()
    secretNumber = generateSecretNumber //generates a random integer
    usersGuess // will store user's guess
    response = 'y' // will work to determine if user wants to play another round

    display "I have a number between 1 and 1000."
    display "Can you guess my number?"
    display "Please type your first guess: "
    
    do 
        reads usersGuess 
        if usersGuess == secretNumber
            display "Excellent! You guessed the number!"
        end if
        else if usersGuess < secretNumber
            display "Too low. Try again."
        end else
        else if usersGuess > secretNumber
            display "Too high. Try again."
        end else

        display "Please type your guess: "
    end while usersGuess != secretNumber loop

    //ask user to play again
     display "Would you like to play again (y or n)?"
     reads response

     if response = 'y' or response = 'Y' then
        playTheGame()//recursive call - start new game
    end if
    else
        display "Thanks for playing! Goodbye."
    end else

end function

funciton main
    // Optional: seed random number generator once
    INITIALIZE random number generator with current time
    
    DISPLAY "Welcome to Guess the Number!"
    
    playOneGame()
end function

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include "guessTheNumber.hpp"//enable program to use function from guessTheNumber

// function main begins program execution
int main(){
    // declaring and initializing variables

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Welcome to Guess the Number!" << std::endl;

    playTheGame();
    
    return 0;// indicate that program ended successfully
}// end of main function

