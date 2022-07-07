/***************************************************************************************************
File Name: ex05_27.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.27 using only the tools and methods taught up to chapter 5.

Description:
	5.27 (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For 
example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.

    a) Write a function that determines whether a number is prime.

    b) Use this function in a program that determines and prints all the prime numbers between 1 and 
    10,000. How many of these 10,000 numbers do you really have to test before being sure that you 
    have found all the primes?

    c) Initially you might think that n/2 is the upper limit for which you must test to see whether 
    a number is prime, but you need go only as high as the square root of n. Re-write the program, 
    and run it both ways. Estimate the performance improvement.

***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include <stdbool.h>// allows the use of bool, true, and false
#include <math.h>//math functions header

//function prototype
bool isPrime(int number);//determine if the number is a prime

//function main begins program execution
int main(void){
	//variable definition
    int x = 0;
    bool primeYesNo;
    int size = 10000;
    int counter = 1;

    printf("%s \n","Enter a number to determine if it is a prime");
    printf("%s","Enter a number: ");//prompt user
    scanf("%d",&x);//read user input

    //a) Write a function that determines whether a number is prime.
    primeYesNo = isPrime(x);//determine if number entered by user is a prime

    if(primeYesNo){
        printf("%d %s\n",x, "is a prime number.");
    }//end if
    else{
        printf("%d %s\n",x, "is not a prime number.");
    }//end else

    //b) prints all the prime numbers between 1 and 10,000.
    printf("\n%s","Prime numbers between 1 and 10,000\n");

    for(int i = 2; i < size; i++){
        primeYesNo = isPrime(i);//determine if number entered by user is a prime
        
        if(primeYesNo){
            printf("%d, ",i);
            if(counter == 15){
                printf("\n");
                counter = 1;
            }//end inner if
            else{
                ++counter;
            }//end inner else
        }//end if
        else{
            continue;
        }//end else
    }//end for

    //c)to see whether a number is prime; you might think that n/2, need go only square root of n
     printf("\n%s","\nPrime numbers between 1 and 10,000\n");
     //size = sqrt(size);
     counter = 1;

    for(int i = 2; i < size; i++){
        primeYesNo = isPrime(i);//determine if number entered by user is a prime
        
        if(primeYesNo){
            printf("%d, ",i);
            if(counter == 15){
                printf("\n");
                counter = 1;
            }//end inner if
            else{
                ++counter;
            }//end inner else
        }//end if
        else{
            continue;
        }//end else
    }//end for

    printf("\n");//print newline
}//end function main

bool isPrime(int number){
    int counter = 1;
    //c)to see whether a number is prime; you might think that n/2, need go only square root of n
    int counterRoot = sqrt(number);

    //for loop
    for(int i = 2; i < number; i++){
        if((number % i) == 0){ 
            break;
        }//end if
        else{
            ++counter;
            //c)to see whether a number is prime; you might think that n/2, need go only square root of n
            if(counter >= counterRoot){
                break;
            }//end if
        }//end else
    }//end for

    if(counter >= counterRoot){
        return true;
    }//end if
    else{
        return false;
    }//end else
}//end function isPrime