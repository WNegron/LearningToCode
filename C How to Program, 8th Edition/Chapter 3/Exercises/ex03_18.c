/***************************************************************************************************
File Name: ex03_18.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.18 using only the tools and methods taught up to chapter 3.

Description:
    For Exercises 3.16–3.20, perform each of these steps:
        1. Read the problem statement.
        2. Formulate the algorithm using pseudocode and top-down, stepwise refinement. 
        3. Write a C program.
        4. Test, debug and execute the C program.

    3.18 (Sales-Commission Calculator) One large chemical company pays its salespeople on a 
commission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. 
For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of 
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last 
week and will calculate and display that salesperson’s earnings. Process one salesperson's figures 
at a time. 

Here is a sample input/output dialog:

----------   Example Output   ----------------------------------------------------------------------
    Enter sales in dollars (-1 to end): 5000.00 
    Salary is: $650.00

    Enter sales in dollars (-1 to end): 1234.56 
    Salary is: $311.11

    Enter sales in dollars (-1 to end): -1
----------------------------------------------------------------------------------------------------
  
-------------------------------------    Pseudocode    ---------------------------------------------
initialize
    salesAmount
    weeklyPay
    commission

    while salesAmount != -1
        prompt user Enter sales in dollars
        read & input salesAmount

        print & calculate employee pay = weeklyPay + (salesAmount * commission)       
-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	float salesAmount = 0.0;
    float weeklyPay = 200.00;

    //loop until sentinel value is entered by user 
    while(salesAmount != -1){
        //prompt user for salesAmount
        printf("\n%s","Enter sales in dollars (-1 to end): ");
        //read & input salesAmount
        scanf("%f",&salesAmount);

        //verify sentinel value hasn't been entered by user
        if(salesAmount != -1){
            //calculate & print employee salary
            printf("%s %.2f \n", "Salary is: ", weeklyPay + (salesAmount * 0.09));
        }//end if
    }//end while
}//end function main
