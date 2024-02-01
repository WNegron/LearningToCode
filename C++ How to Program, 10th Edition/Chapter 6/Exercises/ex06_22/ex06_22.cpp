/***************************************************************************************************

File Name: ex06_22.cpp
     Date: 2024-01-31
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.22 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.22 (Rectangle of Asterisks) Write a function that displays at the left margin of the screen a 
solid rectangle of asterisks whose width and height are specified in integer parameters width and 
height. For example, if width is 10 and height is 3, the function displays the following:

**********
**********
**********
    
***************************************************************************************************/
#include <iostream>//enable program to perform input/output

using namespace std;//program uses names from namespace std

//function prototype
void displayRectangle(int,int);

int main(){
    //variable
    int width = 0, height = 0;

    cout << "\nLet's print a rectangle, please enter the size\n";
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    displayRectangle(width,height);
 
    return 0;//program ended successfully
}//end of main function

void displayRectangle(int width,int height){

    cout << endl << endl;
    //loop
    for(unsigned int heightCounter = 0; heightCounter < height; ++heightCounter){
        for(unsigned int widthCounter = 0; widthCounter < width; ++widthCounter){
            cout << "*";
        }//end of widthCounter for loop
        cout << endl;
    }//end of heightCounter for loop

    cout << endl << endl;
}//end of displayRectangle funciton

