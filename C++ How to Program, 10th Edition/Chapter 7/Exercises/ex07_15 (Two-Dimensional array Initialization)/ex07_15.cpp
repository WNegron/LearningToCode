/***************************************************************************************************

File Name: ex07_15.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.15 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.15 (Two-Dimensional array Initialization) Label the elements of a 3-by-5 two-dimensional
array sales to indicate the order in which they’re set to zero by the following program segment:

    for (size_t row{0}; row < sales.size(); ++row) {
        for (size_t column{0}; column < sales[row].size(); ++column) {
        sales[row][column] = 0;
        }
    }

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array

// function main begins program execution
int main(){
    // declaring and initializing variables
    const size_t rows{3};
    const size_t columns{5};
    std::array<std::array<int,columns>,rows> sales;

    std::cout << "\n-------------------------------------------\n";

    for (size_t row{0}; row < sales.size(); ++row) {
        for (size_t column{0}; column < sales[row].size(); ++column) {
            sales[row][column] = 0;
            std::cout << row << ", " << column << " = " << sales[row][column];
            std::cout << "  ";
        }//end for
        std::cout << std::endl;
    }//end for


    return 0;// indicate that program ended successfully
}// end of main function