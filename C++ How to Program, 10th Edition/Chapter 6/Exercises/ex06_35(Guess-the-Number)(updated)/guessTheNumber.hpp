/***************************************************************************************************

File Name: guessTheNumber.hpp
     Date: 2026-02-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.35 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    +++===************  MODIFICATION EXERCISE 6.35 ************===+++
    6.35 (Guess-the-Number Game Modification) Modify the program of Exercise 6.34 to count the
number of guesses the player makes. If the number is 10 or fewer, print "Either you know the secret 
or you got lucky!" If the player guesses the number in 10 tries, then print "Ahah! You know
the secret!" If the player makes more than 10 guesses, then print "You should be able to do
better!" Why should it take no more than 10 guesses? Well, with each “good guess” the player
should be able to eliminate half of the numbers. Now show why any number from 1 to 1000 can
be guessed in 10 or fewer tries.
    +++===************  ************************** ************===+++


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
    guess // will store user's guess
    response = 'y' // will work to determine if user wants to play another round

     //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
    int attempts = 0;//counter for guesses
    //+++===************  ************************** ************===+++

    display "I have a number between 1 and 1000."
    display "Can you guess my number?"
    display "Please type your first guess: "
    
    do 
        display "Please type your guess: "
        reads guess

        //modification to verify range
        if guess < 1 or guess > 1000) then
            display "Number must be between 1 and 1000."
            continue with loop
        end if

        //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
        ++attempts;//increase the tally by 1
        //+++===************  ************************** ************===+++
         
        if guess == secretNumber
            display "Excellent! You guessed the number!"
        end if
        else if guess < secretNumber
            display "Too low. Try again."
        end else
        else if guess > secretNumber
            display "Too high. Try again."
        end else
    end while guess != secretNumber loop

     //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
    if(attempts < 10) then
        display "Either you know the secret or you got lucky!"
    end if
    else if(attempts == 10) then
        display "Ahah! You know the secret!"
    end else if
    else if(attempts > 10) then
        display "You should be able to do better!"
    end else if
    //+++===************  ************************** ************===+++

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

#include <iostream>//enable program to perform input/output
#include <ctime>//enable program to perform time functions
#include <cstdlib> // contains prototypes for functions srand and rand


//function chooses a number to be guessed by selecting an integer at random
int generateSecretNumber(){
    return  (rand() % 1000) + 1;//random number between 1 and 1,000
}//end generateSecretNumber function

//recursive function to play the guessing game
void playTheGame(){
    int secretNumber = generateSecretNumber(); //generates a random integer
    int guess = 0; // will store user's guess
    char response = '\0'; // will work to determine if user wants to play another round

    //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
    int attempts = 0;//counter for guesses
    //+++===************  ************************** ************===+++

    std::cout << "I have a number between 1 and 1000.\n";
    std::cout << "Can you guess my number?\n";
    //std::cout << "Please type your first guess: ";
    
    do{ //do...while loop begins
        std::cout << "Please type your guess: ";
        std::cin >> guess;

        //modification to verify range
        if(guess < 1 || guess > 1000){
            std::cout << "Number must be between 1 and 1000.\n";
            continue;//jumps the rest of the instructions and continues with the loop
        }//end if

        //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
        ++attempts;//increase the tally by 1
        //+++===************  ************************** ************===+++

        if(guess == secretNumber){
            std::cout << "Excellent! You guessed the number!\n";
        }//end if
        else if (guess < secretNumber){
            std::cout << "Too low. Try again.\n";
        }//end else
        else if (guess > secretNumber){
            std::cout << "Too high. Try again.\n";
        }//end else
    }while(guess != secretNumber); //end while loop

    //+++===************. EXERCISE 6.35 MODIFICATION ************===+++
    if(attempts < 10){
        std::cout << "Either you know the secret or you got lucky!\n";
    }//end if
    else if(attempts == 10){
        std::cout << "Ahah! You know the secret!\n";
    }//end else if
    else{
        std::cout << "You should be able to do better!\n";
    }//end else 
    //+++===************  ************************** ************===+++

    //ask user to play again
    std::cout << "Would you like to play again (y or n)?\n";
    std::cin >> response;

     if(response == 'y' || response == 'Y'){
        playTheGame();//recursive call - start new game
     }//end if
    else{
        std::cout << "Thanks for playing! Goodbye.\n";
    }//end else

}//end playTheGame function
