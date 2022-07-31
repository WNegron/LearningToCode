/***************************************************************************************************
File Name: knightstour.h
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
insights. We’ll use these to develop a heuristic (or strategy) for mov- ing the knight. Heuristics do not 
guarantee success, but a carefully developed heuristic greatly improves the chance of success. You may have 
observed that the outer squares are in some sense more troublesome than the squares nearer the center of 
the board. In fact, the most troublesome, or inaccessible, squares are the four corners.

Intuition may suggest that you should attempt to move the knight to the most trou- blesome squares 
first and leave open those that are easiest to get to, so that when the board gets congested near the 
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
[Note: As the knight moves around the chess- board, your program should reduce the accessibility 
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

#include <stdbool.h> // allows the use of bool, true, and false

//symbolic constants
#define ROWS 8
#define COLUMNS 8

//checks if the Knight can move to the desired sqaured
bool isAvailable(char chessboard[ROWS][COLUMNS], int row, int column){
    if(chessboard[row][column] != 'X'){
        return true;
    }//end if 
    else{
        return false;
    }//end else   
}//end function previousSquares

//returns the current row for the Knight
int newRow(char chessboard[ROWS][COLUMNS]){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            if(chessboard[row][column] == 'K'){
                return row;
            }//end if
        }//end for loop 'column'
    }//end for loop 'row'
}//end function newRow

//returns the current column for the Knight
int newColumn(char chessboard[ROWS][COLUMNS]){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            if(chessboard[row][column] == 'K'){
                return column;
            }//end if
        }//end for loop 'column'
    }//end for loop 'row'
}//end function newColumn

//function to make sure the move is within the confines of the board
bool isMoveValid(int row, int column){
    if((row >= 0) && (row <= 7)){
        if((column >= 0) && (column <= 7)){
            return true;
        }//end if 'column'
        else{
            return false;
        }//end else
    }//end if 'row'
    else{
        return false;
    }//end else
}//end function isMoveValid

// Updated On: 2022-07-28
//clearBoard will erase the old available moves
void clearBoard(char chessboard[][COLUMNS]){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            if(chessboard[row][column] == '0'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '1'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '2'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '3'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '4'){
                chessboard[row][column] = ' ';
            }
                        
            if(chessboard[row][column] == '5'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '6'){
                chessboard[row][column] = ' ';
            }
            
            if(chessboard[row][column] == '7'){
                chessboard[row][column] = ' ';
            }
        }//end for loop column
    }//end for loop row
}//end function clearBoard

// Updated On: 2022-07-28
//newPossibleMoves will show available moves to the knight based on current position
void newPossibleMoves(char chessboard[ROWS][COLUMNS],int currentRow, int currentColumn){
    bool validMove;
    bool available;
    //knights available moves
    int horizontal[COLUMNS] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[ROWS] = {-1,-2,-2,-1,1,2,2,1};
    
    for(int moveNumber = 0; moveNumber < ROWS; moveNumber++){
        /// verifies the move is within the chess board; returns true or false
        validMove = isMoveValid(currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
        
        if(validMove){
            //verifies the square is available
            available = isAvailable(chessboard,currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
            
            if(available){
                //possibles moves for the knight
                switch(moveNumber){
                    case 0:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '0';
                        break;
                    case 1:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '1';
                        break;
                    case 2:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '2';
                        break;
                    case 3:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '3';
                        break;
                    case 4:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '4';
                        break;
                    case 5:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '5';
                        break;
                    case 6:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '6';
                        break;
                    case 7:
                        chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '7';
                        break;
                    default:
                        break;
                }//end switch-case
            }//end if 'available' 
        }//end if 'validMove'
    }//end for loop moveNumber
}//end funciton newPossibleMoves

//function to move Knight
void moveKnight(char chessboard[ROWS][COLUMNS], int moveNumber, int currentRow, int currentColumn, int counter){
    //knights available moves
    int horizontal[COLUMNS] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[ROWS] = {-1,-2,-2,-1,1,2,2,1};
    bool validMove;
    bool available;

    /*char squares[64] = {'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16',
    '17','18','19','20','21','22','23','24','25','26','27','28','29','30','31','32',
    '33','34','35','36','37','38','39','40','41','42','43','44','45','46','47','48',
    '49','50','51','52','53','54','55','56','57','58','59','60','61','62','63','64'};*/

    // verifies the move is within the chess board; returns true or false
    validMove = isMoveValid(currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
    
    if(validMove){

        //verifies the square is available
        available = isAvailable(chessboard,currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber] );

        if(available){
            //knight's previous position
            chessboard[currentRow][currentColumn] = 'X';//= squares[counter];
            
            //moving the knight
            currentRow += vertical[moveNumber];
            currentColumn += horizontal[moveNumber];
            chessboard[currentRow][currentColumn] = 'K';
        }//end if 'available' 
        else{
            printf("%s","Square is not available!\nEnter new move!\n");
        }//end else
    }//end if 'validMove'
    else{
        printf("%s","Move is not valid!\nEnter new move!\n");
    }//end else
}//end function moveKnight
