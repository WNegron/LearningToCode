/* ************************************************************************************

Filename: ex05_17.cpp
    Date: 2022-05-25
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.17 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
5.17 (Calculating Sales) An online retailer sells five products whose retail prices are as follows: 

	Product 1, $2.98; 
	product 2, $4.50; 
	product 3, $9.98; 
	product 4, $4.49 and 
	product 5, $6.87. 
	
	Write an application that reads a series of pairs of numbers as follows:
		
		a) product number
		b) quantity sold
		
Your program should use a switch statement to determine the retail price for each product. 

It should calculate and display the total retail value of all products sold. 

Use a sentinel-controlled loop to determine when the program should stop looping and display the 
final results.

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------
set productNumber to 0
set quantity to 0
set total to 0
set quit to 'n'

do
	prompt user to enter product number and quantity
	
	switch
		case 1
			total = total + (2.98 * quantity)
		case 2
			total = total + (4.50 * quantity)
		case 3 
			total = total + (9.98 * quantity)
		case 4
			total = total + (4.49 * quantity)
		case 5
			total = total + (6.87 * quantity)
		default
			print "Error please enter number 1 to 5, and how many"
			print "Would you like to quit? (enter -1): "
			read character
while quit != -1

-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
int productNumber = 0;
int quantity = 0;
double total = 0.00;
int quit = 0;

//being and continue loop until -1 is entered
do{
	//prompt user for product number and quantity
	cout << "Please enter product number (1 to 5): ";
	cin >> productNumber;
	cout << "Please enter quantity: ";
	cin >> quantity;
	
	//being switch-case to calculate total value
	switch(productNumber){
		case 1:
			total = total + ( 2.98 * quantity);
			break;
			
		case 2:
			total = total + ( 4.50 * quantity);
			break;
			
		case 3:
			total = total + ( 9.98 * quantity);
			break;
		
		case 4:
			total = total + ( 4.49 * quantity);
			break;
		
		case 5:
			total = total + ( 6.87 * quantity);
			break;
			
		default:
			cout << "Error please enter a product number 1 to 5\n";
			cout << "and quantity of the product sold\n";
			cout <<"If you like to quit, please enter -1\n";
			cout <<"Would you like to quit? ";
			cin >> quit;
	}//end of switch-case
}while(quit != -1);//end of do...while loop 

cout << endl;//print newline

cout << "Your total is: " << total << endl;

return 0; // indicate that program ended successfully
} // end of function main
