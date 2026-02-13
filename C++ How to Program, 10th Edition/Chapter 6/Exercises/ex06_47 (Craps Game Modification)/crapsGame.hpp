/***************************************************************************************************

File Name: crapsGame.hpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.47 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

6.47 (Craps Game Modification) Modify the craps program of Fig. 6.9 to allow wagering. Package as a 
function the portion of the program that runs one game of craps. Initialize variable bank-Balance to 
1000 dollars. Prompt the player to enter a wager. Use a while loop to check that wager is less than or 
equal to bankBalance and, if not, prompt the user to reenter wager until a valid wager is entered. 
After a correct wager is entered, run one game of craps. If the player wins, increase bank-Balance by 
wager and print the new bankBalance. If the player loses, decrease bankBalance by wager, 
print the new bankBalance, check on whether bankBalance has become zero and, if so, print
the message "Sorry. You busted!" As the game progresses, print various messages to create some
“chatter” such as "Oh, you're going for broke, huh?", "Aw cmon, take a chance!" or "You're up
big. Now's the time to cash in your chips!".

// Fig. 6.9: fig06_09.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

unsigned int rollDice(); // rolls dice, calculates and displays sum

int main() {
   // scoped enumeration with constants that represent the game status 
   enum class Status {CONTINUE, WON, LOST}; // all caps in constants

   // randomize random number generator using current time
   srand(static_cast<unsigned int>(time(0)));

   unsigned int myPoint{0}; // point if no win or loss on first roll
   Status gameStatus; // can be CONTINUE, WON or LOST
   unsigned int sumOfDice{rollDice()}; // first roll of the dice

   // determine game status and point (if needed) based on first roll
   switch (sumOfDice) {
      case 7: // win with 7 on first roll
      case 11: // win with 11 on first roll           
         gameStatus = Status::WON;
         break;
      case 2: // lose with 2 on first roll
      case 3: // lose with 3 on first roll
      case 12: // lose with 12 on first roll             
         gameStatus = Status::LOST;
         break;
      default: // did not win or lose, so remember point
         gameStatus = Status::CONTINUE; // game is not over
         myPoint = sumOfDice; // remember the point
         cout << "Point is " << myPoint << endl;
         break; // optional at end of switch  
   }

   // while game is not complete
   while (Status::CONTINUE == gameStatus) { // not WON or LOST
      sumOfDice = rollDice(); // roll dice again

      // determine game status
      if (sumOfDice == myPoint) { // win by making point
         gameStatus = Status::WON;
      }
      else {
         if (sumOfDice == 7) { // lose by rolling 7 before point
            gameStatus = Status::LOST;
         }
      }
   }

   // display won or lost message
   if (Status::WON == gameStatus) {
      cout << "Player wins" << endl;
   }
   else {
      cout << "Player loses" << endl;
   }
}

// roll dice, calculate sum and display results
unsigned int rollDice() {
   int die1{1 + rand() % 6}; // first die roll
   int die2{1 + rand() % 6}; // second die roll
   int sum{die1 + die2}; // compute sum of die values

   // display results of this roll
   cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << endl;
   return sum;
}

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <ctime>//enable program to perform time functions
#include <cstdlib> // contains prototypes for functions srand and rand

using namespace std;//program uses names from namespace std

/**************************************************************************************************/
//exercise 6.47 functions

//gobal variable
double balance = 12345.67;

//begin increaseBalance function
void increaseBalance(double amount){
    balance + amount;
}//end increaseBalance function

//begin printBalance function
void printBalance(){
    cout << "\nYour Balance is: " << balance << endl; 
}//end printBalance function

//begin placeWager function
double placeWager(){
    //variable declaration and definition
    double wagerAmount = 0.0;

    

    //while loop; loop will continue if the amount exceeds balance
    do{
        //print message and promt user to enter an amount
        cout << "\nEnter your wager: ";
        cin >> wagerAmount;
    }while(wagerAmount >= balance);//end while loop

    return wagerAmount;

}//end placeWager function

/**************************************************************************************************/

// roll dice, calculate sum and display results
unsigned int rollDice() {
   int die1{1 + rand() % 6}; // first die roll
   int die2{1 + rand() % 6}; // second die roll
   int sum{die1 + die2}; // compute sum of die values
  

   // display results of this roll
   cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << endl;
   return sum;
}

void playCrapsGame(){
    // scoped enumeration with constants that represent the game status 
   enum class Status {CONTINUE, WON, LOST}; // all caps in constants
    
    double wager = 0.0;

    printBalance();

    wager = placeWager();

   // randomize random number generator using current time
   srand(static_cast<unsigned int>(time(0)));

   unsigned int myPoint{0}; // point if no win or loss on first roll
   Status gameStatus; // can be CONTINUE, WON or LOST
   unsigned int sumOfDice{rollDice()}; // first roll of the dice

   // determine game status and point (if needed) based on first roll
   switch (sumOfDice) {
      case 7: // win with 7 on first roll
      case 11: // win with 11 on first roll           
         gameStatus = Status::WON;
         break;
      case 2: // lose with 2 on first roll
      case 3: // lose with 3 on first roll
      case 12: // lose with 12 on first roll             
         gameStatus = Status::LOST;
         break;
      default: // did not win or lose, so remember point
         gameStatus = Status::CONTINUE; // game is not over
         myPoint = sumOfDice; // remember the point
         cout << "Point is " << myPoint << endl;
         break; // optional at end of switch  
   }

   // while game is not complete
   while (Status::CONTINUE == gameStatus) { // not WON or LOST
      sumOfDice = rollDice(); // roll dice again

      // determine game status
      if (sumOfDice == myPoint) { // win by making point
         gameStatus = Status::WON;
      }
      else {
         if (sumOfDice == 7) { // lose by rolling 7 before point
            gameStatus = Status::LOST;
         }
      }
   }

   // display won or lost message
   if (Status::WON == gameStatus) {
      cout << "Player wins" << endl;
   }
   else {
      cout << "Player loses" << endl;
   }
}//end playCrapsGame function
