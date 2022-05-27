/**************************************************************************************

Filename: ex05_28.cpp
    Date: 2022-05-28
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.28 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.28 (“TheTwelveDaysofChristmas”Song)Write an application that uses iteration and switch 
statements to print the song “The Twelve Days of Christmas.” One switch statement should be used to 
print the day (“first,” “second,” and so on). A separate switch statement should be used to print 
the remainder of each verse. 

Visit the website en.wikipedia.org/wiki/The_Twelve_Days_ of_Christmas_(song) for the lyrics of the song.



--------- Lyrics --------------------------------------------------------------
On the first day of Christmas my true love sent to me
A partridge in a pear tree.

On the second day of Christmas my true love sent to me
Two turtle doves,
And a partridge in a pear tree.

On the third day of Christmas my true love sent to me
Three French hens,
Two turtle doves,
And a partridge in a pear tree.

On the fourth day of Christmas my true love sent to me
Four calling birds,
Three French hens,
Two turtle doves,
And a partridge in a pear tree.

    a partridge in a pear tree
    Two turtle doves
    Three French hens
    four calling birds
    five gold rings
    six geese a-laying
    seven swans a-swimming
    eight maids a-milking
    nine ladies dancing
    ten lords a-leaping
    eleven pipers piping
    twelve drummers drumming
---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

**************************************************************************************/

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
for(int i = 1; i <= 12; i++){
	cout << "On the ";
	
	switch(i){
		case 1:
			cout << "first";
			break;
		case 2:
			cout << "second";
			break;
		case 3:
			cout << "third";
			break;
		case 4:
			cout << "fourth";
			break;
		case 5:
			cout << "fifth";
			break;
		case 6:
			cout << "sixth";
			break;
		case 7:
			cout << "seventh";
			break;
		case 8:
			cout << "eight";
			break;
		case 9:
			cout << "ninth";
			break;
		case 10:
			cout << "tenth";
			break;
	    case 11:
	    	cout << "eleventh";
			break;
        case 12:
        	cout << "twelfth";
			break;
	}//end of switch
	
	cout << " day of Christmas my true love sent to me" << endl;
	
	
	switch(i){
		case 12:
			cout << "Twelve drummers drumming," << endl;
		case 11:
			cout << "Eleven pipers piping," << endl;
		case 10:
			cout << "Ten lords a leaping," << endl;
		case 9:
			cout << "Nine ladies dancing," << endl;
		case 8:
			cout << "Eight maids a milking," << endl;
		case 7:
			cout << "Seven swans a swimming," << endl;
		case 6:
			cout << "Six geese a laying," << endl;
		case 5:
			cout << "Five gold rings," << endl;
		case 4:
			cout << "Four calling birds," << endl;
		case 3:
			cout << "Three French hens," << endl;
		case 2:
			cout << "Two turtle doves," << endl;
		case 1:
			if(i > 1)
				cout << "and ";
			cout << "a partridge in a pear tree" << endl;
	}//end of switch
}//end of for

return 0; // indicate that program ended successfully
} // end of function main
