/* ************************************************************************************

Filename: ex02_21.cpp
		Date: 2021-12-09
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: My answer to exercise 2.21 using only the tools and methods thought in Chapter 2.

Description:
 2.21 (Displaying Large Letters) Write a program that prints C++ as follows:

  *********    ***	*        *
  *       *   *   *    ***     *   *
  *       *  *     *  *****   *     *
  *       *  *     *   	*    *       *
  *       *  *     *   	*   *         *
  *       *  *     *   	*    *       *
  *       *  *     *	*     *     *
  *       *   *   *   	*      *   *
  *********    ***      *        *
************************************************************************************ */

#include <iostream> //enables program to perform input and output
using namespace std; //program uses names from the std namespace

// function main begins program
int main(){

cout << "*********    ***       *        *"     << endl;
cout << "*       *   *   *     ***     *   *"   << endl;
cout << "*       *  *     *   *****   *     *"  << endl; 
cout << "*       *  *     *     *    *       *" << endl; 
cout << "*       *  *     *     *   *	       *" << endl;
cout << "*       *  *     *     *    *       *"  << endl;
cout << "*       *  *     *     *     *     *"   << endl;
cout << "*       *   *   *      *      *   *"    << endl;
cout << "*********    ***       *        *"    	<< endl;    

return 0; // indicate that program ended successfully
} // end of function main
