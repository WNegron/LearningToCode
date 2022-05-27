/* ************************************************************************************

Filename: ex05_26.cpp
    Date: 2022-05-26
  Author: Warren Negron
   Email: warren.negron@gmail.com

Note: 
My answer to exercise 5.26 using only the tools and methods taught up to Chapter 5.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
	5.26 What does the following program segment do?
  
    for ( unsigned int i{1}; i <= 2; i++ ){
      cout<<i<< " : ";
      for ( unsigned int j{1}; j <= 3; j++ ){
        for ( unsigned int k{4};k>= 2 ;k--){
          cout << k; }
        cout << "-" << j << endl; }
		}
    
    cout << endl;

--------- Actual Output --------------------------------------------------------------
1 : 432-1
432-2
432-3
2 : 432-1
432-2
432-3
---------------------------------------------------------------------------------------

************************************************************************************ */

#include <iostream> //enables program to perform input and output

using namespace std; //program uses names from the std namespace

// main function begins program
int main(){

// declaration and initializing variables

	for ( unsigned int i{1}; i <= 2; i++ ){ 
			cout<<i<< " : ";
			for ( unsigned int j{1}; j <= 3; j++ ){
				for ( unsigned int k{4};k>= 2 ;k--){
					cout << k; }
				cout << "-" << j << endl; }
		}
        cout << endl;


return 0; // indicate that program ended successfully
} // end of function main
