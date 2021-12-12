/* ************************************************************************************

Filename: ex03_10.cpp
    Date: 2021-12-10
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 3.10 using only the tools and methods thought in Chapter 3.

Description:

3.10 (Invoice class) Create a class called Invoice that a hardware store might use to
represent an invoice for an item sold at the store. An Invoice should include six data
members-a part number (type string), a part description (type string), a quantity of the
item being purchased (type int), a price per item (type int) a value-added tax (VAT) rate
as a decimal (type double) and a discount rate as a decimal(type double). 
Your class should have a constructor that initializes the six data members.
The constructor should initialize the first four data members with values from parameters
and the last two data members to default values of 0.20 per cent and zero respectively.
Provide a set and a get functions for each data member. In addition, provide a member
function named getInvoiceAmount that calculates the invoice amount
(i.e., multiplies the quantity by the price per item and applies the tax and
discount amounts), then returns the amount. Have the set data members perform validity
checks on their parameters—if a parameter value is not positive, it should be left
unchanged. Write a driver program to demonstrate Invoice’s capabilities.

************************************************************************************ */

#include <iostream> // enable program to perform input and output
#include <string> // enable program to use C++ data string type
#include "Invoice.h" // enable program to use Invoice class type

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaration and initializing variables
int quantity = 0;
Invoice myInvoice("0001","Hammer",1,5.15); //create Invoice object

cout << endl << "Part Number:      " << myInvoice.getPartNumber();
cout << endl << "Part Description: " << myInvoice.getDescription();
cout << endl << "Quantity:         " << myInvoice.getQuantity();
cout << endl << "Price:            " << myInvoice.getPrice();
cout << endl << "Tax Rate:         " << myInvoice.getVATRate();
cout << endl << "Discount Rate:    " << myInvoice.getDiscountRate();

cout << endl;

cout << "How many parts would you like to order? ";// prompt user for info
cin >> quantity; // store user input

myInvoice.setQuantity(quantity); // set new quantity amount

cout << endl;


cout << endl << "Subtotal: " << myInvoice.getPrice() * myInvoice.getQuantity();
cout << endl << "Discount: " << myInvoice.getPrice() * myInvoice.getDiscountRate();
cout << endl << "Taxes (" << myInvoice.getVATRate() * 100 << "%): ";
cout << (myInvoice.getPrice() * myInvoice.getQuantity()) * myInvoice.getVATRate();
cout << endl << "Total:    " << myInvoice.getInvoiceAmount();

cout << endl;


return 0; // indicate that program ended successfully
} // end of function main
