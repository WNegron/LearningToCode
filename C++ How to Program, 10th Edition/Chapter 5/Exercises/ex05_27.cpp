/* ************************************************************************************

Filename: ex05_27.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.27 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

The 'continue' statement in this code can be remove by making use of the if...else statements.

Description:
	5.27 (Replacing continue with a Structured Equivalent) Describe in general how you’d remove
any continue statement from a loop in a program and replace it with some structured equivalent. 

Use the technique you develop here to remove the continue statement from the program in Fig. 5.14.

----------- Output --------------------------------------------------------------------
1 2 3 4 6 7 8 9 10 
Didn't used continue to skip printing 5

---------------------------------------------------------------------------------------

   
-----------------------------      Fig. 5.14 Code      ------------------------------------
// Fig. 5.14: ContinueTest.cpp
// continue statement terminating an iteration of a for statement.
#include <iostream>
using namespace std;

int main() {
   for (unsigned int count{1}; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         continue; // skip remaining code in loop body if count is 5
      }

      cout << count << " ";
   } 

   cout << "\nUsed continue to skip printing 5" << endl;
}


 **************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************

-----------------------------    End Fig. 5.14 Code    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables

for (unsigned int count{1}; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         //continue; // skip remaining code in loop body if count is 5
      }//end of if
      
      else{
      	cout << count << " ";
      	}//end of else
}//end of for

   cout << "\nDidn't used continue to skip printing 5" << endl;

return 0; // indicate that program ended successfully
} // end of function main
