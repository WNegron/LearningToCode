/***************************************************************************************************

File Name: circleArea.hpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.48 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

// pi first 20 digits 3.14159265358979323846
// pi first 100 digits, seperated in blocks of 10
// 3.1415926535 8979323846 2643383279 5028841971 6939937510
// 5820974944 5923078164 0628620899 8628034825 3421170679

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

//global variable delaration and definition
const double pi = 3.1415926535; // pi first 10 digits

//function to calculate area of a circle
//begin circleArea function
inline double circleArea(double radius){
    return ::pi * radius * radius;
}//end circleArea function