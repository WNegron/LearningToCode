/* ************************************************************************************

Filename: ex05_25.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.25 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

The 'break' statement in this code can be remove by making use of the if...else statements. 

Description:
	5.25 (Removing break and continue) A criticism of the break statement and the continue statement 
is that each is unstructured. Actually, these statements can always be replaced by structured 
statements, although doing so can be awkward. Describe in general how you’d remove any break 
statement from a loop in a program and replace it with some structured equivalent. 

[Hint: The break statement exits a loop from the body of the loop. The other way to exit is by 
failing the loop-continuation test. Consider using in the loop-continuation test a second test that 
indicates “early exit because of a ‘break’ condition.”] 

Use the technique you develop here to remove the break state- ment from the application in Fig. 5.13.

   
-----------------------------      Fig. 5.13 Code      ------------------------------------
// Fig. 5.13: BreakTest.cpp
// break statement exiting a for statement.
#include <iostream>
using namespace std;

int main() {
   unsigned int count; // control variable also used after loop 
   
   for (count = 1; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         break; // terminates loop if count is 5
      }

      cout << count << " ";
   }

   cout << "\nBroke out of loop at count = " << count << endl;
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

-----------------------------    End Fig 5.13 Code    ------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables
unsigned int count; // control variable also used after loop 
   
   for (count = 1; count <= 10; count++) { // loop 10 times
      if (count == 5) {
         //break; // terminates loop if count is 5
         cout << "\nBroke out of loop at count = " << count << endl;
         count = 11;
      }//end of if
      else{
      	cout << count << " ";
      	}//end of else
   }//end of for

return 0; // indicate that program ended successfully
} // end of function main
