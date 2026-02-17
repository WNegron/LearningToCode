/***************************************************************************************************

File Name: ex07_09.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.09 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.9 (Two-Dimensional array Questions) Consider a 2-by-3 integer array t.

        a) Write a declaration for t.

        b) How many rows does t have?

        c) How many columns does t have?

        d) How many elements does t have?

        e) Write the names of all the elements in row 1 of t.

        f) Write the names of all the elements in column 2 of t.

        g) Write a statement that sets the element of t in the first row and second column to zero.

        h) Write a series of statements that initialize each element of t to zero. Do not use a loop.

        i) Write a nested counter-controlled for statement that initializes each element of t to zero.

        j) Write a nested range-based for statement that initializes each element of t to zero.

        k) Write a statement that inputs the values for the elements of t from the keyboard.

        l) Write a series of statements that determine and display the smallest value in array t.

        m) Write a statement that displays the elements in row 0 of t.

        n) Write a statement that totals the elements in column 2 of t.

        o) Write a series of statements that prints the array t in neat, tabular format. List the column
subscripts as headings across the top and list the row subscripts at the left of each row.

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
    const size_t rows = 2;
    const size_t columns = 3;

//(Two-Dimensional array Questions) Consider a 2-by-3 integer array t.
//a) Write a declaration for t.
array<array<int, columns>,rows> t; 


//b) How many rows does t have? 2
    // 2

//c) How many columns does t have?
    // 3

//d) How many elements does t have?
    // 6

//e) Write the names of all the elements in row 1 of t.
    // t[1][0], t[1][1], t[1][2]

//f) Write the names of all the elements in column 2 of t.
    // t[0][2] t[1][2]

//g) Write a statement that sets the element of t in the first row and second column to zero.
    // or t[0][1] = 0;

//h) Write a series of statements that initialize each element of t to zero. Do not use a loop.
    // array<array<int, rows>,columns> t = {};
    // or t[0][0] = 0, t[0][1] = 0, t[0][2] = 0
    //    t[1][0] = 0, t[1][1] = 0, t[1][2] = 0

//i) Write a nested counter-controlled for statement that initializes each element of t to zero.
for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
        t[i][j] = 0;
    }
}

//j) Write a nested range-based for statement that initializes each element of t to zero.
for (auto& row : t) {
    for (int& element : row) {
        element = 0;
    }
}

//k) Write a statement that inputs the values for the elements of t from the keyboard.
for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
        std::cout << "Enter t[" << i << "][" << j << "]: ";
        std::cin >> t[i][j];
    }
}

//l) Write a series of statements that determine and display the smallest value in array t.
int smallest = t[0][0];

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        if (t[i][j] < smallest) {
            smallest = t[i][j];
        }
    }
}

std::cout << "Smallest value = " << smallest << std::endl;

//m) Write a statement that displays the elements in row 0 of t.
for (int j = 0; j < 3; ++j)
    std::cout << t[0][j] << " ";
std::cout << std::endl;

//n) Write a statement that totals the elements in column 2 of t.
int total = 0;
for (int i = 0; i < 2; ++i)
    total += t[i][2];

//o) Write a series of statements that prints the array t in neat, tabular format. List the column
//subscripts as headings across the top and list the row subscripts at the left of each row.
std::cout << "     0    1    2\n";          // column headings
std::cout << "   ----------------\n";

for (int i = 0; i < 2; ++i) {
    std::cout << i << " | ";               // row label
    for (int j = 0; j < 3; ++j) {
        std::cout << std::setw(4) << t[i][j] << " ";
    }
    std::cout << std::endl;
}

return 0;// indicate that program ended successfully
}// end of main function
