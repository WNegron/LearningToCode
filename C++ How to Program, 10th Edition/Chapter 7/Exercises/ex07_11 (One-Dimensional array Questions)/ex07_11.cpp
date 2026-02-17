/***************************************************************************************************

File Name: ex07_11.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.11 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.11 (One-Dimensional array Questions) Write statements that perform the following one-
dimensional array operations:

        a) Initialize the 10 elements of double array values to 0.5.

        b) Add 1 to every second element of double array values.

        c) Read 5 values from the user and store in the double array values.

        d) Print the 10 values of double array values in column format (2 decimal places) with
the first 5 values in one row and the last five directly underneath on the next row.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <algorithm> // contains sort and binary_search
#include <iomanip>//parameterized stream manipulators

//using directives; enables a program to use all the names in any standard C++ header
using namespace std;//program uses names from namespace std

// function main begins program execution
int main(){
    // declaring and initializing variables
    const size_t arraySize = 10;
    array<double, arraySize> x = {};

    //a) Initialize the 10 elements of double array values to 0.5.
    /*for (int i=0; i < arraySize; i++)
        x[i] = 0.5;*/
    for(double& values: x)
        values = 0.5;

    //b) Add 1 to every second element of double array values.
    for(int i=1; i<arraySize;i+=2)
        x[i] += 1.00;

    //c) Read 5 values from the user and store in the double array values.
    for (size_t i = 0; i < 5; i++)
    {
        /* code */
        cout << "Enter a double value: ";
        cin >> x[i];
    }
    

    //d) Print the 10 values of double array values in column format (2 decimal places) with
//the first 5 values in one row and the last five directly underneath on the next row.
    cout << fixed << setprecision(2);
    
    for (int i = 0; i < 10; ++i) {
        cout << setw(10) << x[i];
        if (i == 4) cout << "\n";   // newline after first 5
        }
        cout << "\n";

    return 0;// indicate that program ended successfully
}// end of main function