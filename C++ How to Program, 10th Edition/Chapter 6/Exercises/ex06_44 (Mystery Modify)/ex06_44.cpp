/***************************************************************************************************

File Name: ex06_44.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.44 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

The function does multiplication by recursive addition. 

Description:

    6.44 After you determine what the program of Exercise 6.43 does, modify the program to function 
    properly after removing the restriction that the second argument be nonnegative.

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

    //base case: multiplier is 0
    if(b == 0){
        return 0;
    }//end if

    //base case: multiplier is 1
    if ( b== 1){
        return a;
    }//end if

    //handle negative multiplier by recursion on the positive side
    if(b < 0){
        return -mystery(a,-b);
    }

    else{ // recursion step
        return a + mystery(a, b - 1);
    }
}//end mystery function