/* ************************************************************************************

Filename: ex04_13.cpp
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.13 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	For Exercises 4.13––4.16, perform each of these steps:
		a) Read the problem statement.
		b) Formulate the algorithm using pseudocode and top-down, stepwise refinement.
		c) Write a C++ program.
		d) Test, debug and execute the C++ program.
		
4.13 (Fuel Usage) Drivers are concerned with the amount of fuel used by their motor
vehicles. One driver has kept track of several trips by recording kilometers driven and
liters of fuel used for each trip. Develop a C++ program that uses a while statement to
input the kilometers driven and liters of petrol used for each trip. The program should
calculate and display the kilometers per liter obtained for each trip and print the
combined kilometers per liter obtained for all tankfuls up to this point.

   ***** Example Output *******************************************************
   |	Enter kilometers driven (-1 to quit): 287                            |
   |	Enter liters used: 30                                                |
   |	Kms per liter this trip: 9.566667                                    |
   |	Total kms per liter: 9.566667                                        |
   |	Enter kilometers driven (-1 to quit): 450                            |
   | 	Enter liters used: 60                                                |
   |	Kms per liter this trip: 7.500000                                    |
   |	Total kms per liter: 8.188889                                        |
   |	Enter kilometers driven (-1 to quit): -1                             |
   ***************************************************************************
   
************************************************************************************ */

/*********************           Pseudocode            ***************************
Initialize variables
prompt user to enter info
input the info
while user has not yet enter the sentinel
	calculate km per liter for trip
	calculate total km per liter
	prompt user to enter next trip
	input the next trip(possibly the sentinel)


*********************          End Pseudocode           ***************************/


#include <iostream>//enable program to perform input and output

using namespace std;//program uses names from the std namespace

//main function begins program
int main(){

//declaration and initializing variables
double totalLiters = 0;
double totalKM = 0;
double km = 0;
double liters = 0;


cout << "Enter kilometers driven (-1 to quit): ";//prompt user for input
cin >> km;// read user input into liters

//loop until sentinel value read from user
while(km != -1){
	
	cout << "Enter liters used: ";//prompt user for input
	cin >> liters;//read user input into liters
	
	cout << "Kms per liter this trip: " << km / liters << endl;
	
	totalLiters += liters; //add liters
	totalKM += km; //add kilometers
	
	cout << "Total kms per liter: " << totalKM / totalLiters << endl;
	
	cout << "Enter kilometers driven (-1 to quit): ";//prompt user for input
	cin >> km;// read user input into liters
}//end while

return 0;//indicates program ended successfully
}//end main function
