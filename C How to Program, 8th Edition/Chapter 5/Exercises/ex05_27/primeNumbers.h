/***************************************************************************************************
File Name: primeNumbers.h
     Date: 2026-02-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
This is an updated verision to my orignal answer to this exercise. The original is save as ex05_27(original).c
My answer to exercise 5.27 using only the tools and methods taught up to chapter 5.

Description:
	5.27 (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For 
example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.

    a) Write a function that determines whether a number is prime.

    b) Use this function in a program that determines and prints all the prime numbers between 1 and 
    10,000. How many of these 10,000 numbers do you really have to test before being sure that you 
    have found all the primes?

    c) Initially you might think that n/2 is the upper limit for which you must test to see whether 
    a number is prime, but you need go only as high as the square root of n. Rewrite the program, 
    and run it both ways. Estimate the performance improvement.

----------------------------------------------    Pseudocode    ----------------------------------------------------
a) Write a function that determines whether a number is prime.

FUNCTION isPrime(n)
        IF n <= 1
                RETURN false
        END IF

        ELSE
                FOR LOOP i FROM 2 TO SQUAREROOT OF n (inclusive):
                        IF n % i == 0
                                RETURN flase
                        END IF
                END FOR loop
                RETURN true
        END ELSE

END FUNCTION isPrime

 b) Use this function in a program that determines and prints all the prime numbers between 2 
and 10,000. How many of these numbers do you really have to test before being sure that you’ve found 
all the primes?

FUNCTION printPrimesUpTo(limit)
        DISPLAY "Prime number between 2 and ", limit,":"
        DISPLAY 2 //the only even prime

        FOR LOOP i FROM 3 TO limit STEP 2 //CHECK ONLY ODD NUMBERS
                IF isPrime(i)
                        DISPLAY i
                END IF
        END FOR LOOP

--------------------------------------------    End Pseudocode    --------------------------------------------------

*******************************************************************************************************************/


#include <stdio.h>//standard input/output header
#include <stdbool.h>//bool data type

// isPrime function begins
bool isPrime(unsigned int number)
{
    // Numbers less than or equal to 1 are not prime
    if (number <= 1) {
        return false;
    }

    // Check for divisibility from 2 to number-1
    for (unsigned int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }//end if
        
    }//end for loop

    // If no divisors were found, it's prime
    return true;
}//end of isPrime function

//printPrimeUpTo function begins
void printPrimesUpTo(int limit)
{
    printf("\nPrime Numbers between 2 and %d:\n", limit);
    printf("2\n");

    //checks only odd numbers after 2
    //for loop to print all prime number up to 10,000
    for (int i = 3; i <= limit; i += 2) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }//end if   
    }//end for loop
}//end of printPrimeUpTo function