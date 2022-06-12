/***************************************************************************************************
File Name: ex02_27.c
     Date: 2022-05-30
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.27 using only the tools and methods taught up to chapter 2.

Description:
	2.27 (Checkerboard Pattern of Asterisks) Display the following checkerboard pattern with 
eight printf statements and then display the same pattern with as few printf statements as possible.

----------   Example Output   ---------------------------------------------------------------------
  * * * * * * * * 
   * * * * * * * *
  * * * * * * * * 
   * * * * * * * *
  * * * * * * * * 
   * * * * * * * *
  * * * * * * * * 
   * * * * * * * *
----------------------------------------------------------------------------------------------------

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition

  //practicing secure C
  //section 2.7 in the book	
  puts("Using 8 printf statements");
  puts("* * * * * * * *"); 
  puts(" * * * * * * * *");
  puts("* * * * * * * *"); 
  puts(" * * * * * * * *");
  puts("* * * * * * * *"); 
  puts(" * * * * * * * *");
  puts("* * * * * * * *"); 
  puts(" * * * * * * * *");

  //few statements as possible
  puts("Using only 2 printf statements");
  printf("%s \n %s \n %s \n %s \n", "* * * * * * * *"," * * * * * * * *",
		  "* * * * * * * *"," * * * * * * * *");
  printf("%s \n %s \n %s \n %s \n", "* * * * * * * *"," * * * * * * * *",
		  "* * * * * * * *"," * * * * * * * *");
}//end function main

