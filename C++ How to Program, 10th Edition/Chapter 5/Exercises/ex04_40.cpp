/* ************************************************************************************

Filename: ex04_40.cpp
    Date: 2022-04-27
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.40 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	4.40 (Home building) In developing communities throughout the world, housing, especially in 
urban areas, is a critical issue. Investigate low-cost housing projects and how communities are 
helping the underprivileged build homes. 

	Write a program that will enable a home-builder to determine how many bricks and how many 50-kg 
bags of cement are required to build a double-skin wall using 230 × 115 mm bricks. The user should 
enter the height and width of the wall in meters. 

	The program should calculate the area of the wall and then display the number of bricks and the 
number of cement bags required to build the wall. The program should continue calculating brick and 
cement bag requirements until the user enters a height of −1.

	Use the following assumptions in your calculator: 
		Bricks per square meter of double-skin wall = 104 
		Volume of mortar per brick laid = 0.00034 m3 
		Cement Bags per cubic meter of Mortar = 7 
		Assume that 5% of mortar is wasted and that 2.5% of the bricks are unusable broken. 

	Round off all requirements to the next integer. Use the ceil function from the <cmath> header, 
which will be introduced in Chapter 6. ceil(x) returns the smallest integer that is greater than or 
equal to x.

Formulas Need:

	Area (of Wall) = length x width
	
	Bricks:
		Quantity of Bricks Needed = area of wall x Bricks per square meter
		Unusable Bricks = Quantity of Brick x 2.5 %
		Total Bricks Need = Quantity of Bricks + Unusable Bricks
	
	Mortar:
		Quantity of Mortar Needed = Volume of Mortar per Brick x Quantity of Bricks Needed
		Quantity of Cement Needed = Cement Bag per cubic meter of Mortar x  Total Mortar Need
		Wasted Mortar = Quantity of Mortar Needed x 5%
		Total Mortar Needed = Quantity of Mortar Needed + Wasted Mortar

   
-----------------------------      Pseudocode      ------------------------------------
Home Building - Calculate How many bricks and how much mortar will be needed to build your home

prompt user to enter height in meters
while user doesn't enter -1 to quit program
prompt user to enter width in meters

calculate:
	area of wall
	bricks needed
	unusable bricks
	total bricks needed
	mortar needed
	cement needed
	wasted mortar
	total mortar needed
	
print the area of the wall is:
print area of wall
print amount of bricks needed is:
print quantity of bricks

prompt user to enter height in meters
 
-----------------------------    End Pseudocode    ------------------------------------

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------


************************************************************************************ */

/**************************** Global Functions *****************************************/

//function to calculate the Area of a Wall
int areaOfWall (int l, int w){
	return l * w;
}//end of areaOfWall function

//function to calculate how many bricks are need to build the wall 
int bricksNeeded (int l, int w){
	int bricksPerSquareMeter = 104;
	
	return areaOfWall (l,w) * bricksPerSquareMeter;
}//end of bricksNeeded function

//function to calculate how many bricks will be unusable
double unusableBricks (int l, int w){
	return bricksNeeded(l,w) * 0.025;
}//end of wastedBricks function

//function to calculate quantity of mortar needed to build the wall
double quantityOfMortar (int l, int w){
	double volumeOfMortarPerBrick = 0.00034;
	return bricksNeeded(l,w) * volumeOfMortarPerBrick;
}//end of quantityOfMortar function

//function to calculate quantity of wasted mortar
double wastedMortar (int l, int w){
	return quantityOfMortar(l,w) * 0.05;
}//end of wastedMortar function

//function to calculate quantity of cement needed to make mortar
double cementNeeded (int l, int w){
	return 7.0 * (quantityOfMortar(l,w) + wastedMortar(l,w));
}//end of cementNeeded function

/********************************************************************************/

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int height = 0;
int width = 0;

cout << "Home Building - Calculate How many bricks and how much mortar will "
	 << "be needed to build your home" << endl;

//prompt user for wall height
cout << "Enter height of wall (meters): ";
cin >> height;

//check value of 'height' if equal to -1 program will end
while(height != -1){
	cout << "Enter width of wall: ";
	cin >> width;
	
	cout << "Area of Wall = " << areaOfWall(height,width) << endl;
	cout << "Bricks Needed = " << bricksNeeded(height,width) + unusableBricks(height,width);
	cout << endl;
	cout << "Bags of Cement Needed = " << cementNeeded(height,width);
	cout << endl;
	cout << "Enter height of wall (meters): ";
	cin >> height;
}//end of while

return 0; // indicate that program ended successfully
} // end of function main
