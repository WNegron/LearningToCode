/***************************************************************************************************

File Name: ex06_48.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.48 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.48 (Circle Area) Write a C++ program that prompts the user for the radius of a circle, then calls
inline function circleArea to calculate the area of that circle.

-------------------------------------    Pseudocode    ---------------------------------------------
// PSEUDOCODE for Circle Area Calculator

PROGRAM CalculateCircleArea

    // Constant definition
    DECLARE CONSTANT PI = 3.14159

    // Function declaration (inline concept)
    FUNCTION circleArea(radius)
        RETURN PI * radius * radius
    END FUNCTION

MAIN PROGRAM

    DECLARE real radius
    DECLARE real area

    // Input
    DISPLAY "Enter the radius of the circle: "
    INPUT radius

    // Validation (optional but good practice)
    IF radius < 0 THEN
        DISPLAY "Error: Radius cannot be negative!"
        EXIT PROGRAM
    END IF

    // Calculate area using the inline function
    SET area = circleArea(radius)

    // Output
    DISPLAY "The area of the circle is: ", area
    // Optional formatted output:
    // DISPLAY "The area of a circle with radius ", radius, " is ", area

END MAIN PROGRAM

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <iomanip>//parameterized stream manipulators

#include "circleArea.hpp"//enable program to use function from circleArea

// main function begin
// function main begins program execution
int main(){
    // declaring and initializing variables
    double radius = 0.0;
    double area = 0.0;

    //message printout
    std::cout << "\n\n++====********   Circle Equations   ********====++\n";

    do{
        // message and prompt user to enter the radius
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;

        // validating radius entered by user
        if(radius <= 0){
            std::cout << "Error: Radius cannot be negative!\n";
        }//end if
    }while(radius <= 0);//end while loop

    // Calculate area using the inline function
    area = circleArea(radius);


    //message printout
    std::cout << "\n\n++====********   Circle Equations   ********====++\n";
    std::cout << "Area = \u03C0r\u00B2\n";
    std::cout << "Area = " << std::setprecision(10) << std::fixed << ::pi << "(" 
    << std::setprecision(2) << std::fixed << radius << ")\u00B2\n";
    std::cout << "The area of a circle with radius " << radius << " is "
    << std::setprecision(5) << std::fixed << area << std::endl;

    return 0;// indicate that program ended successfully
}// end of main function