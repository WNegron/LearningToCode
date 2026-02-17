/***************************************************************************************************

File Name: ex07_08.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.08 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.8 (Write C++ Statements) Write C++ statements to accomplish each of the following:

            a) Display the value of element 5 of character array f.
            
            b) Input a value into element 3 of one-dimensional floating-point array b.
            
            c) Initialize each of the 4 elements of one-dimensional integer array g to 7.
           
            d) Total and display the elements of floating-point array c of 200 elements.
            
            e) Copy array a into the first portion of array b. Assume that both arrays contain
doubles and that arrays a and b have 17 and 41 elements, respectively.
            
            f) Determine and display the smallest and largest values contained in 999-element
floatingpoint array w.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

/*

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <algorithm> // contains sort and binary_search

//using directives; enables a program to use all the names in any standard C++ header
using namespace std;//program uses names from namespace std

//a) Display the value of element 5 of character array f.

cout << f[5];

            
//b) Input a value into element 3 of one-dimensional floating-point array b.

cin >> b[3]; 
b[3] = x;
b[3] = 1.5;
            
//c) Initialize each of the 4 elements of one-dimensional integer array g to 7.

for(int& gItems: g)
    gItems = 7;
           
//d) Total and display the elements of floating-point array c of 200 elements.

for(int cItems: c)
    total += cItems;
            
//e) Copy array a into the first portion of array b. Assume that both arrays contain
//doubles and that arrays a and b have 17 and 41 elements, respectively.

for(int i = 0; i < a.size(); i++){
        b[i] = a[i];
}
            
//f) Determine and display the smallest and largest values contained in 999-element
//floatingpoint array w.

sort(w.begin(), w.end());// sort contents of array w)

cout << "Smallest: " << w[0] << endl;
cout << "Largest: " << w[w.size()-1] << endl;


*/