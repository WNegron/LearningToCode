/***************************************************************************************************

File Name: ex06_42.cpp
     Date: 2026-02-13
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.42 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

The author is not clear on how or whcih algorithm is to be used in the solution for this exercise. Therfore
I decided to use 3 different version of calculating distance between two points. I'll be using Euclidean, Manhattan,
and Chebyshev. 

Comparison of the three distances (same points: (1,2) → (4,6))

    Euclidean ≈ √(3² + 4²) = √25 = 5.0 (straight-line "as the crow flies")
    Manhattan   = 3 + 4 = 7 (only horizontal + vertical moves)
    Chebyshev  = max(3, 4) = 4 (allows diagonal moves like a king in chess)

Description:

    6.42 (Distance Between Points) Write function distance that calculates the distance between
two points (x1, y1) and (x2, y2). All numbers and return values should be of type double.

-------------------------------------    Pseudocode    ---------------------------------------------

Euclidean Distance
FUNCTION euclideanDistance(x1, y1, x2, y2 : double) RETURNS double

    // Step 1: Calculate the differences in x and y coordinates
    deltaX ← x2 - x1
    deltaY ← y2 - y1

    // Step 2: Square the differences
    squaredDeltaX ← deltaX × deltaX
    squaredDeltaY ← deltaY × deltaY

    // Step 3: Sum the squared differences
    sumOfSquares ← squaredDeltaX + squaredDeltaY

    // Step 4: Take the square root to get the actual distance
    distance ← squareRoot(sumOfSquares)

    RETURN distance

END FUNCTION

Manhattan Distance
FUNCTION manhattanDistance(x1, y1, x2, y2 : double) RETURNS double

    // Calculate absolute differences in each dimension
    diffX ← absoluteValue(x2 - x1)
    diffY ← absoluteValue(y2 - y1)

    // Sum the absolute differences
    distance ← diffX + diffY

    RETURN distance

END FUNCTION

FUNCTION chebyshevDistance(x1, y1, x2, y2 : double) RETURNS double

    // Calculate absolute differences in each dimension
    diffX ← absoluteValue(x2 - x1)
    diffY ← absoluteValue(y2 - y1)

    // Take the maximum of the absolute differences
    distance ← maximum(diffX, diffY)

    RETURN distance

END FUNCTION

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/


#include <iostream>//enable program to perform input/output
#include <cmath>//enable program to perform math functions

using namespace std;//program uses names from namespace std

//function prototypes
double euclideanDistance(double,double,double,double);
double manhattanDistance(double,double,double,double);
double chebyshevDistance(double,double,double,double);

// function main begins program execution
int main(){
    // declaring and initializing variables
    double x1,x2,y1,y2;

    cout << "\n++==== Calculate the Distance Between Two Points ====++\n";
    cout << "-----------------------------------------------------------\n";

    cout << "The first pair (x1, y1): 1, 2\n";
    // cin >> x1 >> y1;
    x1 = 1;
    y1 = 2;

    cout << "The second pair (x2, y2): 4, 6\n";
    //cin >> x2 >> y2;
    x2 = 4;
    y2 = 6;

    cout << "\n---------------------------------------------------------\n";
    cout << " ++==== Euclidean Distance ====++ \n";
    cout << "D Euclidean = \u221A ((" << x2 << " - " << x1 << ")^2 + (" << y2 << " - " << y1 << ")^2)\n";
    cout << "D Euclidean = \u221A (" << x2 - x1 << "^2 + " << y2 - y1 << "^2)\n";
    cout << "D Euclidean = \u221A (" << pow(x2 - x1,2) << " + " << pow(y2 - y1,2) << ")\n";
    cout << "D Euclidean = \u221A (" << pow(x2 - x1,2) + pow(y2 - y1,2) << ")\n";
    cout << "D Euclidean = " << euclideanDistance(x1,y1,x2,y2) << endl;
    cout << "-----------------------------------------------------------\n";

    cout << "\n---------------------------------------------------------\n";
    cout << " ++==== Manhattan Distance ====++ \n";
    cout << "D Manhattan = |" << x2 << " - " << x1 << "| + |" << y2 << " - " << y1 << "|\n";
    cout << "D Manhattan = |" << x2 - x1 << "| + |" << y2 - y1 << "|\n";
    cout << "D Manhattan = " << manhattanDistance(x1,y1,x2,y2) << endl;
    cout << "-----------------------------------------------------------\n";

    cout << "\n---------------------------------------------------------\n";
    cout << " ++==== Chebyshev Distance ====++ \n";
    cout << "D Chebyshev = maximum (|" << x2 << " - " << x1 << "|, |" << y2 << " - " << y1 << "|)\n";
    cout << "D Chebyshev = maximum (|" << x2 - x1 << "|, |" << y2 - y1 << "|)\n";
    cout << "D Chebyshev = maximum (" << x2 - x1 << ", " << y2 - y1 << ")\n";
    cout << "D Chebyshev = " << chebyshevDistance(x1,y1,x2,y2) << endl;
    cout << "-----------------------------------------------------------\n";

    return 0;// indicate that program ended successfully
}// end of main function

//Euclidean Distance
double euclideanDistance(double x1, double y1, double x2, double y2){
    // Step 1: Calculate the differences in x and y coordinates
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;

    // Step 2: Square the differences
    double squaredDeltaX = deltaX * deltaX;
    double squaredDeltaY = deltaY * deltaY;

    // Step 3: Sum the squared differences
    double sumOfSquares = squaredDeltaX + squaredDeltaY;

    // Step 4: Take the square root to get the actual distance
    double distance = sqrt(sumOfSquares);

    return distance;

}//end of euclideanDistance function


//Manhattan Distance
double manhattanDistance(double x1, double y1, double x2, double y2){

    // Calculate absolute differences in each dimension
    double diffX = abs(x2 - x1);
    double diffY = abs(y2 - y1);

    // Sum the absolute differences
    double distance = diffX + diffY;

    return distance;

}//end manhattanDistance function

//Chebyshev Distance
double chebyshevDistance(double x1, double y1, double x2, double y2){
    // Calculate absolute differences in each dimension
    double diffX = abs(x2 - x1);
    double diffY = abs(y2 - y1);

    // Take the maximum of the absolute differences
    double distance = max(diffX, diffY);

    return distance;
}//end chebyshevDistance function

