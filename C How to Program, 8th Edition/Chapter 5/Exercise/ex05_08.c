/***************************************************************************************************
File Name: ex05_08.c
     Date: 2022-07-05
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 5.08 using only the tools and methods taught up to chapter 5.

Description:
	5.8 Show the value of x after each of the following statements is performed: 
        a) x = fabs(7.5);
        b) x = floor(7.5);
        c) x = fabs(0.0);
        d) x = ceil(0.0);
        e) x = fabs(-6.4);
        f) x = ceil(-6.4);
        g) x = ceil(-fabs(-8 + floor(-5.5)));

----------   Example Output   ----------------------------------------------------------------------

----------------------------------------------------------------------------------------------------

   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h> //standard input/output header
#include <math.h> //enable program to use mathematical functions that are part of the header file

//function main begins program execution
int main(void){
	//variable definition
    double x = 0.0;

    printf("%s","Showing the value of 'x': ");

     //a) x = fabs(7.5);
     x = fabs(7.5);
     printf("\n\"x = fabs(7.5)\" = %.6f \n", x);

     //b) x = floor(7.5);
     x = floor(7.5);
     printf("\"x = floor(7.5)\" = %.6f \n", x);

     //c) x = fabs(0.0);
     x = fabs(0.0);
     printf("\"x = fabs(0.0)\" = %.6f \n", x);

     //d) x = ceil(0.0);
     x = ceil(0.0);
     printf("\"x = ceil(0.0)\" = %.6f \n", x);

     //e) x = fabs(-6.4);
     x = fabs(-6.4);
     printf("\"x = fabs(-6.4)\" = %.6f \n", x);

     //f) x = ceil(-6.4);
     x = ceil(-6.4);
     printf("\"x = ceil(-6.4)\" = %.6f \n", x);

     //g) x = ceil(-fabs(-8 + floor(-5.5)));
     x = ceil(-fabs(-8 + floor(-5.5)));
     printf("\"x = ceil(-fabs(-8 + floor(-5.5)))\" = %.6f \n", x);
	
}//end function main
