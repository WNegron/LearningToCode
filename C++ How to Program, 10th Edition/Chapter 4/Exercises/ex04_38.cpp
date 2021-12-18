/* ************************************************************************************

Filename: ex04_38.cpp
    Date: 2021-12-17
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 4.38 using only the tools and methods taught up to Chapter 4.

My source for this exercise is the website Our World in Data: 
	https://ourworldindata.org/world-population-growth
	
	An excerpt form the website
		The world population increased from 1 billion in 1800 to 7.7 billion today. The world 
		population growth rate declined from 2.2% per year 50 years ago to 1.05% per year.

The population growth rate is expected to decrease even further. I will be using the 1.05% per year 
for this exercise.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

	4.38 (World Population Growth) World population has grown considerably over the centuries. 
Continued growth could eventually challenge the limits of breathable air, drinkable water, arable 
cropland and other precious resources. There is evidence that growth has been slowing in recent 
years and that world population could peak some time this century, then start to decline.

For this exercise, research world population growth issues online. Be sure to investigate various 
viewpoints. Get estimates for the current world population and its growth rate (the percentage by 
which it is likely to increase this year).

	Write a program that calculates world population growth each year for the next 75 years, 
using the simplifying assumption that the current growth rate will stay constant. 

	Print the results in a table. The first column should display the year from year 1 to year 75. 
The second column should display the anticipated world population at the end of that year. The third 
column should display the numerical increase in the world population that would occur that year. 
Using your results, determine the year in which the population would be double what it is today, if 
this year’s growth rate were to persist.

--------- Example Output --------------------------------------------------------------
year      end of year     world population
1          number of         numerical
2			expected         increase
.          population
.
.
74
75     

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------
initialize const variable with percentage 1.05%(0.0105
initialize variable expected population
initialize variable numerical increase
initialize variable current population
initialize loop counter

loop until counter reaches 75
	calculate expected population ( current population * growth rate + current population
	calculate numerical increase ( expected population - current population)
	
	print year, expected population, numerical increase
	
	current population is expected population
	increment loop counter
	
-----------------------------    End Pseudocode    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output
#include <iomanip> // parameterized stream manipulators

using namespace std; //program uses names from the std namespace


// main function begins program
int main(){

// declaration and initializing variables
const double growthRate= 0.0105; 
double expected = 0.0;
double current = 7700.0;
double numericalIncrease = 0.0;
int yearCounter = 0;
double starting = 7700.0;
int yearX2 = 0;

cout << "Population Growth for the next 75 years (numbers in millions)" << endl;
cout << "Year \t   End of Year Expected \t   World Population Increase" << endl;

while(yearCounter < 75){
	expected = (current * growthRate) + current;
	numericalIncrease = (expected - current);
	
	cout << setprecision(3) << fixed;
	cout << yearCounter + 1 << "\t\t" << expected << "\t\t\t" << numericalIncrease << endl;
	
	if(expected >= (starting * 2) && yearX2 == 0)
		yearX2 = yearCounter;
	
	
	current = expected;
	++yearCounter;
}//end while

cout << "Population will double what our current population is 7,700 million in the year: " 
	 << yearX2 << endl;

return 0; // indicate that program ended successfully
} // end of function main
