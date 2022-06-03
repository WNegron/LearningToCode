/***************************************************************************************************
File Name: ex02_32.c
     Date: 2022-05-30
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.32 using only the tools and methods taught up to chapter 2.

Description:
           2.32 (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in 
Exercise 1.12. The formulas for calculating BMI are

		
					weightInPounds × 703 
	BMI = ------------------------------------------------------------------------------- 
				heightInInches × heightInInches

						
						or


					weightInKilograms
	BMI = --------------------------------------------------------------------------------- 
				 heightInMeters × heightInMeters


	Create a BMI calculator application that reads the user’s weight in pounds and height in 
inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates 
and displays the user’s body mass index. Also, the application should display the following 
information from the Department of Health and Human Services/National Institutes of Health so the 
user can evaluate his/her BMI:


----------   Example Output   ----------------------------------------------------------------------
	
	BMI VALUES
	Underweight: less than 18.5 
	Normal: between 18.5 and 24.9 
	Overweight: between 25 and 29.9 
	Obese: 30 or greater

----------------------------------------------------------------------------------------------------

[Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI 
calculations when done with int values will both produce whole-number results. In Chapter 4 you’ll 
learn to use the double type to represent numbers with decimal points. When the BMI calculations are 
performed with doubles, they’ll both produce numbers with decimal points—these are called 
“floating-point” numbers.]
   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int bmi, weight, height;
	int userChoice;

	//prompt user to choose between inches and pounds or Meters and kilograms
	printf("%s :", "Imperial System (1) or Metric Systen (2)");
	
	//read user choice
	scanf("%d", &userChoice);

	if(userChoice == 1){
		//prompt user for weight
		printf("%s", "Enter weight in pounds: ");
                //read user weight
		scanf("%d", &weight);
		//prompt user for  height
		printf("%s", "Enter height in inches: ");
		//read user height
		scanf("%d", &height);
		
		bmi = (weight * 703) / (height * height);
	}//end if

	if(userChoice == 2){
		//prompt user for weight
		printf("%s", "Enter weight in kilograms: ");
		//read user weight
		scanf("%d", &weight);

		//prompt user for height
		printf("%s", "Enter height in meters: ");
		//read user height
		scanf("%d", &height);

		bmi = weight / (height * height);
	}//end if


	printf("\n\n%s \n", "BMI VALUES");
	printf("%s \n", "Underweight: less than 18.5"); 
	printf("%s \n", "Normal: between 18.5 and 24.9"); 
	printf("%s \n", "Overweight: between 25 and 29.9"); 
	printf("%s \n", "Obese: 30 or greater");

	if(bmi < 18.5){
		printf("\n%s %d\n", "Your BMI is ", bmi);
		printf("%s \n", "You're underwieght");
	}//end if

	if(bmi >= 18.5){
		if(bmi < 25){
			printf("\n%s %d \n", "Your BMI is ", bmi);
			printf("%s \n", "Your weight is normal");
		}//end if
	}//end if

	if(bmi >= 25){
		if(bmi < 30){
			printf("\n%s %d \n", "Your BMI is ", bmi);
			printf("%s \n", "You're overweight");
		}//end if
	}//end if

	if(bmi >= 30){
		printf("\n%s %d \n", "Your BMI is ", bmi);
		printf("%s \n", "You're obese");
	}//end if

}//end function main

