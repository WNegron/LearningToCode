/* ************************************************************************************

Filename: Employee.h
    Date: 2021-12-12
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note:
My answer to exercise 3.11 using only the tools and methods taught up to Chapter 3.

Description:

3.11 (Employee class) Create a class called Employee that includes three pieces of
information as data members--a first name (type string), a last name (type string) and
a monthly salary (type int). Your class should have a constructor that initializes the
three data members. Provide a set and a get function for each data member. If the monthly
salary is not positive, set it to 0. Write a test program that demonstrates class
Employee's capabilities. Create two Employee objects and display each object's yearly
salary. Then give each Employee a 10 percent raise and display each Employee's yearly
salary again.

************************************************************************************ */

#include <string> // enables program to use C++ string data type
#include <iostream> // enable program to perform input and output

class Employee{// class definition

private:
/******************           Data Members           ***********************/
int monthlySalary{0};
std::string firstName;
std::string lastName;


public:
/*********                     Member Functions                         ***********/

/*************************     Class Constructor    *******************************/ 
// constructor initializes data member name with parameter accountName
Employee(std::string first, std::string last, int salary)
: firstName{first},lastName{last} { // member initializer

	if(salary > 0){
		monthlySalary = salary;
	}//end if
}

/*************************   Set Member Functions   *******************************/
// Member Functions to set the data members
void setFirstName(std::string first){
	firstName = first;
}//end setFirstName

void setLastName(std::string last){
	lastName = last;
}//end setLastName
	
/*************************   Get Member Functions   *******************************/
// Member functions to get data members value
std::string getFirstName(){
	return firstName;
}//end getFirstName

std::string getLastName(){
	return lastName;
}//end getLastName

int getSalary(){
	return monthlySalary;
}//end getSalary

/**************************  Other Member Functions *******************************/
//calculates the amount of the pay raise and then adds it to the employee salary
void calcPayRaise(){
	monthlySalary = monthlySalary + (monthlySalary * 0.10);
}//end calcPayRaise

//prints out employee's name and salary
void displayEmployee(){
	std::cout << std::endl;
	
	std::cout << "Employee's Information" << std::endl;
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Monthly Salary: " << getSalary() << std::endl;
	
	std::cout << std::endl;
}//end displayEmployee

};// end ClassName class
