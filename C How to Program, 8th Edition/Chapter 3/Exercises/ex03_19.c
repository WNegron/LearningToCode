/***************************************************************************************************
File Name: ex03_19.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.19 using only the tools and methods taught up to chapter 3.

Description:
    For Exercises 3.16–3.20, perform each of these steps:
        1. Read the problem statement.
        2. Formulate the algorithm using pseudocode and top-down, stepwise refinement. 
        3. Write a C program.
        4. Test, debug and execute the C program.

    3.19 (Interest Calculator) The simple interest on a loan is calculated by the formula 
    
        interest = principal * rate * days / 365;

The preceding formula assumes that rate is the annual interest rate, and therefore includes the 
division by 365 (days). Develop a program that will input principal, rate and days for several loans, 
and will calculate and display the simple interest for each loan, using the preceding formula. 

Here is a sample input/output dialog:
----------   Example Output   ----------------------------------------------------------------------
    Enter loan principal (-1 to end): 1000.00 
    Enter interest rate: .1
    Enter term of the loan in days: 365
    The interest charge is $100.00

    Enter loan principal (-1 to end): 1000.00 
    Enter interest rate: .08375
    Enter term of the loan in days: 224
    The interest charge is $51.40

    Enter loan principal (-1 to end): -1
----------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------
initialize
    interest
    principal
    rate
    days

while principal != -1
    prompt user Enter loan principal (-1 to end): 
    read & input principal

    if principal != -1
        prompt user Enter interest rate:
        read & input rate

        prompt user Enter term of the loan in days:
        read & input days

        calculate interest = principal * rate * days / 365;
        print The interest charge is: interest

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    float interest = 0.0;
    float principal = 0.0;
    float rate = 0.0;
    int days = 0;

    //loop while principal is not equal to sentienl value -1
    while(principal != -1){
        //prompt user for principal
        printf("\n%s", "Enter loan principal (-1 to end): ");
        //read principal
        scanf("%f",&principal);

        //verify user hasn't entered sentinel value
        if(principal != -1){
            //prompt user for rate
            printf("%s","Enter interest rate: ");
            //read rate
            scanf("%f",&rate);

            //prompt user for term of loan in days
            printf("%s","Enter term of loan in days: ");
            //read days
            scanf("%d",&days);

            //calculate interest
            interest = principal * rate * days / 365;

            //print interest
            printf("%s%.2f \n", "The interest charge is: $", interest);
        }//end if
    }//end while
	
}//end function main
