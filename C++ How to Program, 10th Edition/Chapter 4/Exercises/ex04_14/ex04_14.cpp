/* ************************************************************************************

Filename: ex04_14.cpp
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

#include "CreditAccount.h"//enable program to use CreditAccount data type

//main function begins program
int main(){

CreditAccount myCredit;

while(myCredit.getAccountNumber() != -1){
	myCredit.runCredit();
}//end while

return 0; //indicates program ended successfully
}//end main function
