/***************************************************************************************************

File Name: ex06_23.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.23 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

   6.23 (Rectangle of Any Character) Modify the function created in Exercise 6.22 to form the rectangle 
out of whatever character is contained in character parameter fillCharacter. Thus, if width is 6, height 
is 2 and fillCharacter is %, then this function should print the following:

%%%%%% 
%%%%%%
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

//function prototype
void displayRectangle(int,int,char);

int main(){
    //variable
    int width = 0, height = 0;
    char fillCharacter = ' ';

    cout << "\nLet's print a rectangle, please enter the size\n";
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter a character: ";
    cin >> fillCharacter;

    displayRectangle(height,width,fillCharacter);
 
    return 0;//program ended successfully
}//end of main function

void displayRectangle(int height,int width,char fillCharacter){

    cout << endl << endl;
    //loop
    for(unsigned int heightCounter = 0; heightCounter < height; ++heightCounter){
        for(unsigned int widthCounter = 0; widthCounter < width; ++widthCounter){
            cout << fillCharacter;
        }//end of widthCounter for loop
        cout << endl;
    }//end of heightCounter for loop

    cout << endl << endl;
}//end of displayRectangle funciton

