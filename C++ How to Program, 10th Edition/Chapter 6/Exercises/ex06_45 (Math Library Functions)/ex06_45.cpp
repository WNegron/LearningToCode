/***************************************************************************************************

File Name: ex06_45.cpp
     Date: 2026-06-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.45 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.45 (Math Library Functions) Write a program that tests as many of the math library functions
in Fig. 6.2 as you can. Exercise each of these functions by having your program print out tables of
return values for a diversity of argument values.

Fig. 6.2

FUNCTION                DESCRIPTION                                        EXAMPLE
ceil(x)     rounds x to the smallest integer not less than x            ceil(9.2) is 10.0
                                                                        ceil(-9.8) is -9.0

cos(x)      trigonometric cosine of x (x in radians)                    cos(0.0) is 1.0

exp(x)      exponential function e^x                                    exp(1.0) is 2.718282
                                                                        exp(2.0) is 7.389056

fabs(x)     absolute value of x                                         fabs(5.1) is 5.1
                                                                        fabs(0.0) is 0.0
                                                                        fabs(-8.76) is 8.76

floor(x)    rounds x to the largest integer not greater than x          floor(9.2) is 9.0
                                                                        floor(-9.8) is -10.0

fmod(x,y)   remainder of x/y as a floating-point number                 fmod(2.6, 1.2) is 0.2

log(x)      natural logarithm of x (base e)                             log(2.718282) is 1.0
                                                                        log(7.389056) is 2.0

log10(x)    logarithm of x (base 10)                                    log10(10.0) is 1.0
                                                                        log10(100.0) is 2.0

pow(x,y)    x raised to power y                                         pow(2, 7) is 128
                                                                        pow(9, .5) is 3

sin(x)      trigonometric sine of x (x in radians)                      sin(0.0) is 0

sqrt(x)     square root of x (where x is a nonnegative value)           sqrt(9.0) is 3.0

tan(x)      trigonometric tangent of x (x in radians)                   tan(0.0) is 0

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/


#include <iostream>//enable program to perform input/output
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <vector>//used to hold collections of test input values for each math function
#include <string> //used to make separator lines and pass nice descriptive text to the header-printing function

using namespace std;//program uses names from namespace std

// Exercise 6.45: Testing C++ math library functions from Fig. 6.2
// Prints tables showing behavior of ceil, floor, fabs, exp, log, log10, sqrt,
// pow, sin, cos, tan, fmod with diverse arguments

// Helper to print a nice separator line
void printSeparator() {
    cout << string(70, '-') << '\n';
}

// Print header for a function table
void printHeader(const string& funcName, const string& description) {
    printSeparator();
    cout << left << setw(12) << funcName 
         << " : " << description << '\n';
    printSeparator();
    cout << right << setw(12) << "x" 
         << setw(18) << "Result" << '\n';
    printSeparator();
}

int main() {
    cout << fixed << setprecision(6);  // consistent floating-point output

    // ────────────────────────────────────────────────
    // Test ceil(x) and floor(x)
    // ────────────────────────────────────────────────
    vector<double> roundingValues = { -9.8, -9.2, -0.1, 0.0, 0.1, 4.3, 9.2, 9.7 };

    printHeader("ceil(x)", "smallest integer >= x");
    for (double x : roundingValues) {
        cout << setw(12) << x << setw(18) << ceil(x) << '\n';
    }

    printHeader("floor(x)", "largest integer <= x");
    for (double x : roundingValues) {
        cout << setw(12) << x << setw(18) << floor(x) << '\n';
    }

    // ────────────────────────────────────────────────
    // Test fabs(x)
    // ────────────────────────────────────────────────
    vector<double> absValues = { -8.76, -5.0, -0.001, 0.0, 0.001, 3.14, 10.0 };

    printHeader("fabs(x)", "absolute value |x|");
    for (double x : absValues) {
        cout << setw(12) << x << setw(18) << fabs(x) << '\n';
    }

    // ────────────────────────────────────────────────
    // Test exp(x), log(x), log10(x)
    // ────────────────────────────────────────────────
    vector<double> expLogValues = { -2.0, -1.0, 0.0, 0.693147, 1.0, 2.0, 2.302585, 10.0 };

    printHeader("exp(x)", "e^x");
    for (double x : expLogValues) {
        cout << setw(12) << x << setw(18) << exp(x) << '\n';
    }

    printHeader("log(x)", "natural log (base e) — x > 0 required");
    for (double x : expLogValues) {
        if (x > 0.0) {
            cout << setw(12) << x << setw(18) << log(x) << '\n';
        }
    }

    printHeader("log10(x)", "log base 10 — x > 0 required");
    for (double x : expLogValues) {
        if (x > 0.0) {
            cout << setw(12) << x << setw(18) << log10(x) << '\n';
        }
    }

    // ────────────────────────────────────────────────
    // Test sqrt(x)
    // ────────────────────────────────────────────────
    vector<double> sqrtValues = { 0.0, 0.25, 1.0, 2.0, 9.0, 16.0, 100.0 };

    printHeader("sqrt(x)", "square root — x >= 0 required");
    for (double x : sqrtValues) {
        cout << setw(12) << x << setw(18) << sqrt(x) << '\n';
    }

    // ────────────────────────────────────────────────
    // Test pow(x, y)
    // ────────────────────────────────────────────────
    cout << "\n";
    printHeader("pow(x,y)", "x raised to power y");
    cout << setw(10) << "x" << setw(10) << "y" << setw(18) << "pow(x,y)" << '\n';
    printSeparator();

    vector<pair<double, double>> powTests = {
        {2.0, 7.0}, {9.0, 0.5}, {2.0, -3.0}, {-2.0, 3.0},
        {1.0, 100.0}, {10.0, 0.0}, {0.0, 0.0}, {0.5, 2.0}
    };

    for (auto [x, y] : powTests) {
        cout << setw(10) << x << setw(10) << y << setw(18) << pow(x, y) << '\n';
    }

    // ────────────────────────────────────────────────
    // Test trigonometric functions: sin, cos, tan (in radians)
    // ────────────────────────────────────────────────
    vector<double> trigAngles = { 0.0, 0.785398, 1.570796, 3.141593, 4.712389, 6.283185 }; // 0°, 45°, 90°, 180°, 270°, 360°

    printHeader("sin(x)", "sine (x in radians)");
    for (double x : trigAngles) {
        cout << setw(12) << x << setw(18) << sin(x) << '\n';
    }

    printHeader("cos(x)", "cosine (x in radians)");
    for (double x : trigAngles) {
        cout << setw(12) << x << setw(18) << cos(x) << '\n';
    }

    printHeader("tan(x)", "tangent (x in radians)");
    for (double x : trigAngles) {
        double t = tan(x);
        cout << setw(12) << x << setw(18);
        if (abs(cos(x)) < 1e-10) cout << "undefined";  // avoid printing huge values near poles
        else cout << t;
        cout << '\n';
    }

    // ────────────────────────────────────────────────
    // Test fmod(x, y)
    // ────────────────────────────────────────────────
    vector<pair<double, double>> fmodTests = {
        {2.6, 1.2}, {10.0, 3.0}, {-10.0, 3.0}, {10.0, -3.0},
        {5.7, 2.0}, {0.0, 5.0}, {7.0, 0.0}
    };

    cout << "\n";
    printHeader("fmod(x,y)", "floating-point remainder x/y");
    cout << setw(10) << "x" << setw(10) << "y" << setw(18) << "fmod(x,y)" << '\n';
    printSeparator();

    for (auto [x, y] : fmodTests) {
        cout << setw(10) << x << setw(10) << y << setw(18) << fmod(x, y) << '\n';
    }

    printSeparator();
    cout << "\nAll tested math functions demonstrated.\n";

    return 0;
}
