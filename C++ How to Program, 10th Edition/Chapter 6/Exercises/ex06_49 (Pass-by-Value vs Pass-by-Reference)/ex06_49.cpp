/***************************************************************************************************

File Name: ex06_49.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.49 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.49 (Pass-by-Value vs. Pass-by-Reference) Write a complete C++ program with the two alternate
functions specified below, each of which simply triples the variable count defined in main. Then
compare and contrast the two approaches. These two functions are

    a) function tripleByValue that passes a copy of count by value, triples the copy and returns the new value and

    b) function tripleByReference that passes count by reference via a reference parameter
and triples the original value of count through its alias (i.e., the reference parameter).

-------------------------------------    Pseudocode    ---------------------------------------------
PROGRAM PassByValue_vs_PassByReference_Demonstration

    // ---------------------------------------------------
    // Function definitions
    // ---------------------------------------------------

    FUNCTION tripleByValue(integer number) returns integer
        // receives a COPY of the original value
        SET number = number * 3
        RETURN number
    END FUNCTION

    FUNCTION tripleByReference(reference integer number)
        // receives REFERENCE (alias) to the original variable
        SET number = number * 3
        // no return needed — modifies original directly
    END FUNCTION

    // ---------------------------------------------------
    // Main program
    // ---------------------------------------------------

    MAIN

        DECLARE integer count ← 7

        OUTPUT "Original value of count = ", count
        OUTPUT "----------------------------------------"

        // Part A: Pass-by-value
        OUTPUT "Calling tripleByValue (pass-by-value)"
        DECLARE integer result ← tripleByValue(count)
        
        OUTPUT "Value returned from function     = ", result
        OUTPUT "Value of count after function call = ", count
        OUTPUT "(count was NOT changed)"
        OUTPUT ""

        // Part B: Pass-by-reference
        OUTPUT "Calling tripleByReference (pass-by-reference)"
        CALL tripleByReference(count)
        
        OUTPUT "Value of count after function call = ", count
        OUTPUT "(count WAS changed directly)"

        OUTPUT "----------------------------------------"
        OUTPUT "Final value of count = ", count

    END MAIN

END PROGRAM

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output

//PROGRAM PassByValue_vs_PassByReference_Demonstration


    // ---------------------------------------------------
    // Function Prototype
    // ---------------------------------------------------

int tripleByValue(int );// function prototype (value pass)
void tripleByReference(int& );// function prototype (reference pass)

    // ---------------------------------------------------
    // Main program
    // ---------------------------------------------------

int main(){
    // declaring and initializing variables
    int count = 7;

    std::cout << "\nOriginal value of count = " << count << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // Part A: Pass-by-value
    std::cout << "Calling tripleByValue (pass-by-value)\n";
    int result = tripleByValue(count);
        
    std::cout << "Value returned from function     = " << result << std::endl;
    std::cout << "Value of count after function call = " << count << std::endl;
    std::cout << "(count was NOT changed)" << std::endl;
    std::cout << "" << std::endl;

    // Part B: Pass-by-reference
    std::cout << "Calling tripleByReference (pass-by-reference)\n";
    tripleByReference(count);
        
    std::cout << "Value of count after function call = " << count << std::endl;
    std::cout << "(count WAS changed directly)" << std::endl;

    std::cout << "----------------------------------------" <<std::endl;
    std::cout << "Final value of count = " << count << std::endl;

}//end main function

// ---------------------------------------------------
    // Function definitions
    // ---------------------------------------------------

int tripleByValue(int number){
        // receives a COPY of the original value
        number = number * 3;
        return number;
}//end tripleByValue function

void tripleByReference(int& number){
        // receives REFERENCE (alias) to the original variable
        number = number * 3;
        // no return needed — modifies original directly
}//end tripleByReference