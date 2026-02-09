#include <iostream> //enables program to perform input and output
#include <cmath> //enable program to use mathematical functions that are part of the header file

using namespace std; //program uses names from the std namespace

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