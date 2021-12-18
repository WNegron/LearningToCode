/* ************************************************************************************

Filename: ex04_29.cpp
    Date: 2021-12-18
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.39 using only the tools and methods taught up to Chapter 4.

This exercise is from the global Edition of C++ How to Program, 10/e 

I have made several assumptions in order to answer this exercise.
	1 - calorie intake for healthy child must be 2,500 per day; this will be divided by 3 to get 
	the correct amount of calories for the one meal they will receive at the school.
	
	2 - there will be five items in the meal
			first item - vegetables
			second item - meat
			third item - carbohydrates
			fourth item - fruits
			fifth item - drink
		
	3 - the user knows the amount calories in each serving
	
I will not be asking the user for any other details other than the amount of calories per item.

I have not research any of the School Nutrition Programs. This program will not be accurate nor 
suitable for a real world application.

Description:

	4.39 (School Nutrition Programs) In developing countries, school meals are often the only 
regular and nutritious meal a child receives. For this exercise, use the web to research school 
nutrition programs. Be sure to investigate various schemes worldwide. In more developed countries, 
these programs allow children to select from a variety of food options. In less developed countries, 
each child is given the same meal, carefully rationed so that each child gets the same amount. 

	Write a program that will help someone preparing such a carefully rationed meal to determine how 
many calories each child will get based on the number of calories of each ingredient and the number 
of portions to be served. If the calories in each serving are not sufficient to meet the recommended 
caloric needs of children, give a warning message.


************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){
// declaration and initializing variables
int vegetables = 0, meat = 0, carbohydrates = 0, fruits = 0, drink = 0;
//const int caloriesPerDay = 2500;
int caloriesPerMeal = 2500/3;
int totalCalories = 0;

while(totalCalories < caloriesPerMeal){
cout << "Calculate how many calories?: " << endl;
cout << "Vegetables: ";
cin >> vegetables;

cout << "Meat: ";
cin >> meat;

cout << "Carbohydrates: ";
cin >> carbohydrates;

cout << "Fruits: ";
cin >> fruits;

cout << "Drink: ";
cin >> drink;

totalCalories = vegetables + meat + carbohydrates + fruits + drink;

if(totalCalories < caloriesPerMeal){
	cout << "Warning! Meal does not meet caloric need of the children." << endl;
	cout << "Please prepare a new meal. That has at least : " << caloriesPerMeal 
		 << " calories per meal" << endl;
	}//end if
else{
	cout << "Excellent! Caloric needs have been met." << endl;
}//end else
}//end while

return 0; // indicate that program ended successfully
} // end of function main
