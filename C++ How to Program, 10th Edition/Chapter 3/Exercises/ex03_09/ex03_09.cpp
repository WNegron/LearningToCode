/* ************************************************************************************

Filename: ex03_09.cpp
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

#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type
#include "Account.h" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

	// declaration and initializing variables
	int depositAmount = 0;
	int withdrawAmount = 0;
	
	// create and initialize class object
	Account account1{"Jane Green", 50};
	Account account2{"John Blue", -7}; 

	// display initial balance of each object
	cout << "account1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance(); 

	cout << "\n\nEnter deposit amount for account1: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount); // add to account1's balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance(); 

	cout << "\n\nEnter deposit amount for account2: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount); // add to account2 balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance() << endl; 
      
	//Modify class AccountTest (Fig. 3.9) to test member function withdraw.     
	//withdraw from the account1
	cout << "\n\nEnter amount to withdraw from account1: ";//prompt
	cin >> withdrawAmount; // obtain user input
	cout << "withdrawing " << withdrawAmount << " from account1 balance\n";
		account1.withdraw(withdrawAmount);// subtract from account1's balance

	//withdraw from the account2
	cout << "\n\nEnter amount to withdraw from account2: ";//prompt
	cin >> withdrawAmount; // obtain user input
	cout << "withdrawing " << withdrawAmount << " from account1 balance\n";
		account2.withdraw(withdrawAmount);// subtract from account1's balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance() << endl; 

return 0; // indicate that program ended successfully
} // end of function main
