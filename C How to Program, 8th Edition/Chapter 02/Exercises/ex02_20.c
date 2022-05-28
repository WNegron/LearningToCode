/***************************************************************************************************
File Name: ex02_20.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.20 using only the tools and methods taught up to chapter 2.

Description:
	2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius 
of a circle and prints the circle’s diameter, circumference and area. 

Use the constant value 3.14159 for π. 

Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.

[Note: In this chapter, we’ve discussed only integer constants and variables. 
In Chapter 3 we’ll discuss floating-point numbers, i.e., values that can have decimal points.]

--------- Example Output --------------------------------------------------------------

---------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	//pi 3.14159;
	int radius;

	//prompt user for radius;
	puts("Enter radius: ");

	//read radius from user
	scanf("%d", &radius);

	//Diameter = 2 * r
	printf("Diameter is %f \n", 2.00000 * radius);

	//Circumference = 2 * pi * r
	printf("Circumference is %f \n", 2.00000 * 3.14159 * radius);

	//Area = pi * r^2
	printf("Area is %f \n", 3.14159 * (radius * radius));

}//end function main

