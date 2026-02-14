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
PROGRAM ComputerAssistedMultiplicationTutor

    // Global / shared data
    DECLARE string correctMessages[4] ← {
        "Very good!",
        "Excellent!",
        "Nice work!",
        "Keep up the good work!"
    }

    DECLARE string incorrectMessages[4] ← {
        "No. Please try again.",
        "Wrong. Try once more.",
        "Don't give up!",
        "No. Keep trying."
    }

    // ────────────────────────────────────────────────
    // FUNCTION: Returns random digit 1–9
    // ────────────────────────────────────────────────
    FUNCTION getRandomDigit() RETURNS integer
        RETURN random integer between 1 and 9 (inclusive)
    END FUNCTION

    // ────────────────────────────────────────────────
    // PROCEDURE: Displays random encouraging / corrective message
    // ────────────────────────────────────────────────
    PROCEDURE chatter(answeredCorrectly: boolean)
        IF answeredCorrectly THEN
            index ← random integer between 0 and 3 inclusive
            DISPLAY correctMessages[index]
        ELSE
            index ← random integer between 0 and 3 inclusive
            DISPLAY incorrectMessages[index]
        END IF
        DISPLAY newline
    END PROCEDURE

    // ────────────────────────────────────────────────
    // FUNCTION: Prints question and returns correct product
    // ────────────────────────────────────────────────
    FUNCTION generateNewQuestion() RETURNS integer
        DECLARE integer x ← getRandomDigit()
        DECLARE integer y ← getRandomDigit()
        DISPLAY "How much is ", x, " times ", y, " (enter -1 to exit)? "
        RETURN x * y
    END FUNCTION

    // ────────────────────────────────────────────────
    // MAIN PROCEDURE: multiplication tutor loop
    // ────────────────────────────────────────────────
    PROCEDURE multiplication()
        DISPLAY "    ++====********    LEARN MULTIPLICATION    ********====++"
        DISPLAY "--------------------------------------------------------------"
        DISPLAY newline

        DECLARE integer correctAnswer
        DECLARE integer studentAnswer ← 0

        // Generate first question
        SET correctAnswer ← generateNewQuestion()

        // Main loop – continues until user enters -1
        DO
            INPUT studentAnswer

            IF studentAnswer == correctAnswer THEN
                CALL chatter(true)
                SET correctAnswer ← generateNewQuestion()
            ELSE IF studentAnswer != -1 THEN
                CALL chatter(false)
                // Note: does NOT generate new question on wrong answer
            END IF

        WHILE studentAnswer != -1

        // (program ends when -1 is entered)
    END PROCEDURE

    // ────────────────────────────────────────────────
    // PROGRAM ENTRY POINT
    // ────────────────────────────────────────────────
    MAIN
        INITIALIZE random number generator (using current time)
        CALL multiplication()
    END MAIN

END PROGRAM

-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include <iostream>//enable program to perform input/output
#include <cstdlib> // contains prototypes for functions srand and rand
#include <string> // enable program to use C++ string data type
#include <ctime>//enable program to perform time functions

//function definitions
//chatter function; will display a message after every answer from the student 
void chatter(bool answeredCorrectly){
    // declaring and initializing variables
    std::string correctMessage[] = {
            "Very good!",
            "Excellent!",
            "Nice work!",
            "Keep up the good work!"
        };
    
    std::string incorrectMessage[] = {
            "No. Please try again.",
            "Wrong. Try once more.",
            "Don't give up!",
            "No. Keep trying."
        };

    //if answers are correct
    if(answeredCorrectly){
        //pick message at random
        //printouts message
        std::cout << correctMessage[rand()%4] << std::endl;
    }//end if

    else{
        //pick message at random
        //printouts message
        std::cout << incorrectMessage[rand()%4] << std::endl;
    }//end else
}//end chatter function

//begin getRandomDigit
int getRandomDigit(){
    return (rand() % 9) + 1;//generate a random number between 1 and 9
}//end getRandomDigit function

int generateNewQuestion(){
    // declaring and initializing variables
    int x = getRandomDigit();//generate a random number between 1 and 9
    int y = getRandomDigit();//generate a random number between 1 and 9

    std::cout << "How much is " << x << " times " << y << " (enter -1 to exit)? ";//promt student for the answer
   return x * y;
}//end generateNewQuestion function


//multiplication
void multiplication(){
    // declaring and initializing variables
    int correctAnswer = generateNewQuestion();//use to compare and check student's answers
    int studentAnswer = 0;

    std::cout << "    ++====********    LEARN MULTIPLICATION    ********====++\n";
    std::cout << "--------------------------------------------------------------\n" << std::endl;

    correctAnswer = generateNewQuestion();//use to compare and check student's answers

    //do...while loop
    do{
        //check student's answers to see if it's correct
        if(studentAnswer == correctAnswer){
            chatter(true);
            correctAnswer = generateNewQuestion();//use to compare and check student's answers
        }//end if
        else if(studentAnswer != -1){
            chatter(false);
        }//end else
    }while(studentAnswer != -1);//end do...while loop

}//end multiplication function
