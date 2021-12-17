/* ************************************************************************************

Filename: ex04_35.cpp
    Date: 2021-12-14
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.35 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Using the forumlas given in the exercise do give an accurate value of e. The factorial function and 
the power of X function is correct and works every time. The function constantE(int numberOfTerms) 
will give an accurate value of e if the parameter is 12.

Description:

4.35 (Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) 
and is defined as follows:
	n! = n · (n – 1) · (n – 2) · ... · 1 (for values of n greater than 1) 
	and
	n!=1 (forn=0orn=1).
	
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each of the following:

	a) Write a program that reads a nonnegative integer and computes and prints its factorial.
	
	b) Write a program that estimates the value of the mathematical constant e by using the
	formula:
		        1    1    1
		e = 1 + -- + -- + -- +...
                1!   2!   3!
              
	Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
	
	c) Write a program that computes the value of ex by using the formula
		
		        x   x^2   x^3
		e = 1 + - +  -  +  -  +...
		        1!   2!    3!
	
	Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> // parameterized stream manipulators

using namespace std; //program uses names from the std namespace

//calculates the power of x
int powerX(int x, int power){
	int counter = 1;
	int powerX = 1;
	while(counter <= power){
		powerX *= x;
		++counter;
	}//end while
	
	return powerX;
}//end powerX

//calculates factorial
int factorial(int n){
	int counter = 1;
	int factorialNumber = 1;
	
	while(counter <= n){
		factorialNumber = factorialNumber * counter;
		++counter;
	}//end while
	
	return factorialNumber;
}//end factorial

//calculates e, the user enters how many times the summation
//the function is accurate if the parameter is 12
double constantE(int counterSize){
	int counter = 1;
	double constE = 1.0;
	//int counterSize = 12;
	
	while(counter <= counterSize){
		constE = constE + 1.0/ factorial(counter);
		++counter;		
	}//end while
	
	return constE;
}//end constantE

//calculates e to the power of X
//the function uses the formula to calculate the value of e^x
//using formula provided in the exercise. It is not accurate if x is less than 12
double ePowerX(int x){
	int counter = 1;
	double ePowX = 1.0;
	
	ePowX = constantE(x);
	
	while(counter <= x){
		 ePowX = ePowX +( powerX(x,counter)/ factorial(counter));
		++counter;		
	}//end while
	
	return ePowX;
}//end while

// main function begins program
int main(){

// declaration and initializing variables
int number = -1;
//int x = 0;
//double e = 1.0;

while(number < 0){
cout << "Enter a value for the precision of e: ";
cin >> number;

}//end while

cout << "The factorial of " << number << "!: " << factorial(number) << endl;

//calculate e
cout << setprecision(7) << fixed;
cout << "The value of e is: " << constantE(number) << endl;

//calculate e^x
//cout << "Power x: " << powerX(x,number) << endl;

cout << setprecision(7) << fixed;
cout << "e to the power of x is: " << ePowerX(number) << endl;

cout << endl;
//x = number;

/*calculating e to the power of x using this method is more accurate than the formula provided in 
the exercise. Remove the parameter from the function and declare initialize counterSize to 12 in 
the function constantE()*/
/*while(x < number){
	e *= constantE();
	++x;
}//end while

cout << setprecision(7) << fixed;
cout << "The value of e to the power of " << number << ": " << e << endl;*/

return 0; // indicate that program ended successfully
} // end of function main
