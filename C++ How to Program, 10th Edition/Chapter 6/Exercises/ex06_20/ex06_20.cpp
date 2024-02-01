/***************************************************************************************************

File Name: exXX_XX.cpp
     Date: XXXX-XX-XX
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise X.XX using only the tools and methods taught up to Chapter X.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.20 (Factors) Write a function isFactor that determines for a pair of integers whether the second is 
a factor of the first. The function should take two integer arguments and return true if the second 
is a factor of the first, false otherwise. Use this function in a program that inputs a series of 
pairs of integers.
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

//function protype
bool isFactor(int,int);

int main(){
    //variables
    int num1 = 0, num2 = 0;

    cout << "\nAre they factors? Let's find out\n";
    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Enter an integer: ";
    cin >> num2;

    if(isFactor(num1,num2)){
        cout << endl << num2 << " is a factor of " << num1 << endl;
    }//end of if
    else{
        cout << endl << num2 << " is NOT a factor of " << num1 << endl;
    }//end of else
    return 0;//program ended successfully
}//end of main function

bool isFactor(int num1, int num2){
    if( num1 % num2 == 0)
        return true;
    else
        return false;
}//end of isFactor function 

