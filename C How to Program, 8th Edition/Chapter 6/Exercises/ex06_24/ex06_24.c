/***************************************************************************************************
File Name: ex06_24.c
     Date: 2022-07-13
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 6.24 using only the tools and methods taught up to chapter 6.

Description:
	6.24 (Knight’s Tour) One of the more interesting puzzlers for chess buffs is the Knight’s Tour 
problem, originally proposed by the mathematician Euler. The question is this: Can the chess piece 
called the knight move around an empty chessboard and touch each of the 64 squares once and only once? 
We study this intriguing problem in depth here.
    
    The knight makes L-shaped moves (over two in one direction and then over one in a perpendicular 
direction). Thus, from a square in the middle of an empty chessboard, the knight can make eight 
different moves (numbered 0 through 7) as shown in Fig. 6.26.
    
    a) Draw an 8-by-8 chessboard on a sheet of paper and attempt a Knight’s Tour by hand. Put a 1 
in the first square you move to, a 2 in the second square, a 3 in the third, and so on. Before starting 
the tour, estimate how far you think you’ll get, remembering that a full tour consists of 64 moves. How 
far did you get? Were you close to the estimate?

    b) Now let’s develop a program that will move the knight around a chessboard. The board itself is 
represented by an 8-by-8 two-dimensional array board. Each square is initialized to zero. We describe 
each of the eight possible moves in terms of both its horizontal and vertical components. For example, 
a move of type 0 as shown in Fig. 6.26 consists of moving two squares horizontally to the right and one 
square vertically upward. Move 2 consists of moving one square horizontally to the left and two squares 
vertically upward. Horizontal moves to the left and vertical moves upward are indicated with negative 
numbers. The eight moves may be described by two one-dimensional arrays, horizontal and vertical, 
as follows:
        
        horizontal[0] = 2 
        horizontal[1] = 1 
        horizontal[2] = -1 
        horizontal[3] = -2 
        horizontal[4] = -2 
        horizontal[5] = -1 
        horizontal[6] = 1 
        horizontal[7] = 2

        vertical[0] = -1 
        vertical[1] = -2 
        vertical[2] = -2 
        vertical[3] = -1 
        vertical[4] = 1 
        vertical[5] = 2 
        vertical[6] = 2 
        vertical[7] = 1

Let the variables currentRow and currentColumn indicate the row and column of the knight’s current position
on the board. To make a move of type moveNumber, where moveNumber is between 0 and 7, your program uses 
the statements: 

        currentRow += vertical[moveNumber]; 
        currentColumn += horizontal[moveNumber];

Keep a counter that varies from 1 to 64. Record the latest count in each square the knight moves to. Remember
to test each potential move to see if the knight has already visited that square. And, of course, test every 
potential move to make sure that the knight does not land off the chessboard. Now write a program to move 
the knight around the chessboard. Run the program. How many moves did the knight make?

    c) After attempting to write and run a Knight’s Tour program, you have probably developed some valuable 
insights. We’ll use these to develop a heuristic (or strategy) for moving the knight. Heuristics do not 
guarantee success, but a carefully developed heuristic greatly improves the chance of success. You may have 
observed that the outer squares are in some sense more troublesome than the squares nearer the center of 
the board. In fact, the most troublesome, or inaccessible, squares are the four corners.

Intuition may suggest that you should attempt to move the knight to the most troublesome squares first
and leave open those that are easiest to get to, so that when the board gets congested near the 
end of the tour, there will be a greater chance of success.

We develop an “accessibility heuristic” by classifying each square according to how accessible it is 
and always moving the knight to the square (within the knight’s L-shaped moves, of course) that’s 
most inaccessible. We label a two-dimensional array accessibility with numbers indicating from how 
many squares each particular square is accessible. On a blank chessboard, the center squares are 
therefore rated as 8s, the corner squares are rated as 2s, and the other squares have accessibility 
numbers of 3, 4, or 6 as follows:

    2   3   4   4   4   4   3   2 
    3   4   6   6   6   6   4   3 
    4   6   8   8   8   8   6   4 
    4   6   8   8   8   8   6   4 
    4   6   8   8   8   8   6   4 
    4   6   8   8   8   8   6   4 
    3   4   6   6   6   6   4   3 
    2   3   4   4   4   4   3   2

Now write a version of the Knight’s Tour program using the accessibility heuristic. At any time, the 
knight should move to the square with the lowest accessibility number. In case of a tie, the knight 
may move to any of the tied squares. Therefore, the tour may begin in any of the four corners. 
[Note: As the knight moves around the chessboard, your program should reduce the accessibility 
numbers as more and more squares become occupied. In this way, at any given time during the tour, 
each available square’s accessibility number will remain equal to precisely the number of squares 
from which that square may be reached.] Run this version of your program. Did you get a full tour? 
(Optional: Modify the program to run 64 tours, one from each square of the chessboard. How many full 
tours did you get?)

d) Write a version of the Knight’s Tour program which, when encountering a tie between two or more 
squares, decides what square to choose by looking ahead to those squares reachable from the “tied” 
squares. Your program should move to the square for which the next move would arrive at a square with 
the lowest accessibility number.
****************************************************************************************************/

