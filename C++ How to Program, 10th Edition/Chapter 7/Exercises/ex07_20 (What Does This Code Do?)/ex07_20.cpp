/***************************************************************************************************

File Name: exXX_XX.cpp
     Date: XXXX-XX-XX
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.20 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Summary – What the program actually does:

It declares an array with values 1 to 10
It uses recursive function calls to reach the end of the array
It prints the elements on the way back from the recursion (post-order)
Therefore it prints the array in reverse order

Description:

7.20 (What Does This Code Do?) What does the following program do?

// Ex. 7.20: Ex07_20.cpp
// What does this program do?
#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{10};
void someFunction(const array<int, arraySize>&, size_t); // prototype
int main() {
    array<int, arraySize> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The values in the array are:" << endl;
    
    someFunction(a, 0);
    cout << endl;
}

// What does this function do?
void someFunction(const array<int, arraySize>& b, size_t current) {
    if (current < b.size()) {
        someFunction(b, current + 1);
        cout << b[current] << " ";
        }
}

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array

//using directives; enables a program to use all the names in any standard C++ header
using namespace std;//program uses names from namespace std

const size_t arraySize{10};
void someFunction(const array<int, arraySize>&, size_t); // prototype


// function main begins program execution
int main(){
    // declaring and initializing variables
    array<int, arraySize> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "The values in the array are:" << endl;
    someFunction(a, 0);
    cout << endl;

    return 0;// indicate that program ended successfully
}// end of main function

// What does this function do?
void someFunction(const array<int, arraySize>& b, size_t current) {
    if (current < b.size()) {
        someFunction(b, current + 1);
        cout << b[current] << " ";
    }
}