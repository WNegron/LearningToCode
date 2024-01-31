/***************************************************************************************************

File Name: ex06_14.cpp
     Date: 2024-01-30
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.14 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

6.14 (Rounding Numbers) Function floor can be used to round a number to a specific decimal place. The 
statement:  
        
        y=floor(x* 10 + 0.5)/ 10;

rounds x to the tenths position (the first position to the right of the decimal point). The statement

        y=floor(x* 100 + 0.5)/ 100;

rounds x to the hundredths position (the second position to the right of the decimal point). Write a 
program that defines four functions to round a number x in various ways:

        a) roundToInteger(number)
        b) roundToTenths(number)
        c) roundToHundredths(number) 
        d) roundToThousandths(number)

For each value read, your program should print the original value, the number rounded to the nearest 
integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth and 
the number rounded to the nearest thousandth.
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions

using namespace std;//program uses names from namespace std

//function prototypes
double roundToInteger(double);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main(){
    //variables
    double x = 0.0;

    // set floating-point number format
    cout << fixed << setprecision(5);

    do{
        cout << "Enter a number (e.g. xx.zyzy or -1 to quit program): ";
        cin >> x;
        cout << endl;

        if(x != -1){
            cout << "\nOriginal: " << x << endl;
            cout << "Rounded to Integer: " << roundToInteger(x) << endl;
            cout << "Rounded to Tenths: " << roundToTenths(x) << endl;
            cout << "Rounded to Hundreths: " << roundToHundredths(x) << endl;
            cout << "Rounded to Thousandths: " << roundToThousandths(x) << endl;
        }//end if
        else{
            cout << "\nThank you! Come back again, bye-bye.\n\n";
        }
    }while(x != -1);//end of do...while
    return 0;//program ended successfully
}//end of main function

double roundToInteger(double x){
    return floor(x + 0.5);
}//end of roundToInteger function

double roundToTenths(double x){
    return floor(x * 10 + 0.5)/10;
}//end of roundToInteger function

double roundToHundredths(double x){
    return floor(x * 100 + 0.5)/100;
}//end of roundToInteger function

double roundToThousandths(double x){
    return floor(x * 1000 + 0.5)/1000;
}//end of roundToInteger function

