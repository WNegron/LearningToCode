/***************************************************************************************************

File Name: ex06_44.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.44 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

6.43 What does the following program do?

    // Exercise 6.44: ex06_44.cpp
    // What does this program do?
    
    #include <iostream>
    using namespace std;

    int mystery(int, int); // function prototype

    int main() {
        cout << "Enter two integers: ";
        int x{0};
        int y{0};
        cin >> x >> y;
        cout << "The result is " << mystery(x, y) << endl;
    }

    // Parameter b must be a positive integer to prevent infinite recursion
    int mystery(int a, int b) {
        if (1 == b) { // base case
            return a;
        }
        else { // recursion step
            return a + mystery(a, b - 1);
        }
    }

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

int mystery(int, int); // function prototype

int main() {
    cout << "Enter two integers: ";
    int x{0};
    int y{0};
    cin >> x >> y;
    cout << "The result is " << mystery(x, y) << endl;
}

// Parameter b must be a positive integer to prevent infinite recursion
int mystery(int a, int b) {
    if (1 == b) { // base case
    return a;
    }
    else { // recursion step
    return a + mystery(a, b - 1);
    }
}