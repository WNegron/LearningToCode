/* ************************************************************************************

Filename: ElectricBill.h
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
(5000 Tanzanian Shillings), a 3% addi- tion for the Rural Electricity Agency (REA), and a
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
#include <string> // enable program to use C++ string data type

class ElectricBill{// class definition

private:

/******************           Data Members           ***********************/
double amountPaid = 0;

public:

/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// initializes the data members
ElectricBill (double amount){
	if(amount > 0)
		amountPaid = amount;
}

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
void setAmountPaid(double amount){
		amountPaid = amount;
}//end setAmountPaid
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
double getAmountPaid(){
	return amountPaid;
}//end getAmountPaid

/**************************  Other Member Functions *******************************/
/* several deductions are made on the paid amount. These include an 18% VAT, a fixed
monthly service charge (5000 Tanzanian Shillings), a 3% addition for the Rural
Electricity Agency (REA), and a 1% addition for the Electricity and Water Utility 
Regulatory Authority (EWURA). The remaining amount after these deductions is used to
purchase energy (in kilowatt hours of electricity). 

a double: getVAT, getEWURA, getREA and getUnits, where the first three methods return the
amount of the corresponding deduction on the paid amount, and the last method returns the
number of kilowatt hours a customer gets, calculated by dividing by the price of one
kilowatt hour, the amount remaining after all the deductions. Assume one kilowatt hour is
sold at 295 Tanzanian Shillings. */

double getVAT(){
//18% VAT
	return getAmountPaid() * 0.18;
}
double getEWURA(){
//1% addition for the Electricity and Water Utility Regulatory Authority (EWURA)
	return getAmountPaid() * 0.01;
}
double getREA(){
//a 3% addition for the Rural Electricity Agency (REA)
	return getAmountPaid() * 0.03;
}
double getKilowatts(){
//one kilowatt hour is sold at 295 Tanzanian Shillings
	//double kilowattPerHour = 0;
	return (getAmountPaid() - ((getVAT() + getEWURA() + getREA()) + 5000)) / 295;
}//end getKilowatts

void displayBill(){
	std::cout << "Your electric bill breakdown: " << std::endl;
	std::cout << "   Amount Paid:   " << getAmountPaid() << std::endl;
	std::cout << "Monthly Charge: - " << 5000 << std::endl;
	std::cout << "        REA 3%: - " << getREA() << std::endl;
	std::cout << "      EWURA 1%: - " << getEWURA() << std::endl;
	std::cout << "       VAT 18%: - " << getVAT() << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Total Deductions: " << getVAT() + getEWURA() + getREA() + 5000
			  << std::endl;
			  
	std::cout << "         Balance: "; 
	std::cout << getAmountPaid() - (getVAT() + getEWURA() + getREA() + 5000); 
	std::cout << std::endl;
	
	std::cout << "You can still purchase " << getKilowatts();
	std::cout << " kilowatts (295/hr)."  << std::endl;
	
}//end displayBill 

};// end ElectricBill class
