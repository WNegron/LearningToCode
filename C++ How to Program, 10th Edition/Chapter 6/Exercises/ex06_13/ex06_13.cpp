/***************************************************************************************************

File Name: ex06_13.cpp
     Date: 2024-01-30
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.13 using only the tools and methods taught up to Chapter X.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
6.13 (Rounding Numbers) An application of function floor is rounding a value to the nearest integer. 
The statement:
                
                y = floor(x + 0.5);

rounds the number x to the nearest integer and assigns the result to y. Write a program that reads 
several numbers and uses the preceding statement to round each of these numbers to the nearest integer. 
For each number processed, print both the original number and the rounded number.
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <cmath>

using namespace std;//program uses names from namespace std

int main(){
    double x=0.0,y=0.0;

    do{
        cout << "Please enter a number: ";
        cin >> x;

        if(x!=-1){
            y = floor(x + 0.5);

            cout << "\nOriginal: " << x << endl;
            cout <<"Rounded: " << y << endl;
        }//end of if
        else{
            cout << "Thank you. Please come again. Bye, bye\n";
        }
    }while(x != -1);//end of do...while
    return 0;//program ended successfully
}//end of main function
