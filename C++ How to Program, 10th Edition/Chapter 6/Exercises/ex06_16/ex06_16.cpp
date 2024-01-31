/***************************************************************************************************

File Name: ex06_16.cpp
     Date: 2024-01-30
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.16 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

6.16 (Random Numbers) Write statements that assign random integers to the variable n in the
following ranges:
    
    a) 0≤n≤3
    b) 1≤n≤50
    c) 2≤n≤44
    d) 500≤n≤678 
    e) –2≤n≤2
    f) –3≤n≤12
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <random>// contains C++11 random number generation features
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cstdlib> // contains prototypes for functions srand and rand

using namespace std;//program uses names from namespace std

int main(){
    //variables

    //a) 0≤n≤3
    cout << "Rnadom Numbers (0 ≤ n ≤ 3)\n";
    // use the default random-number generation engine to
    // produce uniformly distributed pseudorandom int values from 0 to 3
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(0,3);

    // loop 15 times
    for(unsigned int counter=1; counter <= 15; ++counter){
        // pick random number from 0 to 3 and output it
        cout << setw(10) << randomInt(engine);
        //if counter is divisible by 3, start a new line of output
        if(counter%3==0){ 
            cout << endl;
        }//end of if
    }//end of for

    //b) 1≤n≤50
     cout << "\nRnadom Numbers (1 ≤ n ≤ 50)\n";
    /*unsigned int seed=0; // stores the seed entered by the user
    cout << "Enter seed: ";
    cin >> seed;
    srand(seed); // seed random number generator */
    // loop 15 times
    for (unsigned int counter=1; counter <= 15; ++counter) { 
        // pick random number from 1 to 50 and output it
    cout << setw(10) << (1 + rand() % 50);
    //if counter is divisible by 5, start a new line of output
    if(counter%5==0){
         cout << endl;
      }//end of if
    }//end of for loop

    //c) 2≤n≤44
    cout << "\nRnadom Numbers (2 ≤ n ≤ 44)\n";
    uniform_int_distribution<unsigned int> randomNum(2,44);

    // loop 15 times
    for(unsigned int counter=1; counter <= 15; ++counter){
        // pick random number from 2 to 44 and output it
        cout << setw(10) << randomNum(engine);
        //if counter is divisible by 3, start a new line of output
        if(counter%5==0){ 
            cout << endl;
        }//end of if
    }//end of for


    //d) 500≤n≤678 
    cout << "\nRnadom Numbers (500 ≤ n ≤ 678)\n"; 
    // loop 15 times
    for (unsigned int counter=1; counter <= 15; ++counter) { 
        // pick random number from 500 to 678 and output it
        cout << setw(10) << (500 + rand() % 678);
        
        //if counter is divisible by 5, start a new line of output
        if(counter%5==0){
            cout << endl;
        }//end of if
    }//end of for loop

    //e) –2≤n≤2
    cout << "\nRnadom Numbers (-2 ≤ n ≤ 2)\n";
    uniform_int_distribution<int> randomNum1(-2,2);

    // loop 15 times
    for(unsigned int counter=1; counter <= 15; ++counter){
        // pick random number from 2 to 44 and output it
        cout << setw(10) << randomNum1(engine);
        //if counter is divisible by 3, start a new line of output
        if(counter%5==0){ 
            cout << endl;
        }//end of if
    }//end of for


    //f) –3≤n≤12
    cout << "\nRnadom Numbers (-3 ≤ n ≤ 12)\n"; 
    // loop 15 times
    for (unsigned int counter=1; counter <= 15; ++counter) { 
        // pick random number from 500 to 678 and output it
        cout << setw(10) << (-3 + rand() % 12);
        
        //if counter is divisible by 5, start a new line of output
        if(counter%5==0){
            cout << endl;
        }//end of if
    }//end of for loop


    return 0;//program ended successfully
}//end of main function

