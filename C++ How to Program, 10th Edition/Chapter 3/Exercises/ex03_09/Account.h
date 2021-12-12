/* ************************************************************************************

Filename: Account.h
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.09 using only the tools and methods taught up to Chapter 3.

Description:

3.9 (Modified Account Class) Modify class Account (Fig. 3.8) to provide a member function
called withdraw that withdraws money from an Account. Ensure that the withdrawal amount
does not exceed the Account’s balance. If it does, the balance should be left unchanged
and the member function should display a message indicating "Withdrawal amount exceeded
account balance." Modify class AccountTest (Fig. 3.9) to test member function withdraw.

************************************************************************************ */

class Account{// class definition

private:
/******************           Data Members           ***********************/
std::string name; // account name data member
int balance{0}; // data member with default initial value

public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
// Account constructor with two parameters
		Account(std::string accountName, int initialBalance)
			:name(accountName){// assign accountName to data member name
			
			// validate that the initialBalance is greater than 0; if not,
			// data member balance keeps its default initial value of 0
			if(initialBalance > 0){ // if the initialBalance valid
				balance = initialBalance; // assign it to data member balance 
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
		int getBalance() const{
			return balance;
		}//end getBalance

// function that returns the name
		std::string getName() const{
			return name;
		}// end getName	

/**************************  Other Member Functions *******************************/
// function that deposits (adds) only valid amount to the balance
		void deposit(int depositAmount){
			if(depositAmount > 0){ //if the depositAmount is valid
				balance = balance + depositAmount;// add it to the balance
			}//end if
		}// end deposit
		
//function to withdraw money from the Account
		void withdraw(int withdrawAmount){
			if(withdrawAmount <= balance){//if the withdrawAmount is valid
				balance = balance - withdrawAmount;// subtract it from balance
			}//end if
			else //if withdrawAmount isn't valid
				std::cerr << "Withdraw amount exceeded account balance";
		}// end withdraw
};// end ClassName class
