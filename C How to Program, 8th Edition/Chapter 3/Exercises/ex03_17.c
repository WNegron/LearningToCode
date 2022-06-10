/***************************************************************************************************
File Name: ex03_17.c
     Date: 2022-06-10
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.17 using only the tools and methods taught up to chapter 3.

Description:
    For Exercises 3.16–3.20, perform each of these steps:
        1. Read the problem statement.
        2. Formulate the algorithm using pseudocode and top-down, stepwise refinement. 
        3. Write a C program.
        4. Test, debug and execute the C program.

    3.17 (Credit-Limit Calculator) Develop a C program that will determine whether a department 
store customer has exceeded the credit limit on a charge account. For each customer, the following 
facts are available:

    a) Account number
    b) Balance at the beginning of the month
    c) Total of all items charged by this customer this month
    d) Total of all credits applied to this customer's account this month
    e) Allowed credit limit

    The program should input each fact, calculate the new balance (= beginning balance + charges – 
credits), and determine whether the new balance exceeds the customer's credit limit. For those 
customers whose credit limit is exceeded, the program should display the customer's account number, 
credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/output 
dialog:

----------   Example Output   ----------------------------------------------------------------------
Enter account number (-1 to end): 100 
Enter beginning balance: 5394.78 
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00 
Account: 100
Credit limit: 5500.00 
Balance: 5894.78 
Credit Limit Exceeded.

Enter account number (-1 to end): 200 
Enter beginning balance: 1000.00 
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00

Enter account number (-1 to end): 300 
Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00

Enter account number (-1 to end): -1
----------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------
initialize 
    accountNumber
    balance
    charges
    credits
    creditLimit
    newBalance

while accountNumber != -1
    prompt user Enter account number:
    read & input accountNumber

    if accountNumber != -1
        prompt user Enter begining balance
        read & input balance

        prompt user Enter total charges
        read & input totalCharges

        prompt user Enter credit limit
        read & input creditLimit

        claculate newbalance (= beginning balance + charges – credits)
        
        if newBalance > creditLimit
            print accountNumber
            print newBalance
            print creditLimit
            print "Credit limit exceeded"
-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
	int accountNumber = 0;
    float balance = 0;
    float charges = 0;
    float credits = 0;
    float creditLimit = 0;
    float newBalance = 0;

    //loop until user entered sentinel value -1
    while(accountNumber != -1){
        //prompt user for account number
        printf("\n%s","Enter account number (-1 to end): ");
        //read & input account number
        scanf("%d",&accountNumber);

        //verify accountNumber doesn't equal sentinel value
        if(accountNumber != -1){
            //prompt user for balance
            printf("%s","Enter begining balance: ");
            //read & input balance
            scanf("%f",&balance);

            //prompt user for total charges
            printf("%s","Enter total charges: ");
            //read & input totalCharges
            scanf("%f",&charges);

            //prompt user for total credits
            printf("%s","Enter total credit: ");
            //read & input total credits
            scanf("%f",&credits);

            //prompt user for credit limit
            printf("%s","Enter credit limit: ");
            //read & input credit limit
            scanf("%f", &creditLimit);

            //calculate new balance
            newBalance = (balance + charges - credits);

            //check if newBalance is greater than credit limit
            if(newBalance > creditLimit){
                //printout the account information that exceeded credit limit
                printf("\n%s %d \n","Account Number: ", accountNumber);
                printf("%s %.2f \n","New Balance: ", newBalance);
                printf("%s %.2f \n","Credit Limit: ", creditLimit);
                printf("%s \n","Credit limit Exceeded");
            }//end if

        }//end if

    }//end of while
}//end function main
