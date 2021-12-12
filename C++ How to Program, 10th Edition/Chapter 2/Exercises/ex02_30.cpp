/* ************************************************************************************

Filename: ex02_30.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.30 using only the tools and methods thought in Chapter 2.

Description:

2.30 (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in

Exercise 1.9. The formulas for calculating BMI are

 
                     weightInPounds × 703
BMI =  ------------------------------------------------------------------------------ 
                heightInInches × heightInInches
                
or

                     weightInKilograms
BMI = ---------------------------------------------------------------------------------
               heightInMeters × heightInMeters
				
Create a BMI calculator application that reads the user’s weight in pounds and height in
inches (or, if you prefer, the user’s weight in kilograms and height in meters), then
calculates and displays the user’s body mass index. Also, the application should display
the following information from the Department of Health and Human Services/National
Institutes of Health so the user can evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5 
Normal: between 18.5 and 24.9 
Overweight: between 25 and 29.9 
Obese: 30 or greater

[Note: In this chapter, you learned to use the int type to represent whole numbers. The
BMI calculations when done with int values will both produce whole-number results. In 
Chapter 4 you’ll learn to use the double type to represent numbers with decimal points. 
When the BMI calculations are performed with doubles, they’ll each produce numbers with 
decimal points—these are called “floating-point” numbers.]

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

//declaration and initializing variables
float weight = 0;
float height = 0;
float BMI = 0;
int metric = 0;

//prompt user for input
cout << "BMI calculator, enter 1 for metric or 0 for imperial: ";
cin >> metric;

//calculates BMI using the metric system
if(metric == 1){//validates if user wants to enter measurements using the metric system
	cout << "Enter weight in kilograms: ";
	cin >> weight;
	cout << "Enter height in meters: ";
	cin >> height;
	
	BMI = weight / (height * height);
	
	cout << "Your BMI is: " << BMI << endl;
	
	if(BMI < 18.5)
		cout << "Your weight is underweight." << endl;
	if(BMI >= 18.5 && BMI < 25)
		cout << "Your weight is normal." << endl;
	if(BMI >= 25 && BMI < 30)
		cout << "Your weight is overweight." << endl;
	if(BMI >= 30)
		cout << "Your weight is obese." << endl;
}//end if

//calculates BMI using Imperial system
if(metric!= 1){//validates if user wants to enter measurements using the imperial system
	cout << "Enter weight in pounds: ";
	cin >> weight;
	cout << "Enter height in inches: ";
	cin >> height;
	
	BMI = (weight  * 703) / (height * height);
	
	cout << "Your BMI is: " << BMI << endl;
	
	if(BMI < 18.5)
		cout << "Your weight is underweight." << endl;
	if(BMI >= 18.5 && BMI < 25)
		cout << "Your weight is normal." << endl;
	if(BMI >= 25 && BMI < 30)
		cout << "Your weight is overweight." << endl;
	if(BMI >= 30)
		cout << "Your weight is obese." << endl;
}//end if

// printout BMI table
cout << "BMI VALUES" << endl;
cout << "Underweight: less than 18.5" << endl; 
cout << "Normal: between 18.5 and 24.9" << endl; 
cout << "Overweight: between 25 and 29.9" << endl; 
cout << "Obese: 30 or greater" << endl;

return 0; // indicate that program ended successfully
} // end of function main
