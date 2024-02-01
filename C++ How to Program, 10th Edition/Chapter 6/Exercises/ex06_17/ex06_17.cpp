/****************************************************************************************************

File Name: ex06_17.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.17 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.17 (Random Numbers) Write a single statement that prints a number at random from each of the 
following sets:
        
        a) 0,3,6,9,12.
        b) 3,5,7,9,11,13. 
        c) 6, 10, 14, 18.
    
****************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features

/* #include "headerFileName.hpp"//enable program to use function from headerFileNames */

using namespace std;//program uses names from namespace std

int main(){
    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));
    
    //a) 0,3,6,9,12.
    cout << "\nRnadom Numbers (0,3,6,9,12)\n"; 
    // use the default random-number generation engine to
    // produce uniformly distributed pseudorandom int values from 0 to 3
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0,12);

    // loop 15 times
    for(unsigned int counter=1; counter <= 15; ++counter){
        // pick random number from 0 to 3 and output it
        cout << setw(10) << randomInt(engine);
        //if counter is divisible by 3, start a new line of output
        if(counter%3==0){ 
            cout << endl;
        }//end of if
    }//end of for


    //b) 3,5,7,9,11,13. 
     cout << "\nRnadom Numbers (3,5,7,9,11,13)\n"; 
    // loop 15 times
    for (unsigned int counter=1; counter <= 15; ++counter) { 
        // pick random number from 3,5,7,9,11,13 and output it
        cout << setw(10) << (1 + rand() % 11) + 2;
        
        //if counter is divisible by 3, start a new line of output
        if(counter%3==0){
            cout << endl;
        }//end of if
    }//end of for loop

    //c) 6, 10, 14, 18.
    int cNumber = 0;
    cout << "\nRandom Numbers (6, 10, 14, 18)\n";
    //loop 10 times
    for(unsigned int counter = 1; counter <= 10; ++counter){
        //pick random number from 0 to 3
        cNumber = rand() % 4;

        switch (cNumber){
        case 0:
            cout << setw(10) << 6;
            break;
        case 1:
            cout << setw(10) << 10;
            break;
        case 2:
            cout << setw(10) << 14;
            break;
        case 3:
            cout << setw(10) << 18;
            break;
        default:
            cerr << "\nError! Error! Error!\n"; 
            break;
        }//end of switch

        //if counter is divisible by 5, start a new line
        if(counter%5 == 0){
            cout << endl;
        }//end of if


    }//end of for loop

    return 0;//program ended successfully
}//end of main function

