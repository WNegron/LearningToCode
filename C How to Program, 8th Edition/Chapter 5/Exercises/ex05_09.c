/***************************************************************************************************
File Name: ex05_09.c
     Date: 2022-07-05
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.09 using only the tools and methods taught up to chapter 5.

Description:
	
    5.9 (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours
and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge 
for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. 

Write a program that will calculate and print the parking charges for each of three customers who 
parked their cars in this garage yesterday. You should enter the hours parked for each customer. 
Your program should print the results in a tabular format, and should calculate and print the total 
of yesterday's receipts. The program should use the function calculateCharges to determine the charge 
for each customer. Your outputs should appear in the following format:

----------   Example Output   ----------------------------------------------------------------------
Car      Hours  Charge
1          1.5    2.00
2          4.0    2.50
3         24.0   10.00
TOTAL     29.5   14.50  
----------------------------------------------------------------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function prototype
double calculateCharges(double h);

//function main begins program execution
int main(void){
	//variable definition
    double hours1 = 0.0;
    double hours2 = 0.0;
    double hours3 = 0.0;
    double charge1 = 0.0;
    double charge2 = 0.0;
    double charge3 = 0.0;
    double totalCharge = 0.0;
    double totalHours = 0.0;
    
    printf("%s \n", "Calculate charges for parking");

    //prompt user
    printf("%s","Enter hours: ");
    scanf("%lf", &hours1);

    printf("%s", "Enter hours: ");
    scanf("%lf", &hours2);

    printf("%s", "Enter hours: ");
    scanf("%lf", &hours3);

    charge1 = calculateCharges(hours1);
    charge2 = calculateCharges(hours2);
    charge3 = calculateCharges(hours3);

    printf("\n%s \n", "Car \t Hours \t Charge");
    
    printf("%d \t %.2f \t %.2f \n",1,hours1,charge1);
    printf("%d \t %.2f \t %.2f \n",2,hours2,charge2);
    printf("%d \t %.2f \t %.2f \n",3,hours3,charge3);

    totalHours = hours1 + hours2 + hours3;
    totalCharge = charge1 + charge2 + charge3;

    printf("%s \t %.2f \t %.2f \n","Total", totalHours, totalCharge);
    
}//end function main

//function calculateCharges
double calculateCharges(double h){
    //double rate = 0.50;

    if(h == 24){
        return 10.00;
    }//end if
    if(h > 3 && h < 24){
        h -=  3;
        return 2.00 + (h * 0.50);
    }//end 2nd if
    else{
        return 2.00;
    }
}//end function calculateCharges