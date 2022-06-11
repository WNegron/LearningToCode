/***************************************************************************************************

File Name: DollarAmount.h
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.32 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	
	5.32 (DollarAmount with Banker’s Rounding) The DollarAmount class’s addInterest member function 
uses the biased half-up rounding technique in which fractional amounts of .1, .2, .3 and .4 round 
down, and .5, .6, .7, .8 and .9 round up. In this technique, four values round down and five round 
up. Banker’s rounding fixes this problem by rounding .5 to the nearest even integer—e.g., 0.5 rounds 
to 0, 1.5 and 2.5 round to 2, 3.5 and 4.5 round to 4, etc. Enhance class DollarAmount from Exercise 
5.31 by reimplementing addInterest to use banker’s rounding, then retest the compound-interest 
program.
	
***************************************************************************************************/
#include <cmath> //enables program to use mathematical functions
#include <string> // enable program to use C++ string data type
#include <iostream>//enable program to perform input/output

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
	
	//Exercise 5.32: Banker's rounding
	//Banker’s rounding fixes this problem by rounding .5 to the nearest even integer—e.g., 0.5 rounds 
	//to 0, 1.5 and 2.5 round to 2, 3.5 and 4.5 round to 4, etc.
	int interestDollars = ((amount * rate) / divisor) / 100;
	int interestCents = ((amount * rate) / divisor) % 100;
	
	if(interestCents >= 50 && interestCents < 60){
		if(((interestDollars % 10) % 2 ) == 1){
			++interestDollars;
			interestCents = 0;
			
			DollarAmount interest{interestDollars,interestCents};

			 interest.toPennies();
			 add(interest);// add interest to this object's amount
		}//end if
	}//end if
	else{
		interestDollars = ((amount * rate + divisor / 2) / divisor) / 100;
		interestCents = ((amount * rate + divisor / 2) / divisor) % 100; 
		DollarAmount interest{interestDollars, interestCents};

		interest.toPennies();
		add(interest);// add interest to this object's amount
	}//end else
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

// Exercise 5.31: divide member function that receives an int parameter, divides the data member 
// amount by that value and stores the result in the data member. Use rounding techniques similar to 
// the addInterest member function. 
void divide(int parameter){
	//in order to ensure a rounding technique like the one use in addInterest function
	//amount and parameter must be made floating points 
	//the result is multiply by 100; so that we can correctly round the decimal point values
	//then we had 50; to round the number up since int truncates anything after the decimal point
	//then we divided by 100; to make the correct amount of pennies
	amount = (((float(amount) / float(parameter)) * 100) + 50) / 100;
}//end function divide

};// end DollarAmount class

