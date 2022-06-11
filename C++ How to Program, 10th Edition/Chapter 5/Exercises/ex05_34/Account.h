/***************************************************************************************************

Filename: Account.h
    Date: 2022-06-11
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 5.34 using only the tools and methods taught up to Chapter 5.

Description:

	5.34 (Account Class That Stores a DollarAmount) Upgrade the Account class from Exercise 3.9 to 
define its balance data member as an object of class DollarAmount from Exercise 5.33. Reimplement 
the bodies of class Account’s constructor and member functions accordingly.

***************************************************************************************************/
#include <string>//enable program to use string data type
#include "DollarAmount.h"//enable program to use DollarAmount data type

class Account{// class definition

private:
/******************           Data Members           ***********************/
std::string name; // account name data member
DollarAmount balance{0,0}; // data member with default initial value

public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
// Account constructor with two parameters
		Account(std::string accountName, DollarAmount initialBalance)
			:name(accountName){// assign accountName to data member name
			
			// validate that the initialBalance is greater than 0; if not,
			// data member balance keeps its default initial value of 0
			if(initialBalance.toPennies() > 0){ // if the initialBalance valid
				balance.add(initialBalance); // assign it to data member balance 
			}//end if
		}// end Account constructor

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
// function that sets the name
		void setName(std::string accountName){
			name = accountName;
		}// end setName 
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value

// function returns account balance
		std::string getBalance() {
			return balance.toString();
		}//end getBalance

// function that returns the name
		std::string getName() const{
			return name;
		}// end getName	

/**************************  Other Member Functions *******************************/
// function that deposits (adds) only valid amount to the balance
		void deposit(DollarAmount depositAmount){
			if(depositAmount.toPennies() > 0){ //if the depositAmount is valid
				balance.add(depositAmount);// add it to the balance
			}//end if
		}// end deposit
		
//Exercise 3.9
//function to withdraw money from the Account
		void withdraw(DollarAmount withdrawAmount){
			if(withdrawAmount.toPennies() <= balance.toPennies()){//if the withdrawAmount is valid
				balance.subtract(withdrawAmount);// subtract it from balance
			}//end if
			else //if withdrawAmount isn't valid
				std::cerr << "Withdraw amount exceeded account balance";
		}// end withdraw
};// end ClassName class