#include <stdio.h>//standard input/output
#include <stdlib.h>//standard functions; rand

#include "chessboard.h"//initializes and prints the board
#include "knightstour.h"//functions to move the knight piece around
#include "heuristicboard.h"//implementing section c of exercise 6.24

//symbolic constant
#define ROWS 8
#define COLUMNS 8 

int main(void){
    //variable declaration
    char chessboard[ROWS][COLUMNS];
    int knightsposition[ROWS][COLUMNS];
    /* 
    //knights starting position
    int currentRow = 0;
    int currentColumn = 0;
    int counter = 1;

    //to move knight
    int moveNumber = 0;//0 to 7 */

    //applying the heuristic approach
    int ratingMoves[ROWS];

// Added on: 2022-07-30
// added 2 (two) for loops to control the Knight's satrting position for the tour
// this way will have a tour starting from each one of the 64 squares on the board
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            //resetting the values of currentRow and currentColumn
            //this will give the knight a new position
            int currentRow = row;
            int currentColumn = column;

            //restart counter
            int counter = 1;
            //restarting moveNumber
            int moveNumber = 0;

            int heuristicBoard[ROWS][COLUMNS] = {{2,3,4,4,4,4,3,2},
                 {3,4,6,6,6,6,4,3},
                 {4,6,8,8,8,8,6,4},
                 {4,6,8,8,8,8,6,4},
                 {4,6,8,8,8,8,6,4},
                 {4,6,8,8,8,8,6,4},
                 {3,4,6,6,6,6,4,3},
                 {2,3,4,4,4,4,3,2}};//end of heuristicBoard */

            puts("\nStarting Knight's in from a new position");
            printf("%s %d %s %d\n\n","Knight's New Position: ",currentRow,", ",currentColumn);

            //positioning Knight on chess board
            initializeBoard(chessboard,currentRow,currentColumn);
            initializeMoves(knightsposition);
            //initializeHeuristic(heuristicBoard);
            trackingKnight(heuristicBoard,currentRow,currentColumn);

            //will show available moves based on the Knight's position
            newPossibleMoves(chessboard,currentRow,currentColumn);

            rateMoves(heuristicBoard,currentRow,currentColumn,ratingMoves);

            //while loop to run the Knight's tour
            //when no moves are available the moveNumber will be -1
            //when moveNumber is -1 the loop will end
            while(moveNumber != -1){
                //display chess board
                //printBoard(chessboard);
        
                //using lowestRate
                moveNumber = lowestRate(ratingMoves);

                //puts("\n\n\n");//new lines

                //verifies there is moveNumber is not equal -1
                if(moveNumber != -1){
                    knightsposition[currentRow][currentColumn]=counter;

                    //function to move Knight
                    moveKnight(chessboard,moveNumber,currentRow,currentColumn,counter);

                    //keeps track of knights new position
                    currentRow = newRow(chessboard);
                    currentColumn = newColumn(chessboard);
                    trackingKnight(heuristicBoard,currentRow,currentColumn);

                    /*//function to erase available moves based on the old Knight's position
                    clearBoard(chessboard);
                    //function for new available moves based on the new Knight's position
                    newPossibleMoves(chessboard,currentRow,currentColumn);*/

                    //function rates the available moves based on the new Knight's position
                    rateMoves(heuristicBoard,currentRow,currentColumn,ratingMoves);

                    //increase counter
                    ++counter;
                }//end if 'moveNumber'
                //puts("\n\n\n");//new lines
            }//end while loop

            //display chess board
            //printBoard(chessboard);

            //Knight's last position
            currentRow = newRow(chessboard);
            currentColumn = newColumn(chessboard);
            knightsposition[currentRow][currentColumn]= counter;

            //display Knight's Moves board
            printMoves(knightsposition);


            if(counter == 64){
                printf("%s %d %s","Squares:", counter, "Complete Tour\n");
            }//end if
            else{
                printf("%s %d %s","Squares:", counter, "Incomplete Tour\n");
            }//end else

        }//end for loop 'column'
    }//end for loop 'row'


}//end function main
