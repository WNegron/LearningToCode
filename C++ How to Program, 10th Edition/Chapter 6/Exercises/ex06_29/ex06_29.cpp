/********************************************************************************************************************

File Name: ex06_29.cpp
     Date: 2026-02-04
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

FUNCTION PROTOTYPE isPrime(int n)

PROGRAM MAIN
        INT number

        DISPLAY "Prime Number checker (enter 0 or a negative number to quit)"
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

        DISPLAY "Program ended."
END PROGRAM MAIN

a) Write a function that determines whether a number is prime.

FUNCTION isPrime(n)
        IF n <= 1
                RETURN false
        END IF

        ELSE
                FOR LOOP i FROM 2 TO n:
                        IF n % i == 0
                                RETURN flase
                        END IF
                END FOR loop
                RETURN true
        END ELSE

END FUNCTION isPrime

******  for the next part I will be making a function as part of the same program I will have it run 
after the user  decides to quit the program by entering 0 or a negative number ********************

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

2nd version of main
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
END FUNCTION isPrime

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

                

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <iostream> //enables program to perform input and output
#include <cmath> //enable program to use mathematical functions that are part of the header file


using namespace std; //program uses names from the std namespace

//function prototypes
bool isPrime(unsigned int );//bool data type this function will return true if the number is a prime or false if not.
bool isPrimeNaive(unsigned int);
bool isPrimeOptemized(unsigned int);

void printPrimeUpTo(int);//void data type this function does not return a value, it will simply print prime numbers
void printPrimeNaiveUpTo(int);
void printPrimeOptemizedUpTo(int);

int totalTrials(int);

/*function to clear screen using ANSI codes
ANSI Codes
\033[2J clears the entire screen.
\033[1;1H moves the cursor to the top-left corner. */
void clearScreen(){
cout << "\033[2J\033[1;1H"; // Clears screen and moves cursor
}//end of clearScreen function

// main function begins program
int main(){

        // declaration and initializing variables
        int number;// number enter by user
        int choice;// user will choose an option from the menu
        bool done = false;// will end the while loop when value is change to true

        //begin while loop
        while (!done){
                 //clearScreen();//function to clear screen
                //display message and menu options for the user
                cout << "Prime Number Program" << endl;
                cout << "--------------------" << endl;

                cout << "\nMenu: " << endl;
                cout << "1. Prime Checker - checks if a single number is a prime." << endl;
                cout << "2. Print all primes between 2 and 10,000" << endl;
                cout << "3. Prime Naive" << endl;
                cout << "4. Prime Optimized" << endl;
                cout << "5. Quit" << endl;

                //prompt user to make a choice
                cout << "Enter your choice (1-5): ";
                cin >> choice;//reads user's choice

                //begin switch-case
                switch (choice){
                case 1:
                        // display message
                        cout << "Prime Number checker (enter 0 to return to main menu)" << endl;
                        cout << "-----------------------------------------------------------" << endl;

                        // prompt user for a number to check
                        cout << "Enter a number: ";
                        cin >> number; //store number
        
                        // while loop it will continue to repeat until user enters a 0 or a negative number
                        while(number >= 1){
                                if (isPrime(number)){
                                        cout << "\n" << number << ", is a prime number." << endl;
                                }//end of if isPrime
                                else{
                                        cout << "\n" << number << ", is not a prime number." << endl;
                                }//end of else
                                
                                // prompt user for another number or the quit input
                                cout << "\nEnter another number (or 0 to quit): ";
                                cin >> number;//reads user's number
                        }//end of while loop
                break;

                case 2:
                        printPrimeUpTo(10000);
                break;

                case 3:
                        printPrimeNaiveUpTo(10000);
                break;

                case 4:
                        printPrimeOptemizedUpTo(10000);
                break;

                case 5:
                        done = true;
                        cout << "\nProgram ended." << endl;
                break;

                default:
                        cout << "\nInvalid choice. Please try again." << endl;
                break;
                }//end of switch-case

                cout << "\n\n\n";//prints out new lines before display message and menu options again
                //clearScreen();//function to clear screen
        }//end of while loop

return 0; // indicate that program ended successfully
} // end of function main


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

/************************************************************************************************
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
END FUNCTION isPrime

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
*****************************************************************************************************/

bool isPrimeNaive(unsigned int number){// isPrime function begins
        //check to see if the number is 1
        if (number <= 1)
        {       /* code */
                return false;
        }//end if 

        else{
                // for loop
                for (int i = 2; i < number/2 ; i++)
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

bool isPrimeOptemized(unsigned int number){// isPrime function begins
        //check to see if the number is 1
        if (number <= 1)
        {       /* code */
                return false;
        }//end if 

        else{
                // for loop
                for (int i = 2; i < floor(sqrt((double) number)); i++)
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

void printPrimeNaiveUpTo(int limit){//printPrimeUpTo function begins
        cout <<"\nPrime Numbers between 2 and 10,000:" << endl;
        cout << 2 << endl;

        //for loop to print all prime number up to 10,000
        for(int i = 3; i <= limit; i+=2){
                //if to determine if number is a prime
                if(isPrimeNaive(i)){
                        cout << i << endl;
                }//end if

                else{
                        continue;
                }//end else             
        }//end of for loop
}//end of printPrimeNaiveUpTo function

void printPrimeOptemizedUpTo(int limit){//printPrimeUpTo function begins
        cout <<"\nPrime Numbers between 2 and 10,000:" << endl;
        cout << 2 << endl;

        //for loop to print all prime number up to 10,000
        for(int i = 3; i <= limit; i+=2){
                //if to determine if number is a prime
                if(isPrimeOptemized(i)){
                        cout << i << endl;
                }//end if

                else{
                        continue;
                }//end else             
        }//end of for loop
}//end of printPrimeOptemizedUpTo function
