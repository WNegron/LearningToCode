/* ************************************************************************************

Filename: ex03_13.cpp
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


#include <iostream> //enables program to perform input and output
#include <string> // enable program to use C++ string data type
#include "Account.h" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

//function displayAccount
void displayAccount(Account accountToDisplay){ // place the statement that displays
// accountToDisplay's name and balance here
	cout << endl;
	cout << "Account Name: " << accountToDisplay.getName() << endl;
	cout << "Balance:        " << accountToDisplay.getBalance() << endl;
}//end displayAccount


// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

	// declaration and initializing variables
	int depositAmount = 0;
	int withdrawAmount = 0;
	
	// create and initialize class object
	Account account1{"Jane Green", 50};
	Account account2{"John Blue", -7}; 

	// display balances
	displayAccount(account1); 
	displayAccount(account2);


	cout << "\n\nEnter deposit amount for account1: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount); // add to account1's balance

	// display balances
	displayAccount(account1); 
	displayAccount(account2);

	cout << "\n\nEnter deposit amount for account2: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount); // add to account2 balance

	// display balances
	displayAccount(account1); 
	displayAccount(account2);
      
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
	displayAccount(account1); 
	displayAccount(account2); 

return 0; // indicate that program ended successfully
} // end of function main
