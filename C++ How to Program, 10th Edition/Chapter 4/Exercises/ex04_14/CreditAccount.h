/* ************************************************************************************

Filename: CreditAccount.h
    Date: 2021-12-13
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.14 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

4.14 (Credit Limits) Develop a C++ program that will determine whether a department-store 
customer has exceeded the credit limit on a charge account. For each customer, the 
following facts are available:
	a) Account number (an integer)
	b) Balance at the beginning of the month
	c) Total of all items charged by this customer this month
	d) Total of all credits applied to this customer's account this month
	e) Allowed credit limit
	
The program should use a while statement to input each of these facts, calculate the new
balance (= beginning balance + charges – credits) and determine whether the new balance 
exceeds the customer’s credit limit. For those customers whose credit limit is exceeded, 
the program should display the customer’s account number, credit limit, new balance and 
the message “Credit Limit Exceeded.”

********* Example Output ************************************************************
 |                                                                                |
 | Enter account number (or -1 to quit): 100 Enter beginning balance: 5394.78     | 
 | Enter total charges: 1000.00                                                   |
 | Enter total credits: 500.00                                                    |
 | Enter credit limit: 5500.00 New balance is 5894.78 Account: 100                |
 | Credit limit: 5500.00 Balance: 5894.78 Credit Limit Exceeded.                  |
 | Enter Account Number (or -1 to quit): 200 Enter beginning balance: 1000.00     |
 | Enter total charges: 123.45                                                    |
 | Enter total credits: 321.00                                                    |
 | Enter credit limit: 1500.00 New balance is 802.45                              |
 | Enter Account Number (or -1 to quit): -1                                       |
 |                                                                                |
*************************************************************************************

************************************************************************************ */

#include <iostream>//enable program to perform input and output

class CreditAccount{// class definition
private:
/******************           Data Members           ***********************/
unsigned int accountNumber;
double creditLimit;
double balance;
double monthlyCredits;
double monthlyCharges;


public:
/*********                     Member Functions                         ***********/
/*************************     Class Constructor    *******************************/ 
// initializes the data members
//C++11 List Initializer
// constructor initializes data member name with parameter accountName
explicit CreditAccount()
: accountNumber{0} { // member initializer
// empty body 
}//end CreditAccount constructor

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
void setAccountNumber(unsigned int number){
	accountNumber = number;
}//end setAccountNumber

void setBalance(double amount){
	balance = amount;
}//end setBalance

void setCreditLimit(double limit){
	creditLimit = limit;
}//end setCreditLimit

void setCharges(double charges){
	monthlyCharges = charges;
}//end setCharges

void setCredits(double credits){
	monthlyCredits = credits;
}//end setCredits 
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
int getAccountNumber(){
	return accountNumber;
}//end getAccountNumber

double getBalance(){
	return balance;
}//end getBalance

double getCreditLimit(){
	return creditLimit;
}//end getCreditLimit

double getCharges(){
	return monthlyCharges;
}//end getCharges

double getCredits(){
	return monthlyCredits;
}//end getCredits
	

/**************************  Other Member Functions *******************************/
void displayCredit(){
//customers whose credit limit is exceeded, the program should display the customer’s
//account number, credit limit, new balance and the message “Credit Limit Exceeded.”
//new balance = beginning balance + charges – credits
	std::cout << "Account Number: " << getAccountNumber() << std::endl;
	std::cout << "Balance: " << getBalance() << std::endl;
	std::cout << "Credit Limit: " << getCreditLimit() << std::endl;
	
	if(isCreditLimitExceeded()){
		std::cout << "Credit Limit Exceeded" << std::endl;	
	}//end if
}//end displayCredit

void calcNewBalance(){
	setBalance(getBalance() + getCharges() - getCredits());
}//end calcNewBalance

bool isCreditLimitExceeded(){
	return  (getCreditLimit() < getBalance()) ? true : false;
}//end isCreditLimitExceeded

void runCredit(){
	int sentinel = 0;
	double temp = 0;
	
	std::cout << "Enter account number (or -1 to quit): ";
	std::cin >> sentinel;
	setAccountNumber(sentinel);
	
	if(getAccountNumber() != -1){
		std::cout << "Enter beginning balance: ";
		std::cin >> temp;
		
		setBalance(temp);
		
		std::cout << "Enter total charges: ";
		std::cin >> temp;
		
		setCharges(temp);
		
		std::cout << "Enter total credits: ";
		std::cin >> temp;
		
		setCredits(temp);
		
		std::cout << "Enter credit limit: ";
		std::cin >> temp;
		
		setCreditLimit(temp);
		
		calcNewBalance();
		
		std::cout << "New Balance: " << getBalance() << std::endl;
		
		displayCredit();
 }//end if
	
}//end runCredit

};// end ClassName class

