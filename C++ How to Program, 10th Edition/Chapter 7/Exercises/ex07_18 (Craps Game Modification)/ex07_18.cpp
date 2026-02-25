/***************************************************************************************************

File Name: ex07_18.cpp
     Date: 2026-02-18
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.18 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.18 (Craps Game Modification) Modify the program of Fig. 6.9 to play 1000 games of craps.
The program should keep track of the statistics and answer the following questions:

    a) How many games are won on the 1st roll, 2nd roll, …, 20th roll, and after the 20th roll?

    b) How many games are lost on the 1st roll, 2nd roll, …, 20th roll, and after the 20th roll?

    c) What are the chances of winning at craps? [Note: You should discover that craps is one
    of the fairest casino games. What do you suppose this means?]

    d) What’s the average length of a game of craps?

    e) Do the chances of winning improve with the length of the game?

-------------------------------------    Pseudocode    ---------------------------------------------
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

 **************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************


-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators

//clearScreen Function difinition
void clearScreen() {
    // clears screen
    // moves cursor to top-left (1,1)
    std::cout << "\033[2J\033[H";   // or "\x1B[2J\x1B[H"
}//end clearScreen function

// pause function definition
void pause(){
    std::cout << "\nPress Enter to continue . . . ";
    
    // Clear error flags and discard everything until newline
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    // Wait for the user to press Enter
    std::cin.get();
}//end pause function

//rollDice function definition
//roll dice, calculate sum and display results
unsigned int rollDice(){
    // declaring and initializing variables
    int die1 = 0;
    int die2 = 0;
    int sum = 0;

    //simulated dice roll
    die1 = rand()%6 + 1;
    die2 = rand()%6 + 1;
    sum = die1 + die2;

    std::cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << std::endl;
   return sum;
}//end rollDice function

// function main begins program execution
int main(){
    // declaring and initializing variables
    const int arraySize = 22;
    std::array<int, arraySize> frequencyWins{};
    std::array<int, arraySize> frequencyLost{};
    const int TOTAL_GAMES = 1000;//play a 1,000 games
    int games = 0; // how many games are played counter

    // Arrays: index 1 = first roll, index 2 = second roll, ..., index 20 = 20th roll
    // index 0 will be used for "after 20th roll" (or more precisely: 21st roll and beyond)
    //int winsByRoll[21]  = {0};   // winsByRoll[1] = won on 1st roll, etc.
    //int lossesByRoll[21] = {0};
    int totalWins = 0;
    int totalGamesWithPoint = 0;   // games that went to "point" phase
    int totalRolls = 0;// sum of all rolls across all games

    // scoped enumeration with constants that represent the game status 
   enum class Status {CONTINUE, WON, LOST}; // all caps in constants

   // randomize random number generator using current time
   srand(static_cast<unsigned int>(time(0)));

   clearScreen();//clearScreen function call

   std::cout << "Simulating " << TOTAL_GAMES<< " dice rolls...\n\n";

   while (games < TOTAL_GAMES){
      unsigned int myPoint{0}; // point if no win or loss on first roll
      int rolls = 0; //how many times dice are rolled

      Status gameStatus; // can be CONTINUE, WON or LOST
      unsigned int sumOfDice{rollDice()}; // first roll of the dice
      rolls++;//increase tally for every dice rolled

      // determine game status and point (if needed) based on first roll
      switch (sumOfDice) {
         case 7: // win with 7 on first roll
         case 11: // win with 11 on first roll           
            gameStatus = Status::WON;
            frequencyWins[rolls]++;//games won first roll
            totalWins++;
            break;
         case 2: // lose with 2 on first roll
         case 3: // lose with 3 on first roll
         case 12: // lose with 12 on first roll             
            gameStatus = Status::LOST;
            frequencyLost[rolls]++;//games lost on first roll
            break;
         default: // did not win or lose, so remember point
            gameStatus = Status::CONTINUE; // game is not over
            totalGamesWithPoint++;
            myPoint = sumOfDice; // remember the point
            std::cout << "Point is " << myPoint << std::endl;
            break; // optional at end of switch  
      }//end of switch-case

      // while game is not complete
      while (Status::CONTINUE == gameStatus){ // not WON or LOST
         sumOfDice = rollDice(); // roll dice again
         rolls++;//increase tally for every dice rolled

         // determine game status
         if (sumOfDice == myPoint) { // win by making point
            gameStatus = Status::WON;
            totalWins++;
            if(rolls < 21){
               frequencyWins[rolls]++;//games won on 2nd roll and above
            }//end if
            else{
               frequencyWins[21]++;//games won after 20th roll and above
            }
         }//end if
         else {
            if (sumOfDice == 7) { // lose by rolling 7 before point
               gameStatus = Status::LOST;
               if(rolls < 21){
                  frequencyLost[rolls]++;//games lost on 2nd roll or above
               }//end if
               else{
                  frequencyLost[21]++;//games lost after 20th roll and above
               }//end else
            }//end if
      }//end else
   }//end while loop

   // display won or lost message
   if (Status::WON == gameStatus) {
      std::cout << "Player wins" << std::endl;
   }
   else {
      std::cout << "Player loses" << std::endl;
   }//end else
   
   //frequencyRolls[games] = rolls;
   games++;//increase tally
   totalRolls += rolls;//reset roll count for next game
   }//end while games loop

   std::cout << "\n" << std::string(40,'-') << "\n";
   std::cout << "Roll Frequency per Game\n";
   std::cout << std::string(40,'-') << "\n";
   std::cout << std::setw(4) << "Games";
   std::cout << std::setw(11) << "WON";
   std::cout << std::setw(15) << "LOST\n";
   std::cout << std::string(40,'-') << "\n";

   //dice roll frequency per game
   for (size_t i = 1; i < arraySize; i++){
      std::cout << std::setw(4) << i;
      std::cout << std::setw(12) << frequencyWins[i];
      std::cout << std::setw(13) << frequencyLost[i] << "\n";
    }//end dice roll frequency per game for loop 

    // ────────────────────────────────────────────────
    // Output results
    // ────────────────────────────────────────────────

    std::cout << "\nResults after " << TOTAL_GAMES << " games of craps\n";
    std::cout << std::string(50, '-') << "\n";

    std::cout << "\nWins by roll number:\n";
    for (int i = 1; i <= 20; ++i) {
        std::cout << "Roll " << std::setw(2) << i << ": " << frequencyWins[i] << " wins\n";
    }
    std::cout << "After 20th roll: " << frequencyWins[0] << " wins\n";

    std::cout << "\nLosses by roll number:\n";
    for (int i = 1; i <= 20; ++i) {
        std::cout << "Roll " << std::setw(2) << i << ": " << frequencyLost[i] << " losses\n";
    }
    std::cout << "After 20th roll: " << frequencyLost[0] << " losses\n";

    std::cout << "\nSummary:\n";
    std::cout << "Total wins:           " << totalWins << " (" 
         << std::fixed << std::setprecision(2) 
         << (totalWins * 100.0 / TOTAL_GAMES) << "%)\n";
    std::cout << "Total losses:         " << (TOTAL_GAMES - totalWins) << "\n";
    std::cout << "Probability of winning: " 
         << (totalWins * 100.0 / TOTAL_GAMES) << "%\n";
    std::cout << "Average length of game: " 
         << std::fixed << std::setprecision(2) 
         << (static_cast<double>(totalRolls) / TOTAL_GAMES) << " rolls\n";

    std::cout << "\nGames that reached the point phase: " 
         << totalGamesWithPoint << " (" 
         << (totalGamesWithPoint * 100.0 / TOTAL_GAMES) << "%)\n";

       
    return 0;// indicate that program ended successfully
}// end of main function