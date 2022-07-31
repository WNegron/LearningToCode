/***************************************************************************************************
File Name: chessboard.h
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
 

***************************************************************************************************/
//symbolic constant
#define ROWS 8
#define COLUMNS 8

//function to initialize the chessboard; so the array is not full of garbage
void initializeBoard(char chessboard[ROWS][COLUMNS],int initialRow, int initialColumn){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            if((row == initialRow) && (column == initialColumn)){
                chessboard[row][column]='K';
            }//end if
            else{
                chessboard[row][column]=' ';
            }//end else
        }//end for loop 'column'
    }//end for loop 'row'
}//end function initializedBoard

//function to initialize the chessboard; so the array is not full of garbage
void initializeMoves(int chessboard[ROWS][COLUMNS]){
    for(int row = 0; row < ROWS; row++){
        for(int column = 0; column < COLUMNS; column++){
            chessboard[row][column]= 0;
        }//end for loop 'column'
    }//end for loop 'row'
}//end function initializedBoard


void printBoard(char chessboard[ROWS][COLUMNS]){ //,int rowSize, int columnSize){
    printf("%s","    0   1   2   3   4   5   6   7\n");
    puts("  ---------------------------------");
        for(int row = 0; row < ROWS; row++){
            printf("%d |",row);
            for(int column = 0; column < COLUMNS; column++){
                printf(" %c |", chessboard[row][column]);
            }//end for loop 'column'
            puts("");
            puts("  ---------------------------------");
        }//end for loop 'rows'
}//end function printBoard

void printMoves(int chessboard[ROWS][COLUMNS]){
    printf("%s","    0   1   2   3   4   5   6   7\n");
    puts("  -----------------------------------------------------");
    //printf("%s","---------------------------------------------------------------------------------------");
        for(int row = 0; row < ROWS; row++){
            printf("%d | ",row);
            for(int column = 0; column < COLUMNS; column++){
                printf(" %d  | ", chessboard[row][column]);
            }//end for loop 'column'
            puts("");
            puts("  -----------------------------------------------------");
        }//end for loop 'rows'
}//end function printMoves
