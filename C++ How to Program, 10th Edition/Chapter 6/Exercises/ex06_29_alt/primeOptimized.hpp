/********************************************************************************************************************

File Name: primeOptimized.hpp
     Date: 2026-02-09
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.29 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.29 (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For 
example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
    
        a) Write a function that determines whether a number is prime.

        b) Use this function in a program that determines and prints all the prime numbers between 2 
and 10,000. How many of these numbers do you really have to test before being sure that you’ve found 
all the primes?

        c) Initially, you might think that n/2 is the upper limit for which you must test to see
whether a number is prime, but you need only go as high as the square root of n. Why?
Rewrite the program, and run it both ways. Estimate the performance improvement.

   
----------------------------------------------    Pseudocode    ----------------------------------------------------
c) Initially, you might think that n/2 is the upper limit for which you must test to see
whether a number is prime, but you need only go as high as the square root of n. Why?
Rewrite the program, and run it both ways. Estimate the performance improvement.

FUNCTION isPrimeOptimized(n)
        IF n <= 1
                RETURN false
        END IF

        ELSE
                FOR LOOP i FROM 2 TO SQUAREROOT OF n:
                        IF n % i == 0
                                RETURN flase
                        END IF
                END FOR loop
                RETURN true
        END ELSE
END FUNCTION isPrime

FUNCTION printPrimeOptimizedUpTo(limit)
        DISPLAY "Prime number between 2 and ", limit,":"
        DISPLAY 2 //the only even prime

        FOR LOOP i FROM 3 TO limit STEP 2 //CHECK ONLY ODD NUMBERS
                IF isPrime(i)
                        DISPLAY i
                END IF
        END FOR LOOP

--------------------------------------------    End Pseudocode    --------------------------------------------------

*********************************************************************************************************************/

#include <iostream> //enables program to perform input and output
#include <cmath> //enable program to use mathematical functions that are part of the header file

#include <utility>//enables program to use pair

using namespace std; //program uses names from the std namespace

// isPrimeOptimized function begins
pair<bool,int> isPrimeOptimized(unsigned int number){
    int trials = 0;
    //int sqrt_n = static_cast<int>(std::floor(std::sqrt(static_cast<double>(n))));
    //check to see if the number is 1
    if (number <= 1)
    {   /* code */
        return {false, 0};// returns a pair: first = false, second = 0
    }//end if 

    else{
        // for loop
        for (int i = 2; i < floor(sqrt((double) number)); i++)
        {
            ++trials;
            //if the number is divisible by any of the numbers preceding it
            //then it is not a prime number.
            if(number % i == 0){
                return {false, 0};// returns a pair: first = false, second = 0
            }//end of if modulo
            
            else{
                continue;
            }//end of else

        }//end of for loop

        //if the number is not divisible by any of the numbers preceding it
        //then the number is a prime number.
        return {true, trials};// returns a pair: first = true, second = trials
    }//end of else
}//end of isPrimeOptimized function

//printPrimeOptimizedUpTo function begins
void printPrimeOptimizedUpTo(int limit){
    int total_trials = 0;
    bool is_prime = false;
    int trials = 0;

    cout <<"\nPrime Numbers between 2 and 10,000:" << endl;
    cout << "=== Optimized method (checking up to √n) ===" << endl;
    cout << 2 << endl;//the only even prime

    //for loop to print all prime number up to 10,000
    for(int i = 3; i <= limit; i+=2){
        auto [is_prime, trials] = isPrimeOptimized(i);
        total_trials += trials;
        //if to determine if number is a prime
        if(is_prime){
            cout << i << endl;
        }//end if

        else{
            continue;
        }//end else             
    }//end of for loop

    cout << "Total trials (divisions) performed: " << total_trials << endl;
}//end of printPrimeOptemizedUpTo function
