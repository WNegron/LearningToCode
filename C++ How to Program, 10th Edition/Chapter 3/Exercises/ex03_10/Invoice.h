/* ************************************************************************************

Filename: Invoice.h
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

// Invoice class header file

#include <iostream> // enable program to perform input and output
#include <string> // enable program to use C++ string data type

// class definition
class Invoice{

	private:
	
/************************** Data Members *****************************/
		std::string partNumber; // serial number
		std::string partDescription; // part type
		int partQuantity;// how many parts
		double partPrice; // price per item
		double vatRate; // value added tax rate
		double discountRate;// discount for the part price
		
	public:
	
/******                       Member Functions                         **********/
		
/************************ Invoice Constructor *********************************/
// It initialize the first four data members with values from parameters
// and the last two data members to default values of 0.20 per cent and zero respectively.
		Invoice(std::string number, std::string description, int quantity, double price){
		
			double tax = 0.0020;
			double discount = 0;
			
			setPartNumber(number);
			setDescription(description);
			setQuantity(quantity);
			setPrice(price);
			setVATRate(tax);
			setDiscountRate(discount);
			
		}// end Invoice constructor member function
		
/********************* Set function for data members ******************************/
		
		// function to set value of data member partNumber
		void setPartNumber(std::string number){
			
			if(number.empty()){// validates the part number
			// if part number is empty it prints out error message
				std::cerr << std::endl << "Part Number cannot be empty." << std::endl;
				
			}// end if
			else{
				partNumber = number; // sets data member from parameter
			}// end else
		}// end setPartNumber
		
		// function to set value of data member description
		void setDescription(std::string description){
			if(description.empty()){
			// if description is empty it prints out error message
				std::cerr << std::endl << "Part Description cannot be empty." 
						  << std::endl;
			}//end if
			else{
				partDescription = description; // sets data member from parameter
			}// end else
		}// end setPartNumber
		
		// function to set value of data member quantity
		void setQuantity(int quantity){
			
			if(quantity >= 0){ // validates quantity amount; 
			// must be equal or greater than zero
				partQuantity = quantity; // sets data member from parameter
			}// end if
			else{
				std::cerr << std::endl << "Quantity amount cannot be equal or less than zero." 
					 << std::endl;
			}// end else 
		}// end of setQuantity
		
		// function to set value of data member partPrice
		void setPrice(double price){
		
			if(price >= 0){// validates price amount; must be equal or greater than zero
				partPrice = price; // sets data member from parameter;
			}//end if
			else{
				std::cerr << std::endl << "Price amount cannot be equal or less than zero." 
					 << std::endl;
			}// end else 
		}// end of setPrice
		
		// function to set value of data member VATaxRate
		void setVATRate(double tax){
		
			if(tax >= 0 ){// validates Value Added Tax Rate amount; 
			//must be equal or greater than zero
				vatRate = tax; // sets data member from parameter
			}// end if
			else{
				std::cerr << std::endl << "Value Added Tax Rate amount "
				     << "cannot be less than zero." << std::endl;
			}// end else 
		}// end setVATRate
		
		// function to set value of data member discountRate
		void setDiscountRate(double discount){
			if(discount >= 0 ){// validates discount amount; 
			//must be equal or greater than zero
				discountRate = discount;// sets data member from parameter
			}// end if
			else{
				std::cerr << std::endl << "Discount Rate amount cannot less than zero." 
					 << std::endl;
			}// end else 
		}// end setDiscountRate 
		
/*********************** Get function from Data Members *****************************/
// function to get value from data member

		std::string getPartNumber(){
			return partNumber;
		}// end getPartNumber
		
		std::string getDescription(){
			return partDescription;
		}// end getDescription
		
		int getQuantity(){
			return partQuantity;
		}// end getQuantity
		
		double getPrice(){
			return partPrice;
		}// end getPrice
		
		double getVATRate(){
			return vatRate;
		}// end getVATRate
		
		double getDiscountRate(){
			return discountRate;
		}// end getDiscountRate
		
/************************* Invoice Amount ***********************************/
/*member function named getInvoiceAmount that calculates the invoice amount
(i.e., multiplies the quantity by the price per item and applies the tax and
discount amounts), then returns the amount. */

		double getInvoiceAmount(){
			//declaring and initializing variables
			double subTotal = 0;
			double total = 0;
			double discount = 0;
			double tax = 0;
			
			subTotal = partPrice * partQuantity;
			discount = subTotal * discountRate;
			tax = subTotal * vatRate;
			total = (subTotal - discount) + tax;
			
			return total;
		}//end getInvoiceAmount
};// end class Invoice
