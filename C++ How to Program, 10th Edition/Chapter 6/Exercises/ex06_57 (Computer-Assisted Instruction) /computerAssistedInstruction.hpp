/***************************************************************************************************

File Name: computerAssisstedInstructions.hpp
     Date: 2026-02-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.57 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.57 (Computer-Assisted Instruction) The use of computers in education is referred to as computer-assisted 
instruction (CAI). Write a program that will help an elementary-school student learn multiplication. 
Use the rand function to produce two positive one-digit integers. The program should then prompt the 
user with a question, such as

    How much is 6 times 7?

The student then inputs the answer. Next, the program checks the student’s answer. If it’s correct,
display the message "Very good!" and ask another multiplication question. If the answer is wrong,
display the message "No. Please try again." and let the student try the same question repeatedly
until the student finally gets it right. A separate function should be used to generate each new 
question. This function should be called once when the application begins execution and each time 
the user answers the question correctly.

-------------------------------------    Pseudocode    ---------------------------------------------

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <cstdlib> // contains prototypes for functions srand and rand
#include <string> // enable program to use C++ string data type

//function definitions
//chatter function; will display a message after every answer from the student 
void chatter(bool answeredCorrectly){

    //if answers are correct
    if(answeredCorrectly){
        //pick message at random
        std::string message[] = {
            "Very good!"
        };
        //printouts message
        std::cout << message[0];
    }//end if

    else{
        //pick message at random
        std::string message[] = {
            "No. Please try again."
        };
        //printouts message
        std::cout << message[0];

    }//end else
}//end chatter function

//multiplication
void multiplication(){
    // declaring and initializing variables
    int x = rand() % 10;//generate a random number between 0 and 9
    int y = rand() % 10;//generate a random number between 0 and 9
    int correctAns = x * y;//use to compare and check student's answers
    int answer = 0;
    //bool choice = false;

    std::cout << "    ++====********    LEARN MULTIPLICATION    ********====++\n";
    std::cout << "--------------------------------------------------------------\n" << std::endl;

    //do...while loop
    do{
        std::cout << "How much is " << x << " times " << y << "(enter -1 to exit)? ";//promt student for the answer
        std::cin >> answer;//reads answer from student
        
        //check student's answers to see if it's correct
        if(answer == correctAns){
            chatter(true);
            x = rand() % 10;//generate a random number between 0 and 9
            y = rand() % 10;//generate a random number between 0 and 9
            correctAns = x * y;//use to compare and check student's answers
        }//end if
        else{
            chatter(false);
        }//end else
    }while(answer == -1);//end do...while loop

}//end multiplication function
