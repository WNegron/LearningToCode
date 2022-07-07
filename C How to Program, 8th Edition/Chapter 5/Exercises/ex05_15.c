/***************************************************************************************************
File Name: ex05_15.c
     Date: 2022-07-06
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.15 using only the tools and methods taught up to chapter 5.

Description:
	5.15 (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length of 
the hypotenuse of a right triangle when the other two sides are given. The function should take two 
arguments of type double and return the hypotenuse as a double. 

Test your program with the side values specified in Fig. 5.22.

    Fig. 5.22
    Triangle   Side 1     Side 2
        1       3.0        4.0
        2       5.0       12.0
        3       8.0       15.0
***************************************************************************************************/

#include <stdio.h>//standard input/ouput header
#include <math.h>//math functions header

//function prototype
double hypotenuseCalc (double side1, double side2);

//function main begin program execution
int main(void){
    //variable definition
    double side1 = 0.0;
    double side2 = 0.0;
    double hypotenuse = 0.0;
    int counter = 0;

    printf("\n%s\n","Enter the sides of a right triangle to calculate the hypotenuse");

    //while loop
    while(side1 != -1){
        printf("%s","Enter side: ");//prompt user
        scanf("%lf", &side1);//read user input

        //check to see if sentinel value has been entered
        if(side1 != -1){
            ++counter;
            printf("%s","Enter side: ");//prompt user
            scanf("%lf", &side2);//read user input

            //calculate hypotenuse
            hypotenuse = hypotenuseCalc(side1,side2);

            //print results
            printf("%s","Triangle Side 1  Side 2  Hypotenuse\n");
            printf("   %d \t %.2f \t  %.2f   %.2f \n",counter, side1, side2, hypotenuse);
        }//end if

    }//end while loop

}//end function main

double hypotenuseCalc (double side1, double side2){
    return sqrt(pow(side1, 2.0) + pow(side2, 2.0));
}//function hypotenuseCalc