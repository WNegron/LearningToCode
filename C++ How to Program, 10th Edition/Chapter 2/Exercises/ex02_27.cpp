/* ************************************************************************************

Filename: ex02_27.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.27 using only the tools and methods taught up to Chapter 2.

Description:

2.27 (Integer Equivalent of a Character) Here is a peek ahead. In this chapter you
learned about integers and the type int. C++ can also represent uppercase letters,
lowercase letters and a consider- able variety of special symbols. C++ uses small integers
internally to represent each different charac- ter. The set of characters a computer uses 
and the corresponding integer representations for those characters are called that
computer’s character set. You can print a character by enclosing that char- acter in
single quotes, as with

	cout << 'A'; // print an uppercase A
	
You can print the integer equivalent of a character using static_cast as follows:
	cout << static_cast<int>('A'); // print 'A' as an integer

This is called a cast operation (we formally introduce casts in Chapter 4). When the
preceding statement executes, it prints the value 65 (on systems that use the ASCII
character set). Write a program that prints the integer equivalent of a character typed at
the keyboard. Store the input in a variable of type char. Test your program several times
using uppercase letters, lowercase letters, dig- its and special characters (such as $).

************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
// argc is a NULL pointer; argv[] contains the name of the program
int main(int argc, const char * argv []){

// declaring and initializing variables
char value;

//prompt user to enter a character
cout << "Enter a character: ";
cin >> value;

cout << static_cast<int>(value); //print the character stored in value as an integer

cout << endl;

return 0; // indicate that program ended successfully
} // end of function main
