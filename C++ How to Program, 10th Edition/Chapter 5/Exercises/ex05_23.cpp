/* ************************************************************************************

Filename: ex05_23.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.23 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.23 (Egg-timer Program) Write an application that prints the following egg-timer shape. You may
use output statements that print a single asterisk (*), a single hash (#) a single space or a single
newline character. Maximize your use of iteration (with nested for statements), and minimize the
number of output statements.

--------- Example Output --------------------------------------------------------------
######### 
#*******# 
# ***** # 
#  ***  # 
#   *   # 
#  ***  # 
# ***** # 
#*******# 
#########
---------------------------------------------------------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int sizeOfEggTimer = 9;

for(int i = 1; i <= sizeOfEggTimer; i++){
	
		//prints the first and last line
		if((i == 1) || (i == sizeOfEggTimer)){
			for(int j = 1; j <= sizeOfEggTimer; j++)
				cout << "#";
		}//end of if
		
		//prints the second line and the penultimate line
		else if((i == 2) || (i == sizeOfEggTimer - 1)){
			for(int k = 1; k <= sizeOfEggTimer; k++){
				if((k == 1) || (k == sizeOfEggTimer)){
					cout << "#";
				}//end of if
				else{
					cout << "*";
				}
			}//end of for
		}//end of else if second line...
		
		//prints from the third line to the half the size of the Egg Timer
		else if((i > 2) && (i <= (sizeOfEggTimer/2))){
			for(int j = 1; j <= sizeOfEggTimer; j++){
				if((j == 1) || (j == sizeOfEggTimer))
					cout << "#";
				else if ((j > 1) && (j < i))
					cout << " ";
				else if ((j >= i) && (j <= ((sizeOfEggTimer - i) + 1)))
					cout << "*";
				else if((j >= (sizeOfEggTimer - i)) && (j < sizeOfEggTimer))
					cout << " ";
			}//end of for
		}//end of else if third line to half
		
		//prints the middle
		else if(i == (sizeOfEggTimer/2) + 1){
			for(int j = 1; j <= sizeOfEggTimer; j++){
				if(j == 1 || j == sizeOfEggTimer)
					cout << "#"; 
				else if( j == i)
					cout << "*";
				else if(j > 1 && j < i)
					cout << " ";
				else if(j > i && j < sizeOfEggTimer)
					cout << " ";
			}//end of for
		}//end of else if middle
			
		//prints bottom half of the egg timer
		else if(i > ((sizeOfEggTimer/2) + 1)){
			for(int j = 1; j <= sizeOfEggTimer; j++){
				if(j==1 || j==sizeOfEggTimer)
					cout << "#";
				else if(j > 1 && j <= (sizeOfEggTimer-i))
					cout << " ";
				else if(j > (sizeOfEggTimer-i) && j <= (sizeOfEggTimer - (sizeOfEggTimer-i)))
					cout << "*";
				else if(j > (sizeOfEggTimer - (sizeOfEggTimer-i)) && j < sizeOfEggTimer)
					cout << " ";
			}//end of for
		}//end of else if bottom half
		
	cout << endl;//print newline
}//end of for int i 

return 0; // indicate that program ended successfully
} // end of function main
