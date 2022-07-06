/***************************************************************************************************
File Name: ex05_12-14.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.12, 5.13, and 5.14 using only the tools and methods taught up to chapter 5.

Description:
	5.12 Answer each of the following questions.
        a) What does it mean to choose numbers “at random”?
        b) Why is the rand function useful for simulating games of chance?
        c) Why would you randomize a program by using srand? Under what circumstances is it 
desirable not to randomize?
        d) Why is it often necessary to scale and/or shift the values produced by rand?

    5.13 Write statements that assign random integers to the variable n in the following ranges: 
        a) 1 ≤ n ≤ 2
        b) 1 ≤ n ≤ 100
        c) 0 ≤ n ≤ 9
        d) 1000 ≤ n ≤ 1112 
        e) –1 ≤ n ≤ 1
        f) –3 ≤ n ≤ 11

    5.14 For each of the following sets of integers, write a single statement that will print a 
number at random from the set.
        a) 2,4,6,8,10.
        b) 3,5,7,9,11.
        c) 6, 10, 14, 18, 22.
----------------------------------------------------------------------------------------------------
Answers:
    5.12 a) What does it mean to choose numbers “at random”?
            Numbers are selected from a predefine sample. Where each number from the set has an equal 
            chance (or probability) of being chosen each time rand is called.
            e.g. rand() selects a number from 0 to RAND_MAX, or from 1 to 6

         b) Why is the rand function useful for simulating games of chance?


         c) Why would you randomize a program by using srand? Under what circumstances is it 
desirable not to randomize?
         d) Why is it often necessary to scale and/or shift the values produced by rand?

***************************************************************************************************/

#include <stdio.h>//standard input/output header
#include <stdlib.h>//allows numbers conversions, text conversions, memory allocation, randomization
#include <time.h> // contains prototype for function time

//function main begins program execution
int main(void){

    // randomize random number generator using current time
    srand(time(NULL));

    //variable definition
    int n = 0;

    //5.13 Write statements that assign random integers to the variable n in the following ranges:
    printf("\n%s\n","Exercise 5.13:"); 
    n = 1 + rand() % 1;//a) 1 ≤ n ≤ 2
    printf("\n%s %d\n","random integer, \"a) 1 ≤ n ≤ 2\", is ", n);//print the value of n

    n = 1 + rand() % 100;//b) 1 ≤ n ≤ 100
    printf("\n%s %d\n","random integer, \"b) 1 ≤ n ≤ 100\", is ", n);//print the value of n

    n = rand() % 9;//c) 0 ≤ n ≤ 9
    printf("\n%s %d\n","random integer, \"c) 0 ≤ n ≤ 9\", is ", n);//print the value of n

    n = 1000 + rand() % 112;//d) 1000 ≤ n ≤ 1112 
    printf("\n%s %d\n","random integer, \"a) 1000 ≤ n ≤ 1112\", is ", n);//print the value of n
    
    n = -1 + rand() % 2;//e) –1 ≤ n ≤ 1
    printf("\n%s %d\n","random integer, \"e) –1 ≤ n ≤ 1\", is ", n);//print the value of n
    
    n = -3 + rand() % 14;//f) –3 ≤ n ≤ 11
    printf("\n%s %d\n","random integer, \"f) –3 ≤ n ≤ 11\", is ", n);//print the value of n

    printf("\n%s\n", "-----------------------------------------------------------");

    

    //5.14 For each of the following sets of integers, write a single statement that will print a 
    //number at random from the set.
    printf("\n%s\n","Exercise 5.14:");
    
    enum evenNumber{ 2, 4, 6, 8, 10};
    enum evenNumber num;
    n = rand() % 5; //a) 2,4,6,8,10.
    printf("\n%s %d\n","random integer, \"a) 2,4,6,8,10.\", is ", num{n});//print the value of n 
    
    n = 3 + rand() % 8; //b) 3,5,7,9,11.
    (n % 2 == 1) ? n : (n += 1);
    printf("\n%s %d\n","random integer, \"b) 3,5,7,9,11.\", is ", n);//print the value of n 
    
    n = 6 + rand() % 16; //c) 6, 10, 14, 18, 22.
    printf("\n%s %d\n","random integer, \"c) 6, 10, 14, 18, 22.\", is ", n);//print the value of n 

}//end function main