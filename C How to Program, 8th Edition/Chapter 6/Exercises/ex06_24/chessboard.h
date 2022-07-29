/***************************************************************************************************
File Name: chessboard.h
     Date: 2022-07-13
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 6.11 using only the tools and methods taught up to chapter 6.

Description:

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

