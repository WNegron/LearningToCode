/* ************************************************************************************

Filename: ex03_11.cpp
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

#include "Employee.h" //enable program to perform ClassName function

using namespace std; //program uses names from the std namespace

// function main begins program
int main(){

//create Employee object
Employee myEmployee1("Sherlock","Holmes",5000);
Employee myEmployee2("John","Watson",3500);

myEmployee1.displayEmployee(); //prints out employee information
myEmployee2.displayEmployee(); //prints out employee information

myEmployee1.calcPayRaise();
myEmployee2.calcPayRaise();

myEmployee1.displayEmployee(); //prints out employee information
myEmployee2.displayEmployee(); //prints out employee information

return 0; // indicate that program ended successfully
} // end of function main
