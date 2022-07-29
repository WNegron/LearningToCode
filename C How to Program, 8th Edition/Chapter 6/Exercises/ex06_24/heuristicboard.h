/***************************************************************************************************
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

****************************************************************************************************/
#include <stdbool.h>

//symbolic constants
#define ROWS 8
#define COLUMNS 8

//function to track the Knight's moves on the chessboard;
void trackingKnight(int chessboard[ROWS][COLUMNS],int row, int column){
    chessboard[row][column] = 0;
}//end function initializedBoard

void printHeuristicBoard(int chessboard[ROWS][COLUMNS]){
    printf("%s","    0   1   2   3   4   5   6   7\n");
        puts("  ---------------------------------");
        for(int row = 0; row < ROWS; row++){
            printf("%d |",row);
            for(int column = 0; column < COLUMNS; column++){
                printf(" %d |", chessboard[row][column]);
            }//end for loop 'column'
            puts("");
            puts("  ---------------------------------");
        }//end for loop 'rows'
}//end function printBoard

bool isAvailableH(int chessboard[ROWS][COLUMNS], int row, int column){
    if(chessboard[row][column] != 0){
        return true;
    }//end if 
    else{
        return false;
    }//end else   
}//end function previousSquares

bool isMoveValidH(int row, int column){
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

//newPossibleMoves will show available moves to the knight based on current position
void rateMoves(int chessboard[ROWS][COLUMNS],int currentRow, int currentColumn,int ratingMoves[ROWS]){
    bool validMove;
    bool available;
    int horizontal[COLUMNS] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[ROWS] = {-1,-2,-2,-1,1,2,2,1};

    for(int moveNumber = 0; moveNumber < ROWS; moveNumber++){
        validMove = isMoveValidH(currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
        
        if(validMove){
            
            available = isAvailableH(chessboard,currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
            
            if(available){
                ratingMoves[moveNumber] = chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]];
            }//end if 'available'
            else{
                ratingMoves[moveNumber] = 0;
            }//end else
        }//end if 'validMove'
        else{
            ratingMoves[moveNumber] = 0;
        }//end else
    }//end for loop 'moveNumber'
}//end funciton newPossibleMoves

void printRates(int ratingMoves[ROWS]){
    for(int i = 0; i < ROWS; i++){
        if(ratingMoves[i] != 0){
            printf("%s %d %s %d \n","Move ", i, " rating is ", ratingMoves[i]);
        }//end if
    }//end for loop 'i'
}//end function printRates

/*//newPossibleMoves will show available moves to the knight based on current position
void possibleMoves(int chessboard[ROWS][COLUMNS],int currentRow, int currentColumn){
    bool validMove;
    bool available;
    int horizontal[COLUMNS] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[ROWS] = {-1,-2,-2,-1,1,2,2,1};
    //int counter = 0;

    for(int moveNumber = 0; moveNumber < ROWS; moveNumber++){
        validMove = isMoveValid(currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
        
        if(validMove){
            
            available = isAvailable(chessboard,currentRow + vertical[moveNumber],currentColumn + horizontal[moveNumber]);
            
            if(available){
                //possibles moves for the knight
                switch(moveNumber){
                    case 0:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '0';
                        break;
                    case 1:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '1';
                        break;
                    case 2:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '2';
                        break;
                    case 3:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '3';
                        break;
                    case 4:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '4';
                        break;
                    case 5:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '5';
                        break;
                    case 6:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '6';
                        break;
                    case 7:
                        //chessboard[currentRow + vertical[moveNumber]][currentColumn + horizontal[moveNumber]] = '7';
                        break;
                    default:
                        ++counter;
                        if(counter == (ROWS - 1)){
                            puts("No more moves available");
                        }
                        break;
                }//end switch-case
            }//end if 'available' 
        }//end if 'validMove'
    }//end for loop moveNumber
}//end funciton newPossibleMoves*/


/*void nextMove(int chessboard[][COLUMNS]){
    int horizontal[COLUMNS] = {2,1,-1,-2,-2,-1,1,2};
    int vertical[ROWS] = {-1,-2,-2,-1,1,2,2,1};
    
}//end function possibleMoves*/
