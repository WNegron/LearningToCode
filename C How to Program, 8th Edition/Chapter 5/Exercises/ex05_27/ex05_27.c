/***************************************************************************************************
File Name: ex05_27.c
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

PROGRAM MAIN
        INT number
        INT choice
        BOOL done = FALSE

        DISPLAY "Prime Number Program"
        DISPLAY "--------------------"

        WHILE NOT done

                DISPLAY NEWLINE
                DISPLAY "MENU:"
                DISPLAY "1. Prime Checker - checks if a single number is a prime"
                DISPLAY "2. Print all primes between 2 and 10,000"
                DISPLAY "3. Quit"
                
                OUTPUT "Enter your choice (1-3): "
                INPUT choice

                SWITCH choice
                
                CASE 1:
                        DISPLAY "Prime Number checker (enter 0 to return to menu)"
                        DISPLAY "-----------------------------------------------------------"

                        OUTPUT "Enter a number: "
                        INPUT number

                        WHILE number >= 1
                                IF isPrime(number)
                                        DISPLAY number, "is prime"
                                END IF
                
                                ELSE
                                        DISPLAY number, "is not prime"
                                END ELSE

                                OUTPUT "Enter another number (or 0 to quit): "
                                INPUT number
                        END WHILE loop
                BREAK

                CASE 2:
                        printPrimeUpTo(10,000)
                BREAK

                CASE 3:
                        done = true
                        DISPLAY "Program ended."
                BREAK
                
                DEFAULT
                        DISPLAY "Invalid choice. Please try again."
                BREAK
                END SWITCH
        END WHILE
END PROGRAM MAIN


    a) Write a function that determines whether a number is prime.

FUNCTION isPrimeNumber(n)
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

END FUNCTION isPrimeNumber

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


***************************************************************************************************/

//#include <stdio.h>//standard input/output header
//#include <stdbool.h>//bool data type

#include "primeNumbers.h"
#include "primeNaive.h"
#include "primeOptimized.h"

//function main begins program execution
int main(void){
	//variable definition
    int number;// number enter by user
    int choice;// user will choose an option from the menu
    bool done = false;// will end the while loop when value is change to true

    //begin while loop
    while (!done){
        //clearScreen();//function to clear screen
        //display message and menu options for the user
        printf("Prime Number Program");
        printf("--------------------\n");
        printf("\nMenu: \n");
        printf("1. Prime Checker - checks if a single number is a prime.\n");
        printf("2. Print all primes between 2 and 10,000\n");
        printf("3. Prime Naive\n");
        printf("4. Prime Optimized\n");
        printf("5. Quit\n");

        // Prompt user to make a choice
        printf("Enter your choice (1-5): ");

        // Read the user's choice
        scanf("%d", &choice);

        //begin switch-case
        switch (choice){
            case 1:
                // display message
                printf("Prime Number checker (enter 0 to return to main menu)\n");
                printf("-----------------------------------------------------------\n\n");

                // prompt user for a number to check
                printf("Enter a number: ");
                scanf("%d", &number); //store number
        
                // while loop it will continue to repeat until user enters a 0 or a negative number
                while (number >= 1) {
                    if (isPrime(number)) {
                        printf("\n%d is a prime number.\n", number);
                    } else {
                        printf("\n%d is not a prime number.\n", number);
                    }//end of if...else
                                
                    // prompt user for another number or the quit input
                    printf("\nEnter another number (or 0 to return to main menu): ");
                    scanf("%d", &number);//reads user's number
                }//end of while loop
            break;

            case 2:
                printPrimesUpTo(10000);
            break;

            case 3:
                printPrimesNaiveUpTo(10000);
            break;

            case 4:
                printPrimesOptimizedUpTo(10000);
            break;

            case 5:
                done = true;
                puts("\nProgram ended.");
            break;

            default:
                puts("\nInvalid choice. Please try again.");
            break;
        }//end of switch-case

        printf("\n\n\n");//prints out new lines before display message and menu options again
    }//end of while loop
}//end function main