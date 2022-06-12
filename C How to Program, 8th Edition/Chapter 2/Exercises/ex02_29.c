/***************************************************************************************************
File Name: ex02_29.c
     Date: 2022-05-30
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 2.29 using only the tools and methods taught up to chapter 2.

Description:
	2.29 (Integer Value of a Character) Here’s a peek ahead. In this chapter you learned about 
integers and the type int. C can also represent uppercase letters, lowercase letters and a 
considerable variety of special symbols. C uses small integers internally to represent each different 
character. The set of characters a computer uses together with the corresponding integer 
representations for those characters is called that computer’s character set. 

	You can print the integer equivalent of uppercase A, for example, by executing the statement
		
		printf( "%d", 'A' );

	Write a C program that prints the integer equivalents of some uppercase letters, lowercase 
letters, digits and special symbols. 

	As a minimum, determine the integer equivalents of the following: 
		
		A B C a b c 0 1 2 $ * + / and the blank character.   

----------   Example Output   ----------------------------------------------------------------------

----------------------------------------------------------------------------------------------------

   
-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------

***************************************************************************************************/

#include <stdio.h>//standard input/output header

//function main begins program execution
int main(void){

	/* this section prints the integer value of a character using what has been taught up to 
chapter 2 */
	puts("Printing the Integer Value of a Character");
	puts("Character Integer Value");
	printf("%s = %d \n", "A", 'A');
	printf("%s = %d \n", "B", 'B');
        printf("%s = %d \n", "C", 'C');
        printf("%s = %d \n", "a", 'a');
	printf("%s = %d \n", "c", 'c');
        printf("%s = %d \n", "0", '0');
        printf("%s = %d \n", "1", '1');
        printf("%s = %d \n", "2", '2');
        printf("%s = %d \n", "$", '$');
        printf("%s = %d \n", "*", '*'); 
	printf("%s = %d \n", "+", '+');
	printf("%s = %d \n", "/", '/'); 
        printf("%s = %d \n", " ", ' ');//the blank character.   
	

        /* this section prints the integer value of a character enter by the user
the 'char' keyword is mentioned in section 2.6 - Fig. 2.15. 'char' and "%c" is introduce in a later
chapter in the book */
	//variable definition
	//char is a C keyword that create variable that accept characters
	//Mentioned in Section 2.6 - Fig. 2.15,
	char characterIntegerValue;
	
	//prompt user for a character
	printf("Please enter a character: ");

	//read character from user
	// '%c' allows scanf to read single character enter by user
	scanf("%c", &characterIntegerValue);

	//print the integer value of the character
	printf("The integer value of the character %c is %d \n", characterIntegerValue, characterIntegerValue);

}//end function main
 
