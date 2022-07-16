/***************************************************************************************************

File Name: ex03_02.cpp
     Date: 2022-07-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
    My answer to exercise 3.2 using only the tools and methods taught up to Chapter 3.

Description:
    3.2 A polynomial
               n -1 
        P(x) =  E a(i)x^i
               i =0
should be evaluated using Horner's method:

        P(x) = (...((a(n-1)x + a(n-2))x + a(n-3)x +...)x+ a(0)

Write a program that reads from cin the number of coefficients, n, followed by n coefficients, 
followed by an arbitary number of x values. For each x value, compute and print P(x).
***************************************************************************************************/

#include <iostream>//standard input/output
#include <cmath>//math functions, e.g. pow()

//function prototype
int polynomial(int a[],int n, int x){
    int result = 0;

    for(int i = 0; i < n; i++){
        result +=(a[i] * pow(x,(n-(i+1))));
    }//end for loop 'i'

    return result;
}//end function polynomial*/


int main(){
    int n = 0;//size of array
    int x = 0; 
    int pX = 0;
    
    std::cout << "Enter number of coefficients to enter: ";
    std::cin >> n;

    int a[n];//array of size n

    for(int i = 0; i < n; i++){
        std::cout << "Enter coefficients: ";
        std::cin >> a[i];
    }

    std::cout << "Enter value of x: ";
    std::cin >> x;

    pX = polynomial(a,n,x);
    std::cout << pX << std::endl;

    return 0;
}//end function main