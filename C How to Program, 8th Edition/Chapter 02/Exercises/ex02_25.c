/***************************************************************************************************
File Name: ex02_25.c
     Date: 2022-05-28
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.25 using only the tools and methods taught up to chapter 2.

Description:
	2.25 Print your initials in block letters down the page. Construct each block letter out of 
the letter it represents, as shown on the top of the next page:
-------------  Example Output  --------------------------------------------------------------------

	PPPPPPPPP 
  	    P   P 
	    P   P
	    P   P 
	     P P

	  JJ
       	 J
	J 
	 J
	  JJJJJJJ


	DDDDDDDDD 
	D       D 
	D       D 
	 D     D 
	  DDDDD

	WWWWWWWWW
	 W
	   W
	 W 
	WWWWWWWWW

        PPPPPPPPP
	    P   P
            P   P
            P	P
	     P P

	NNNNNNNNN
         N
            N
               N 
        NNNNNNNNN    	      
--------------------------------------------------------------------------------------------------

   
-----------------------------      Pseudocode      ------------------------------------

-----------------------------    End Pseudocode    ------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){
	//variable definition

	puts("\nWWWWWWWWW");
	puts(" W");
	puts("   W");
	puts(" W"); 
	puts("WWWWWWWWW\n");
	

        puts("PPPPPPPPP");
	puts("    P   P");	
        puts("    P   P");
        puts("    P   P");
	puts("     P P \n");

	puts("NNNNNNNNN");
        puts(" N ");
        puts("    N ");
        puts("       N "); 	
        puts("NNNNNNNNN\n");

}//end function main

