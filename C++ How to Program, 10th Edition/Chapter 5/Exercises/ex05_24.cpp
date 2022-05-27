/* ************************************************************************************

Filename: ex05_24.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.24 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.24 (Modified Egg-timer Program) Modify the application you wrote in Exercise 5.23 to read an 
odd number in the range 1 to 29 to specify the height of the egg-timer. Your program should then 
display an egg-timer of the appropriate size. 

(The egg-timer shown above in Exercise 5.23 has a height of 9).

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
int sizeOfEggTimer = 0;

cout << "Egg-Timer Program: the smallest size egg-timer it can print is size 5";
cout << "\n anything less will not look like an egg-timer \n";
 
while( sizeOfEggTimer != -1){	
//prompt user for the size of the egg-timer
cout << "Enter size of the Egg-Timer to be printed (-1 to exit): ";
cin >> sizeOfEggTimer;//read size from user

cout << endl;//print newline

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
		}//end of else if third line
		
		//prints the middle and bottom half if size is an odd number
		else if(sizeOfEggTimer % 2 == 1){
			if(i == (sizeOfEggTimer/2) + 1){
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
			}//end of if
			
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
		}//end else if middle for an odd size number
		
		//prints the middle and bottom half if size is an even number
		else if(sizeOfEggTimer % 2 == 0){
			if(i == (sizeOfEggTimer/2)){
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
			}//end of if
			
			//prints bottom half of the egg timer
			else if(i > (sizeOfEggTimer/2)){
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
		}//end else if middle for an even size number

		
	cout << endl;//print newline
}//end of for int i 
cout << endl;//print newline

}//end of while loop

return 0; // indicate that program ended successfully
} // end of function main
