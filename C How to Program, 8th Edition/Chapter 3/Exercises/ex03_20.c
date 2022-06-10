/***************************************************************************************************
File Name: ex03_20.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.20 using only the tools and methods taught up to chapter 3.

Description:
	For Exercises 3.16–3.20, perform each of these steps:
		1. Read the problem statement.
		2. Formulate the algorithm using pseudocode and top-down, stepwise refinement. 
		3. Write a C program.
		4. Test, debug and execute the C program.

    3.20 (Salary Calculator) Develop a program that will determine the gross pay for each of several 
employees. The company pays “straight time” for the first 40 hours worked by each employee and pays 
“time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees 
of the company, the number of hours each employee worked last week and the hourly rate of each 
employee. Your program should input this information for each employee and should determine and 
display the employee's gross pay. 

Here is a sample input/output dialog:

----------   Example Output   ----------------------------------------------------------------------
    Enter # of hours worked (-1 to end): 39
    Enter hourly rate of the worker ($00.00): 10.00 
    Salary is $390.00

    Enter # of hours worked (-1 to end): 40
    Enter hourly rate of the worker ($00.00): 10.00 
    Salary is $400.00
    
    Enter # of hours worked (-1 to end): 41
    Enter hourly rate of the worker ($00.00): 10.00 
    Salary is $415.00
    
    Enter # of hours worked (-1 to end): -1
----------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------
initialize
    hoursWorked
    hourlyRate
    salary

while hoursWorked != -1
    prompt user Enter # of hours worked (-1 to end):
    read hoursWorked

    if hoursWorked != -1
        prompt user Enter hourly rate of work ($00.00)
        read hourlyRate

        if hoursWorked <= 40
            calculate salary = hoursWorked * hourlyRate
            print Salary is $ salary
        else
            calculate salary = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5))
            print Salary is $ salary

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	float hoursWorked = 0.0;
    float hourlyRate = 0.0;
    float salary = 0.0;

    //loop while hoursWorked isn't equal to -1 sentinel value
    while(hoursWorked != -1){
        //prompt user for amount of hours worked
        printf("\n%s", "Enter # of hours worked (-1 to end): ");
        //read hoursWorked
        scanf("%f",&hoursWorked);

        //verify user hasn't entered sentinel value -1
        if(hoursWorked != -1){
            //prompt user for hourly rate of pay
            printf("%s","Enter hourly rate of work ($00.00): ");
            //read hourlyRate
            scanf("%f",&hourlyRate);

            //calculate salary based on hours worked
            //verify hoursWorked is less than or equal to 40
            if(hoursWorked <= 40){
                //calculate salary at straight time
                salary = hoursWorked * hourlyRate;
            }//end if
            else{
                //calculate salary at time-and-a-half
                salary = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5));
            }//end else
            
            //print salary
            printf("%s%.2f \n","Salary is: $", salary);
        }//end if
    }//end while loop
}//end function main
