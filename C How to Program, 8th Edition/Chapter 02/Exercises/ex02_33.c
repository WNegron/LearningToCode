/***************************************************************************************************
File Name: ex02_33.c
     Date: 2022-06-02
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.33 using only the tools and methods taught up to chapter 2.

Description:
	2.33 (Car-Pool Savings Calculator) Research several car-pooling websites. Create an 
application that calculates your daily driving cost, so that you can estimate how much money could 
be saved by car pooling, which also has other advantages such as reducing carbon emissions and 
reducing traffic congestion. 

	The application should input the following information and display the user’s cost per day 
of driving to work:

	a) Total miles driven per day.
	b) Cost per gallon of gasoline.
	c) Average miles per gallon.
	d) Parking fees per day.
	e) Tolls per day.

----------   Example Output   ----------------------------------------------------------------------

----------------------------------------------------------------------------------------------------

   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int milesPerDay, costPerGallon, milesPerGallon, parkingPerDay, tollsPerDay;

	//prompt user for total miles per day data
	printf("%s", "Enter total miles driven per day: ");
	//read total miles per day data from user
	scanf("%d", &milesPerDay);

	//prompt user for cost per gallon data
	printf("%s", "Enter cost per gallon: ");
	//read cost per gallon data from user
	scanf("%d", &costPerGallon);

	//prompt user for average miles per gallon
	printf("%s", "Enter average miles per gallon: ");
	//read average miles per gallon data from user
	scanf("%d", &milesPerGallon);

	//prompt user for parking fees per day data
	printf("%s", "Enter parking fees per day: ");
	//read parking fees per day data from user
	scanf("%d", &parkingPerDay);

	//prompt user for tolls per day data
	printf("%s", "Enter tolls per day: ");
	//read tolls per day data from user
	scanf("%d", &tollsPerDay);

	//display how much money could be saved by carpooling
	printf("%s %d \n", "Potential savings: ", ((milesPerDay / milesPerGallon) * costPerGallon) + parkingPerDay + tollsPerDay);

	
}//end function main

