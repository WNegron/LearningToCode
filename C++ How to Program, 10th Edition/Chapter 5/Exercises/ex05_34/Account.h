/***************************************************************************************************
Filename: Account.h
    Date: 2022-06-11
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 5.34 using only the tools and methods taught up to Chapter 5.

Description:

 

***************************************************************************************************/

#include <string> // enable program to use C++ string data type
#include <iostream> // enable program to perform input and output

class Account{
private:
/******************           Data Members           ***********************/
	std::string firstName; // account firstName data member
	std::string lastName; // account lastName data member
	double balance{0}; // data member with default initial value
	unsigned int accountNumber; //account number data member
	
public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
// Account constructor; assign parameters to data member			
	Account(unsigned int number,std::string first,std::string last, double initialBalance)
	:accountNumber(number),firstName(first),lastName(last){
	// validate that the initialBalance is greater than 0; if not,
	// data member balance keeps its default initial value of 0
		if(initialBalance > 0){ // if the initialBalance valid
			balance = initialBalance; // assign it to data member balance 
		}//end if
	}// end Account constructor
		
/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members		
	// function that sets the first name
	void setFirstName(std::string first){
		firstName = first;
	}// end setFirstName
		
	// function that sets the last name
	void setLastName(std::string last){
		lastName = last;
	}// end setLastName
		
	void setAccountNumber(unsigned int number){
		accountNumber = number;
	}//end setAccountNumer
		
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
	// function that returns the name
	std::string getFirstName(){
		return firstName;
	}// end getFirstName
		
	// function that returns the name
	std::string getLastName(){
		return lastName;
	}// end getLastName
		
	// function returns account balance
	double getBalance() const{
		return balance;
	}//end getBalance
		
	unsigned int getAccountNumber(){
		return accountNumber;
	}//end getAccountNumber
	
/**************************  Other Member Functions *******************************/	
	// function that deposits (adds) only valid amount to the balance
	void deposit(double depositAmount){
		if(depositAmount > 0){ //if the depositAmount is valid
			balance = balance + depositAmount;// add it to the balance
		}//end if
	}// end deposit

	//function to withdraw money from the Account
	void withdraw(double withdrawAmount){
		if(withdrawAmount <= balance){//if the withdrawAmount is valid
			balance = balance - withdrawAmount;// subtract it from balance
		}//end if
	else //if withdrawAmount isn't valid
			std::cerr << "Withdraw amount exceeded account balance";
	}// end withdraw

		
};// end class Account
