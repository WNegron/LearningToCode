/***************************************************************************************************

File Name: ex05_34.cpp
     Date: 2022-06-11
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note:  
My answer to exercise 5.34 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	
     5.34 (Account Class That Stores a DollarAmount) Upgrade the Account class from Exercise 3.9 to 
define its balance data member as an object of class DollarAmount from Exercise 5.33. Reimplement 
the bodies of class Account’s constructor and member functions accordingly.

     

***************************************************************************************************/

#include <iostream> //enables program to perform input and output
#include <iomanip> //enable to program to use parameterized stream manipulators
#include <string> //enable program to use C++ string data type

#include "Account.h" // enables program to use Account data type and functions
#include "DollarAmount.h" //enables program to use DollarAmount data type

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){
     // declaration and initializing variables
	int dollarAmount{0};
     int centAmount{0};
	
	// create and initialize class object
	Account account1{"Jane Green", 50,0};
	Account account2{"John Blue", 7,0}; 
     DollarAmount amount{0,0};
	//DollarAmount withdrawAmount{0,0};

	// display initial balance of each object
	cout << "account1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance(); 

	cout << "\n\nEnter deposit amount for account1: "; // prompt
	cin >> dollarAmount >> centAmount; // obtain user input
	cout << "adding " << dollarAmount << "." << centAmount << " to account1 balance";
     amount(dollarAmount,centAmount);
	account1.deposit(amount); // add to account1's balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance(); 

	cout << "\n\nEnter deposit amount for account2: "; // prompt
	cin >> dollarAmount >> centAmount; // obtain user input
	cout << "adding " << dollarAmount << "." << centAmount << " to account2 balance";
     amount(dollarAmount,centAmount);
	account2.deposit(amount); // add to account2 balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance() << endl; 
      
	//Modify class AccountTest (Fig. 3.9) to test member function withdraw.     
	//withdraw from the account1
	cout << "\n\nEnter amount to withdraw from account1: ";//prompt
	cin >> dollarAmount >> centAmount; // obtain user input
	cout << "withdrawing " << dollarAmount << "." << centAmount << " from account1 balance\n";
     amount(dollarAmount,centAmount);
	account1.withdraw(amount);// subtract from account1's balance

	//withdraw from the account2
	cout << "\n\nEnter amount to withdraw from account2: ";//prompt
	cin >> dollarAmount >> centAmount; // obtain user input
	cout << "withdrawing " << dollarAmount << "." << centAmount << " from account2 balance\n";
     amount(dollarAmount,centAmount);
	account2.withdraw(amount);// subtract from account1's balance

	// display balances
	cout << "\n\naccount1: " << account1.getName() << " balance is $"
		 << account1.getBalance(); 
	cout << "\naccount2: " << account2.getName() << " balance is $"
		 << account2.getBalance() << endl; 

return 0; // indicate that program ended successfully
} // end of function main
