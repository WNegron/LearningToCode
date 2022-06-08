/***************************************************************************************************

File Name: DollarAmount.h
     Date: 2022-06-07
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.30 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	
	5.30 (DollarAmount Constructor with Two Parameters) Enhance class DollarAmount (Fig. 5.8) with a 
constructor that receives two parameters representing the whole number of dollars and the whole 
number of cents. Use these to calculate and store in the data member amount the total number of 
pennies. 

	Test the class with your new constructor.
	
***************************************************************************************************/
#include <cmath> //enables program to use mathematical functions
#include <string> // enable program to use C++ string data type

class DollarAmount{// class definition

/******************           Data Members           ***********************/
private:
	int64_t amount{0};// dollar amount in pennies
	int dollars{0};// Exercise 5.30: dollar amount whole no cents
	int cents{0};// Exercise 5.30: cents amount whole, cents value must be between 1 and 99
	

/*********                     Member Functions                         ***********/
public:
// Class constructor; initializes dollars and cents
explicit DollarAmount(int amountDollars, int amountCents)
: dollars{amountDollars}, cents{amountCents} {/*empty body*/}

// add function; add right's amount to this object's amount
void add(DollarAmount right){
	//can access private data of other objects of the same class
	amount += right.amount;
}//end function add

// subtract function; subtract right's amount
void subtract(DollarAmount right){
	//can access private data of other objects oft he same class
	amount -= right.amount;
}// end function subtract

// uses integer arithmetic to calculate interest amount,
// then calls add with the interest amount
void addInterest(int rate, int divisor){
	//create DollarAmount representing the interest
	dollars = ((amount * rate + divisor / 2) / divisor) / 100;
	cents = ((amount * rate + divisor / 2) / divisor) % 100; 
	DollarAmount interest{dollars,cents};
	interest.toPennies();
	
	add(interest);// add interest to this object's amount
}//end function addInterest

// return a string representation of a DollarAmount object
std::string toString() const{
	//convert the numeric value of dollars and cents into a string object
	//abs (from header <cmath>) to get the absolute value of the cents
	//to ensure that cents are always represented as positive value
	std::string dollars{std::to_string(amount/100)};
	std::string cents{std::to_string(std::abs(amount%100))};
	return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
}//end function toString

//Exercise 5.30: calculate and store in the data member amount the total number of pennies.
void toPennies(){
		//convert whole dollars into pennies adds cents 
		amount = (dollars * 100) + cents;
}//end function toPennies

};// end DollarAmount class
