/***************************************************************************************************

File Name: ex06_12.cpp
     Date: 2024-01-30
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.12 using only the tools and methods taught up to Chapter X.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.12 (Parking Charges) A parking garage charges a $20.00 minimum fee to park for up to three hours. 
The garage charges an additional $5.00 per hour for each hour or part thereof in excess of three hours. 
The maximum charge for any given 24-hour period is $50.00. Assume that no car parks for longer than 24 
hours at a time. Write a program that calculates and prints the parking charges for each of three 
customers who parked their cars in this garage yesterday. You should enter the hours parked for each 
customer. Your program should print the results in a neat tabular format and should calculate and print 
the total of yesterday’s receipts. The program should use the function calculateCharges to determine the 
charge for each customer. Your outputs should appear in the following format:

                Car      Hours  Charge
                1          1.5   20.00
                2          4.0   25.00
                3         24.0   50.00
                TOTAL     29.5   95.50

*****************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <iomanip>

using namespace std;//program uses names from namespace std

double parkingCharges(double);

int main(){
    //variables
    double car1 =0.0, car2 = 0.0, car3 = 0.0;
    double totalHours=0.0, totalCharge = 0.0;

    // set floating-point number format
    cout << fixed << setprecision(2);

    
    cout << "1st Car \nEnter the amount of hours: ";
    cin >> car1;
    
    cout << "2nd Car \nEnter the amount of hours: ";
    cin >> car2;
    
    cout << "3rd Car \nEnter the amount of hours: ";
    cin >> car3;

    totalHours = car1 + car2 + car3;
    totalCharge = parkingCharges(car1)+ parkingCharges(car2)+parkingCharges(car3);

    cout << "Car\t Hours\t Charge\n";
    cout << 1 << "\t " << car1 << "\t " << parkingCharges(car1) << endl;
    cout << 2 << "\t " << car2 << "\t " << parkingCharges(car2) << endl;
    cout << 3 << "\t " << car3 << "\t " << parkingCharges(car3) << endl;
    cout << "Total\t " << totalHours << "\t " << totalCharge << endl;

    return 0;//program ended successfully
}//end of main function

double parkingCharges(double xHours){
    
    if(xHours < 3.0){
        return 20.0;
    }//end of if
    else if(xHours == 24){
        return 50.0;
    }//end of else if
    else{
        return 20.0 + ((xHours - 3.0) * 5.0);
    }
}
