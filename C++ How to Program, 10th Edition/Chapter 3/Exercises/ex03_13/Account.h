/* ************************************************************************************

Filename: Account.h
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.13 using only the tools and methods taught up to Chapter 3.

Description:

3.13 (Removing Duplicated Code in the main Function) In Fig. 3.9, the main function
contains six statements (lines 14–15, 16–17, 26–27, 28–29, 37–38 and 39–40) that each
display an Account object’s name and balance. Study these statements and you’ll notice
that they differ only in the Account object being manipulated—account1 or account2.
In this exercise, you’ll define a new displayAccount function that contains one copy of
that output statement. The member function’s parameter will be an Account object and the
member function will output the object’s name and balance. You’ll then replace the six
duplicated statements in main with calls to displayAccount, passing as an argument the
specific Account object to output.

Modify Fig. 3.9 to define the following displayAccount function after the using directive
and before main:

	void displayAccount(Account accountToDisplay){ // place the statement that displays
	// accountToDisplay's name and balance here
	}
	
Replace the comment in the member function’s body with a statement that displays 
accountToDisplay’s name and balance.

Once you’ve completed displayAccount’s declaration, modify main to replace the statements
that display each Account’s name and balance with calls to displayAccount of the form:

displayAccount(nameOfAccountObject);

In each call, the argument should be the account1 or account2 object, as appropriate.
Then, test the updated program to ensure that it produces the same output as shown in
Fig. 3.9.

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
				std::cerr << "Withdraw amount exceeds account balance.\n"
						  << "Cannot complete withdraw!\n";
		}// end withdraw
};// end ClassName class
