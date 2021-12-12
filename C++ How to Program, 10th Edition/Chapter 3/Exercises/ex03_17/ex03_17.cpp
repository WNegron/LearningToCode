/* ************************************************************************************

Filename: ex03_17.cpp
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 3.17 using only the tools and methods taught up to Chapter 3.
This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

3.17 (Automating Electric Energy Purchases) The Tanzania Electric Supply Company Limited
(Tanesco) is a parastatal organization established in 1964 to generate, distribute and
market electricity for domestic and industrial use. In recent years, Tanesco has been
phasing out its old analog meters and introducing new digital meters which enable
customers to buy electricity according to their energy needs. This approach has reduced
Tanesco's costs considerably.

Currently, customers have several options to buy electricity. They can go to a vendor and
pay in cash, they can pay through their mobiles using either their bank account or using a
service called mobile money. When paying for electricity, several deductions are made on
the paid amount. These include an 18% VAT, a fixed monthly service charge
(5000 Tanzanian Shillings), a 3% addition for the Rural Electricity Agency (REA), and a
1% addition for the Electricity and Water Util- ity Regulatory Authority (EWURA). The
remaining amount after these deductions is used to purchase energy (in kilowatt hours of
electricity).

Write a class called ElectricBill that will automate the process of buying electricity.The
class should have one data member called amountPaid (type double) and a constructor which
receives one parameter for initializing amountPaid. Provide get and set methods for
amountPaid. If the value of a parameter is less than zero, the value of amountPaid should
be set to 0. Also, provide the following methods returning a double: getVAT, getEWURA,
getREA and getUnits, where the first three methods return the amount of the corresponding
deduction on the paid amount, and the last method returns the number of kilowatt hours a
customer gets, calculated by dividing by the price of one kilowatt hour, the amount
remaining after all the deductions. Assume one kilowatt hour is sold at 295 Tanzanian
Shillings. 

Write a driver program to demonstrate the capabilities of class ElectriBill.

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include "ElectricBill.hpp" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaration and initializing variables
double amount = 0;
char purchase;

cout << "Enter amount you wish to paid: ";
cin >> amount;

ElectricBill myBill(amount);// create ElectricBill object
myBill.displayBill();

cout << endl;

cout << "Do you wish to purchase this amount of kilowatt hours?: ";
cin >> purchase;

if(purchase == 'Y')
	cout << "Purchase completed.";
if(purchase == 'y')
	cout << "Purchase completed."; 

cout << endl << "Thank you for your patronage. Have a nice day!" << endl;

cout << endl;

return 0; // indicate that program ended successfully
} // end of function main
