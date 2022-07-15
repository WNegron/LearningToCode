/***************************************************************************************************
File Name: ex03_01.cpp
     Date: 2022-07-14
   Author: Warren Negron
    Email: warren.negron@gmail.com
   
Notes:
My answer to exercise 3.1 using only the tools and methods taught up to chapter 3.

Description:
	3.1 In file regurgitate.c (page 67), change the declaration of a,b, and c to type int. Does the 
program still work? Rewrite the oroiginal program in C using scanf() and printf(), and then make the 
same change. Does the program still work?
***************************************************************************************************/

#include <iostream>//standard input/output

int main(){
    //read and print three floating point numbers
    float a,b,c;
    //int a,b,c;

    std::cin >> a >> b >> c;

    std::cout << a << "," << b << "," << c << std::endl;

    return 0;
}//end funciton main