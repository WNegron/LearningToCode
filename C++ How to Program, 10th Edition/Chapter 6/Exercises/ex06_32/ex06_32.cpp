/***************************************************************************************************

File Name: ex06_32.cpp
     Date: 2026-02-10
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.32 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.32 (Quality Points for Numeric Grades) Write a function qualityPoints that inputs a student’s 
average and returns 4 if a student’s average is 90–100, 3 if the average is 80–89, 2 if the 
average is 70–79, 1 if the average is 60–69 and 0 if the average is lower than 60.

-------------------------------------    Pseudocode    ---------------------------------------------
FUNCTION qualityPoints(average)
    IF average >= 90 THEN          // covers 90–100
        RETURN 4
    ELSE IF average >= 80 THEN     // 80–89
        RETURN 3
    ELSE IF average >= 70 THEN     // 70–79
        RETURN 2
    ELSE IF average >= 60 THEN     // 60–69
        RETURN 1
    ELSE                           // below 60
        RETURN 0
    END IF
END FUNCTION

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

// Function prototype (declaration)
int qualityPoints(double average);

// function main begins program execution
int main() {
    // declaring and initializing variables
    double grade = 0.0;
    
    cout << "Enter student's average: ";
    cin >> grade;
    
    int points = qualityPoints(grade);
    
    cout << "Quality points: " << points << endl;
    
    return 0;// indicate that program ended successfully
}//end of main function

// Function definition
// qualityPoints function begins
int qualityPoints(double average) {
    if (average >= 90) {           // 90–100
        return 4;
    }
    else if (average >= 80) {      // 80–89
        return 3;
    }
    else if (average >= 70) {      // 70–79
        return 2;
    }
    else if (average >= 60) {      // 60–69
        return 1;
    }
    else {                         // below 60
        return 0;
    }
}// end of qualitPoints function