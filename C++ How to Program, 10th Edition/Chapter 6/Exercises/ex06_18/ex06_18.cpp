/***************************************************************************************************

File Name: ex06_18.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.18 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

6.18 (Exponentiation) Write a function integerPower(base, exponent) that returns the value of 

        base ^ exponent

For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer 
and that base is an integer. Do not use any math library functions.
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

//function prototype
int integerPower(int,int);

int main(){
    int base = 0, exponent = 0;

    cout << "\nEnter base: ";
    cin >> base;

    cout <<"\nEnter exponent: ";
    cin >> exponent;

    if(exponent < 0){
        cout << "\nExponent can't be a negative number.\n";
        cout << endl;
    }//end of if
    else{
        cout << endl << base << " raise to the power of " << exponent << ": ";
        cout << integerPower(base,exponent) << endl;
    }//end of else

    return 0;//program ended successfully
}//end of main function

/*//iterative version
int integerPower(int base, int exponent){
    //variable
    int total = 1;

    //loop for exponent times
    for(unsigned int counter = 0; counter < exponent; ++counter){
        total *= base;
    }//end of for loop

    return total;
}//end of integerPower function */

//recursive version
int integerPower(int base, int exponent){
    if(exponent == 0){
        return 1;
    }//end of if
    else{
        return base * integerPower(base,exponent-1);
    }//end of else
}//end of integerPower function