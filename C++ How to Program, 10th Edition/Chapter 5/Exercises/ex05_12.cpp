/* ************************************************************************************

Filename: ex05_12.cpp
    Date: 2022-05-24
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.12 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

I declare the variable "product" as a 'double' instead of 'int' because the product of the multiples of
3 is out of the range on 'int'. Even uint64_t is not enough.

Description:
	5.12 (Calculating the Product of the Multiples of 3) Write an application that calculates the 
	product of the multiples of 3 in the range 3 to 50.
   
-----------------------------      Pseudocode      ------------------------------------
variable product
for loop counter = 1, counter <= 16, increase counter
product *= (3 * counter)
print product

-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
double product = 1;

//for loop
for(int i = 1; i <= 16; i++){
	//cout << 3 * i << endl; //prints the multiple of 3
	product = product * (3 * i);//calculate the product of the multiples of 3
}//end of for loop

//print the product
cout << "The product of the multiple of 3 (from 3 to 50): "
	 << product << endl;

return 0; // indicate that program ended successfully
} // end of function main
