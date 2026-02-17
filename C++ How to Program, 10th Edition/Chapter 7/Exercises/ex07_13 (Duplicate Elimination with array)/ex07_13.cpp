/***************************************************************************************************

File Name: ex07_13.cpp
     Date: 2026-02-17
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 7.13 using only the tools and methods taught up to Chapter 7.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    7.13 (Duplicate Elimination with array) Use a one-dimensional array to solve the following
problem. Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is
read, validate it and store it in the array only if it isn’t a duplicate of a number already read. After
reading all the values, display only the unique values that the user entered. Provide for the “worst
case” in which all 20 numbers are different. Use the smallest possible array to solve this problem.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
//#include <iomanip>//parameterized stream manipulators

// function main begins program execution
int main(){
    // declaring and initializing variables
    const size_t sizeOf = 20;
    std::array<int, sizeOf> numbers{};
    int count = 0;
    int number = 0;
    bool isDuplicate = false;

    std::cout << "Enter 20 numbers (each between 10 and 100 inclusive):\n";
    std::cout << "Duplicates will be ignored.\n\n";

    //storing values in the array
    for (size_t i = 0; i < sizeOf; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >>  number;

        //if to check if number is within desired range
        if(number >= 10 && number <= 100){
            //for loop to check for duplicates
            for(size_t j = 0; j < sizeOf; j++){
                if(numbers[j] == number){
                    isDuplicate = true;
                    break;
                }//end if
            }//end for loop 

            //if number is not a duplicate it will be store in array
            if(!isDuplicate){
                numbers[i] = number;
                ++count;
                std::cout << "Number is unique it will be stored.\n";
            }//end if
            else{
                std::cout << "Duplicate Number will be ignored.\n";
                i--;
            }//end else
            isDuplicate = false;
        }//end if number within desired range
        else{
            std::cout << "Numbers outside of range will be ignore\n";
            i--;
        }
    }//end storing values for loop

    std::cout << "\nUnique numbers entered:\n";
    std::cout << "----------------------------\n";

    //for loop to print array
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        std::cout << numbers[i] << " ";
        if(i == 9) std::cout << std::endl;
    }//end print array for loop 
    
    return 0;// indicate that program ended successfully
}// end of main function