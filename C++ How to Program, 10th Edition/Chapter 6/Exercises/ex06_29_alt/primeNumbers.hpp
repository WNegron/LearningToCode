#include <iostream> //enables program to perform input and output
#include <cmath> //enable program to use mathematical functions that are part of the header file

using namespace std; //program uses names from the std namespace

/******************************************************************************************************
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
***************************************************************************************************/
bool isPrime(unsigned int number){// isPrime function begins
        
        //check to see if the number is 1
        if (number <= 1)
        {
                /* code */
                return false;
        }//end if 

        else{
                // for loop
                for (int i = 2; i < number; i++)
                {
                        //if the number is divisible by any of the numbers preceding it
                        //then it is not a prime number.
                        if(number % i == 0){
                                return false;
                        }//end of if modulo
                        else{
                                continue;
                        }//end of else

                }//end of for loop

                //if the number is not divisible by any of the numbers preceding it
                //then the number is a prime number.
                return true;
        }//end of else
        
}//end of isPrime function

/****************************************************************************************************
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
****************************************************************************************************/
void printPrimeUpTo(int limit){//printPrimeUpTo function begins
        cout <<"\nPrime Numbers between 2 and 10,000:" << endl;
        cout << 2 << endl;

        //for loop to print all prime number up to 10,000
        for(int i = 3; i <= limit; i+=2){
                //if to determine if number is a prime
                if(isPrime(i)){
                        cout << i << endl;
                }//end if

                else{
                        continue;
                }//end else             
        }//end of for loop
}//end of printPrimeUpTo function