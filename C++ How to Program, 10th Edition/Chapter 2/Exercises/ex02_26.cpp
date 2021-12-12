/* ************************************************************************************

Filename: ex02_26.cpp
    Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.26 using only the tools and methods thought in Chapter 2.

Description:

2.26 (Checkerboard Pattern) Display the following checkerboard pattern with eight output
statements, then display the same pattern using as few statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// function main begins program
int main(){

cout <<" Using 8 cout statements:\n";
cout << "* * * * * * * *" << endl;
cout << " * * * * * * * *" << endl;
cout << "* * * * * * * *" << endl;
cout << " * * * * * * * *" << endl;
cout << "* * * * * * * *" << endl;
cout << " * * * * * * * *" << endl;
cout << "* * * * * * * *" << endl;
cout << " * * * * * * * *" << endl;

cout << "Using as few cout statements as possible:\n";
cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *" << endl;
cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *" << endl;

return 0; // indicate that program ended successfully
} // end of function main
