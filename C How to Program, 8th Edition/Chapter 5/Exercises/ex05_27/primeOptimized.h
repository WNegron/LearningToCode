/***************************************************************************************************
File Name: primeOptimized.h
     Date: 2026-02-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
This is an updated verision to my orignal answer to this exercise. The original is save as ex05_27(original).c
My answer to exercise 5.27 using only the tools and methods taught up to chapter 5.

I rewrote the program to illustrea better the difference between n/2 and square root of n. I made use 'strcut' data 
type which is not introduce until chapter 10.

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
c) Initially, you might think that n/2 is the upper limit for which you must test to see
whether a number is prime, but you need only go as high as the square root of n. Why?
Rewrite the program, and run it both ways. Estimate the performance improvement.

FUNCTION isPrimeNaive(n)
        IF n <= 1
                RETURN false
        END IF

        ELSE
                FOR LOOP i FROM 2 TO n/2:
                        IF n % i == 0
                                RETURN flase
                        END IF
                END FOR loop
                RETURN true
        END ELSE
END FUNCTION isPrimeNaive

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
END FUNCTION isPrimeOptimized
--------------------------------------------    End Pseudocode    --------------------------------------------------

*******************************************************************************************************************/


#include <stdio.h>//standard input/output header
#include <stdbool.h>//bool data type
#include <math.h>

// Returns whether the number is prime and how many trial divisions were performed
// Returns a simple struct instead of std::pair
struct primeRes{
    bool is_prime;
    int trials;
};

typedef struct primeRes PrimeOpResult;


PrimeOpResult isPrimeOptimized(unsigned int number){
    PrimeOpResult result = {false, 0};

    if (number <= 1) {
        result.is_prime = false;
        result.trials = 0;
        return result;
    }

    // We only need to check up to sqrt(number)
    int sqrt_n = (int)floor(sqrt((double)number));

    for (int i = 2; i <= sqrt_n; i++) {
        result.trials++;

        if (number % i == 0) {
            result.is_prime = false;
            result.trials = 0;           // optional: reset trials if we want to show 0 when composite
            return result;
        }
    }

    // If we get here → no divisors found
    result.is_prime = true;
    return result;
}

void printPrimesOptimizedUpTo(int limit)
{
    int total_trials = 0;

    printf("\nPrime Numbers between 2 and %d:\n", limit);
    printf("=== Optimized method (checking up to √n) ===\n");
    printf("2\n");  // the only even prime

    for (int i = 3; i <= limit; i += 2) {
        PrimeOpResult res = isPrimeOptimized(i);
        total_trials += res.trials;

        if (res.is_prime) {
            printf("%d\n", i);
        }
    }

    printf("Total trials (divisions) performed: %d\n", total_trials);
}