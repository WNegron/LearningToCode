/***************************************************************************************************

File Name: exXX_XX.cpp
     Date: XXXX-XX-XX
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise X.XX using only the tools and methods taught up to Chapter X.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

//Standard Library Header Files
#include <iostream>//enable program to perform input/output
#include <array>//contains the definition of class template array
#include <algorithm> // contains sort and binary_search
#include <ctime>//enable program to perform time functions
#include <iomanip>//parameterized stream manipulators
#include <cmath>//enable program to perform math functions
#include <cstdlib> // contains prototypes for functions srand and rand
#include <random> // contains C++11 random number generation features
#include <utility>//enables program to use pair
#include <string> // enable program to use C++ string data type
#include <thread>     // for sleep_for
#include <chrono>     // for seconds, milliseconds, etc.

//developer define header files
//#include "headerFileName.hpp"//enable program to use function from headerFileNames

//using directives; enables a program to use all the names in any standard C++ header
using namespace std;//program uses names from namespace std
using namespace std::chrono_literals;   // lets you write 2s, 1500ms, etc.

// function main begins program execution
int main(){
    // declaring and initializing variables

    return 0;// indicate that program ended successfully
}// end of main function

//std::array<std::array<int, COLUMNS>, ROWS> grid;   // ← COLUMNS first (inner), ROWS second (outer)


//template<std::size_t Rows, std::size_t Cols>
//using Matrix = std::array<std::array<int, Cols>, Rows>;
// Now it reads more naturally:
//Matrix<5, 8> image;     // ← Rows first in the template args

/*
// ────────────────────────────────────────────────
    // ← Add delay here – most users like 1–3 seconds
    // ────────────────────────────────────────────────
    std::cout << "\nNext question in...\n";
    std::this_thread::sleep_for(2s);          // 2 seconds pause
    // or: std::this_thread::sleep_for(std::chrono::seconds(2));
    // or shorter: std::this_thread::sleep_for(1200ms);

void countdownGo() {
    std::cout << "Next question in ";
    for (int i = 3; i >= 1; --i) {
        std::cout << i << "... " << std::flush;     // flush forces immediate display
        std::this_thread::sleep_for(1s);
        std::cout << "\b\b\b\b    \b\b\b\b";       // erase "3... ", "2... ", etc.
    }
    std::cout << "Go!\n\n";
}

void countdownClean() {
    std::cout << "Next question in   ";   // reserve space
    
    for (int i = 3; i >= 1; --i) {
        std::cout << "\rNext question in " << i << "... " << std::flush;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rNext question in Go!      \n\n";
}

void countdownSpinner() {
    const char spinner[] = {'|', '/', '-', '\\'};
    int spinIdx = 0;

    std::cout << "Preparing next question ";
    
    for (int i = 3; i >= 0; --i) {
        std::cout << "\rPreparing next question " << spinner[spinIdx % 4] 
                  << "  " << i << "s  " << std::flush;
        spinIdx++;
        std::this_thread::sleep_for(1s);
    }
    
    std::cout << "\rPreparing next question Done!          \n\n";
}

void dotsCountdown() {
    std::cout << "Next question ";
    
    for (int i = 0; i < 9; ++i) {           // 3 seconds total
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(333ms);
    }
    
    std::cout << "\rNext question     \n\n";   // clear line
    std::cout << "Here we go!\n";
}

void dramaticCountdown() {
    clearScreen();
    std::cout << "\n\n\n\n\n";  // center vertically a bit
    
    for (int i = 3; i >= 1; --i) {
        clearScreen();
        std::cout << "\n\n\n\n          " << i << "\n\n\n\n" << std::flush;
        std::this_thread::sleep_for(1s);
    }
    
    clearScreen();
    std::cout << "\n\n\n\n          GO!\n\n\n\n" << std::flush;
    std::this_thread::sleep_for(700ms);
}
    
void make_banner(string text) {
    if (text.empty()) {
        cerr << "Error: Text cannot be empty" << endl;
        return;
    }
    int length = text.length() + 4;
    cout << string(length, '*') << endl;
    cout << "* " << text << " *" << endl;
    cout << string(length, '*') << endl;
}

Escape sequence Description
\n Newline. Position the screen cursor to the beginning of the next line.
\t Horizontal tab. Move the screen cursor to the next tab stop.
\r Carriage return. Position the screen cursor to the beginning of the
current line; do not advance to the next line.
\a Alert. Sound the system bell.
\\ Backslash. Used to print a backslash character.
\' Single quote. Used to print a single-quote character.
\" Double quote. Used to print a double-quote character.


Standard Library
header Explanation
<iostream> Contains function prototypes for the C++ standard input and output
functions, introduced in Chapter 2, and is covered in more detail in
Chapter 13, Stream Input/Output: A Deeper Look.

<iomanip> Contains function prototypes for stream manipulators that format
streams of data. This header is first used in Section 4.10 and is discussed
in more detail in Chapter 13, Stream Input/Output: A Deeper Look.

<cmath> Contains function prototypes for math library functions (Section 6.3).

<cstdlib> Contains function prototypes for conversions of numbers to text, text
to numbers, memory allocation, random numbers and various other
utility functions. Portions of the header are covered in Section 6.7;
Chapter 11, Operator Overloading; Class string; Chapter 17, Excep-
tion Handling: A Deeper Look; Chapter 22, Bits, Characters, C Strings
and structs; and Appendix F, C Legacy Code Topics.

<ctime> Contains function prototypes and types for manipulating the time and
date. This header is used in Section 6.7.

<array>,
<vector>, <list>,
<forward_list>,
<deque>, <queue>,
<stack>, <map>,
<unordered_map>,
<unordered_set>,
<set>, <bitset>
These headers contain classes that implement the C++ Standard Library
containers. Containers store data during a program’s execution. The
<vector> header is first introduced in Chapter 7, Class Templates array
and vector; Catching Exceptions. We discuss all these headers in
Chapter 15, Standard Library Containers and Iterators. <array>,
<forward_list>, <unordered_map> and <unordered_set> were all intro-
duced in C++11.
<cctype> Contains function prototypes for functions that test characters for cer-
tain properties (such as whether the character is a digit or a punctua-
tion), and function prototypes for functions that can be used to convert
lowercase letters to uppercase letters and vice versa. These topics are dis-
cussed in Chapter 22, Bits, Characters, C Strings and structs.
<cstring> Contains function prototypes for C-style string-processing functions.
This header is used in Chapter 10, Operator Overloading; Class
string.
<typeinfo> Contains classes for runtime type identification (determining data types
at execution time). This header is discussed in Section 12.9.
<exception>,
<stdexcept>
These headers contain classes that are used for exception handling (dis-
cussed in Chapter 17, Exception Handling: A Deeper Look).

//setprecicion(n): parameterized stream manipulator
//fixed: indicates that floating-point values should be output in fixed-point format, 
//as opposed to scientific notation
std::cout << std::setprecision(10) << std::fixed;

#include <iostream>

void clearScreen() {
    std::cout << "\033[2J\033[H";   // or "\x1B[2J\x1B[H"
    //               ^^^^^^^^       clears screen
    //                      ^^^^^   moves cursor to top-left (1,1)
}

std::cout << "\033[2J";          // just clear (cursor may stay where it was)
std::cout << "\033c";            // full terminal reset (clear + reset attributes)

#include <iostream>
#include <cstdlib>

void clearScreen() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");     // Linux, macOS, most UNIX-like
    // or use ANSI: std::cout << "\033[2J\033[H";
#endif
}

Character,Code point,Name / Description,Typical use in C++,Copy-paste
₀,U+2080,Subscript zero,x₀ (initial value),₀
₁,U+2081,Subscript one,"x₁, a₁",₁
₂,U+2082,Subscript two,"x₂, a₂",₂
₃,U+2083,Subscript three,"x₃, CO₂",₃
₄,U+2084,Subscript four,x₄,₄
₅,U+2085,Subscript five,x₅,₅
₆,U+2086,Subscript six,x₆,₆
₇,U+2087,Subscript seven,x₇,₇
₈,U+2088,Subscript eight,x₈,₈
₉,U+2089,Subscript nine,x₉,₉
₊,U+208A,Subscript plus,rare,₊
₋,U+208B,Subscript minus,rare,₋
₌,U+208C,Subscript equals,rare,₌
₍,U+208D,Subscript left parenthesis,rare,₍
₎,U+208E,Subscript right parenthesis,rare,₎
ₐ,U+2090,Subscript a,chemistry / phonetics,ₐ
ₑ,U+2091,Subscript e,chemistry,ₑ
ₒ,U+2092,Subscript o,chemistry,ₒ
ₓ,U+2093,Subscript x,math / chemistry,ₓ
ₕ,U+2095,Subscript h,chemistry (H₂O),ₕ
ₖ,U+2096,Subscript k,rare,ₖ
ₗ,U+2097,Subscript l,rare,ₗ
ₘ,U+2098,Subscript m,rare,ₘ
ₙ,U+2099,Subscript n,sequences,ₙ
ₚ,U+209A,Subscript p,rare,ₚ
ₛ,U+209B,Subscript s,rare,ₛ
ₜ,U+209C,Subscript t,rare,ₜ

Character,Code point,Name / Description,Typical use in C++,Copy-paste
⁰,U+2070,Superscript zero,x⁰,⁰
¹,U+00B9,Superscript one (Latin-1),"x¹, first order",¹
²,U+00B2,Superscript two (squared),area = πr²,²
³,U+00B3,Superscript three (cubed),volume = (4/3)πr³,³
⁴,U+2074,Superscript four,x⁴,⁴
⁵,U+2075,Superscript five,x⁵,⁵
⁶,U+2076,Superscript six,x⁶,⁶
⁷,U+2077,Superscript seven,x⁷,⁷
⁸,U+2078,Superscript eight,x⁸,⁸
⁹,U+2079,Superscript nine,x⁹,⁹
⁺,U+207A,Superscript plus,x⁺y,⁺
⁻,U+207B,Superscript minus,x⁻¹,⁻
⁼,U+207C,Superscript equals,x⁼y,⁼
⁽,U+207D,Superscript left parenthesis,(x+y)⁽²⁾,⁽
⁾,U+207E,Superscript right parenthesis,(x+y)⁽²⁾,⁾
ⁱ,U+2071,Superscript i,imaginary unit iⁱ (rare),ⁱ
ⁿ,U+207F,Superscript n,xⁿ (general exponent),ⁿ




*/