/* ************************************************************************************

Filename: ex03_14.cpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.14 using only the tools and methods taught up to Chapter 3.

Description:

3.14 (C++11 List Initializers) Write a statement that uses list initialization to
initialize an object of class Account which provides a constructor that receives an
unsigned int, two strings and a double to initialize the accountNumber, firstName,
lastName and balance data members of a new object of the class. 

C++11 List Initializer
constructor initializes data member name with parameter accountName
explicit ClassName(std::string parameter)
: data-member{parameter} { // member initializer
// empty body }

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include "Account.hpp" //enables program to perform account functions  

using namespace std;  //program uses names from the std namespace

//function displayAccount
void displayAccount(Account accountToDisplay) { // place the statement that displays
// accountToDisplay's name and balance here
	cout << "Account Number: " << accountToDisplay.getAccountNumber() << endl;
	cout << "First Name:     " << accountToDisplay.getFirstName() << endl;
	cout << "Last Name:      " << accountToDisplay.getLastName() << endl;
	cout << "Balance:        " << accountToDisplay.getBalance() << endl;
}//end displayAccount

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv[]){

// declaration and initializing variables
float depositAmount = 0;
float withdrawAmount = 0;

Account account1(1230987,"Jane", "Green", 50); // create Account object
Account account2(3210987,"John", "Blue", -7); // create Account object

// display initial balance of each object
cout << "\naccount1: \n";
displayAccount(account1);

cout << "\naccount2: \n";
displayAccount(account2);

cout << "\n\nEnter deposit amount for account1: "; // prompt
cin >> depositAmount; // obtain user input
cout << "adding " << depositAmount << " to account1 balance";
account1.deposit(depositAmount); // add to account1's balance

// display initial balance of each object
cout << "\naccount1: \n";
displayAccount(account1);

cout << "\naccount2: \n";
displayAccount(account2);

cout << "\n\nEnter deposit amount for account2: "; // prompt
cin >> depositAmount; // obtain user input
cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount); // add to account2 balance

// display initial balance of each object
cout << "\naccount1: \n";
displayAccount(account1);

cout << "\naccount2: \n";
displayAccount(account2);
      
//withdraw from the account
cout << "\n\nEnter amount to withdraw from account1: ";//prompt
cin >> withdrawAmount; // obtain user input
cout << "withdrawing " << withdrawAmount << " from account1 balance\n";
account1.withdraw(withdrawAmount);// subtract from account1's balance

//withdraw from the account
cout << "\n\nEnter amount to withdraw from account2: ";//prompt
cin >> withdrawAmount; // obtain user input
cout << "withdrawing " << withdrawAmount << " from account1 balance\n";
account2.withdraw(withdrawAmount);// subtract from account1's balance

// display initial balance of each object
cout << "\naccount1: \n";
displayAccount(account1);

cout << "\naccount2: \n";
displayAccount(account2);

return 0; // indicate that program ended successfully
}//end function main
