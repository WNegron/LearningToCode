/***************************************************************************************************
File Name: filename.c
     Date: yyyy-mm-dd
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise x.xx using only the tools and methods taught up to chapter xx.

Description:
For Exercises 3.16–3.20, perform each of these steps:
1. Read the problem statement.
2. Formulate the algorithm using pseudocode and top-down, stepwise refinement. 3. Write a C program.
4. Test, debug and execute the C program.

    3.16 (Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One 
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for 
each tankful. Develop a program that will input the miles driven and gallons used for each tankful. 
The program should calculate and display the miles per gallon obtained for each tankful. After 
processing all input information, the program should calculate and print the combined miles per 
gallon obtained for all tankfuls. Here is a sample input/output dialog:

----------   Example Output   ----------------------------------------------------------------------
    Enter the gallons used (-1 to end): 12.8 
    Enter the miles driven: 287
    The miles/gallon for this tank was 22.421875

    Enter the gallons used (-1 to end): 10.3 
    Enter the miles driven: 200
    The miles/gallon for this tank was 19.417475

    Enter the gallons used (-1 to end): 5
    Enter the miles driven: 120
    The miles/gallon for this tank was 24.000000

    Enter the gallons used (-1 to end): -1
    The overall average miles/gallon was 21.601423
----------------------------------------------------------------------------------------------------
 
-------------------------------------    Pseudocode    ---------------------------------------------
initialize currentGallons
initialize currentMiles
initialize totalGallons
initialize totalMiles

while currentGallons != -1
    prompt user Enter the gallons used (-1 to end)
    input currentGallon
     if( currentGallon != -1)
        promp user Enter miles driven
        print The miles/gallon for this tank was miles/gallon
        totalGallons += currentGallons
        totalMiles += currentMiles

print The overall average miles/gallon was totalMiles/totalGallons
-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition
    float currentGallons = 0;
    float currentMiles = 0;
    float totalGallons = 0;
    float totalMiles = 0;

    //loop until user enters -1
    while(currentGallons != -1){
        //prompt user for amount of gallons
        printf("%s","Enter the gallons used (-1 to end): ");

        //read users input
        scanf("%f", &currentGallons);

        //check if user entered sentinel value
        if(currentGallons != -1){
            //prompt user for amount of miles
            printf("%s","Enter the miles driven: ");

            //read user input
            scanf("%f",&currentMiles);

            //calculate and print miles per gallon for tank
            printf("%s %.6f","The miles/gallon for this tank was ", currentMiles/currentGallons);

            //add the total amount of gallons
            totalGallons += currentGallons;
            //add the total amount of gallons
            totalMiles += currentMiles;
        }//end if
    }//end of while

    //calculate and print miles per gallon for total entered by user
    printf("%s %.6f","The overall average miles/gallon was ", totalMiles/totalGallons);

}//end function main

