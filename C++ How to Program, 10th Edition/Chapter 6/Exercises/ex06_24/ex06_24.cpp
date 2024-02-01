/***************************************************************************************************

File Name: ex06_24.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.24 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:


6.24 (Separating Digits) Write program segments that accomplish each of the following:

    a) Calculate the integer part of the quotient when integer a is divided by integer b.
    b) Calculate the integer remainder when integer a is divided by integer b.
    c) Use the program pieces developed in (a) and (b) to write a function that inputs an integer 
between 1 and 32767 and prints it as a series of digits, each pair of which is separated by two 
spaces. For example, the integer 4562 should print as follows:

4   5   6   2
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output
#include <iomanip>//parameterized stream manipulators

using namespace std;//program uses names from namespace std

//funciton prototype
void separateDigits(int);


int main(){
    //variables
    int a = 0, b = 0, num = 0;

    //code
    //prompt user
    cout << "\nEnter an integer: ";
    cin >> a;
    cout << "Enter an integer: ";
    cin >> b;
    cout << "Enter a number between 1 and 32767: ";
    cin >> num;

    //a) Calculate the integer part of the quotient when integer a is divided by integer b.
    cout << "\nQuotient: " << a/b << endl;

    //b) Calculate the integer remainder when integer a is divided by integer b.
    cout << "\nRemainder: " << a%b << endl;

    separateDigits(num);//function call

    return 0;//program ended successfully
}//end of main function


/* c) Use the program pieces developed in (a) and (b) to write a function that inputs an integer 
between 1 and 32767 and prints it as a series of digits, each pair of which is separated by two 
spaces. For example, the integer 4562 should print as follows: 4   5   6   2 */
void separateDigits(int num){

    cout << endl << num / 10000;
    num %= 10000;
    cout << "  " << num / 1000;
    cout << endl;

}//end of separateDigits function
