/***************************************************************************************************

File Name: ex06_21.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.21 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.21 (Multiple of 3) Write a program that inputs a series of integers and passes them one at a 
time to function isMultiple3, which uses the remainder operator to determine whether an integer is a 
multiple of 3. The function should take an integer argument and return true if the integer is a mul-
tiple of 3 and false otherwise.
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

//funciton prototype
bool isMultiple3(int);

void printMultiple(int);

int main(){
    //variables
    int num1 = 0, num2 = 0, num3 = 0;

    cout << "\nIs it a multiple of 3? Let's find out\n";
    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter a number: ";
    cin >> num2;

    cout << "Enter a number: ";
    cin >> num3;

    printMultiple(num1);
    printMultiple(num2);
    printMultiple(num3);
    
    return 0;//program ended successfully
}//end of main function

void printMultiple(int num){
    if(isMultiple3(num)){
        cout << endl << num << " is a multiple of 3" << endl;
    }//end of if
    else{
        cout << endl << num << " is NOT a multiple of 3" << endl;
    }//end of else
}//end of printMultiple function

bool isMultiple3(int num){
    if(num % 3 == 0){
        return true;
    }//end of if
    else{
        return false;
    }//end of else
}//end of isMultiple3 function





