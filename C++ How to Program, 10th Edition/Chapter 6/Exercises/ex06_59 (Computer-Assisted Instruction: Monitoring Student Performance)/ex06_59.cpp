/***************************************************************************************************

File Name: ex06_59.cpp
     Date: 2026-02-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.57 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:
    6.58 (Computer-Assisted Instruction: Reducing Student Fatigue) One problem in CAI environments is 
student fatigue. This can be reduced by varying the computer’s responses to hold the student’s attention. 
Modify the program of Exercise 6.57 so that various comments are displayed for each answer as follows:

    Possible responses to a correct answer:
        Very good!
        Excellent!
        Nice work!
        Keep up the good work!
    
    Possible responses to an incorrect answer:
        No. Please try again.
        Wrong. Try once more.
        Don't give up!
        No. Keep trying.

Use random-number generation to choose a number from 1 to 4 that will be used to select
one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
issue the responses.

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
PROGRAM LearnMultiplicationWithChatter

    // Global or accessible random number generator is assumed to be seeded 
    // (equivalent to srand(time(NULL)) in main)

    // ────────────────────────────────────────────────
    // Function: chatter
    // Displays a random encouraging message depending on whether the answer was correct
    // ────────────────────────────────────────────────
    PROCEDURE chatter(boolean answeredCorrectly)
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

        IF answeredCorrectly THEN
            index ← random integer from 0 to 3
            DISPLAY correctMessages[index]
        ELSE
            index ← random integer from 0 to 3
            DISPLAY incorrectMessages[index]
        END IF
    END PROCEDURE


    // ────────────────────────────────────────────────
    // Function: multiplication (main practice loop)
    // ────────────────────────────────────────────────
    PROCEDURE multiplication()
        DECLARE integer x, y, product, answer

        DISPLAY header:
            "    ++====********    LEARN MULTIPLICATION    ********====++"
            "--------------------------------------------------------------"

        // Generate first question
        SET x ← random integer 0 to 9
        SET y ← random integer 0 to 9
        SET product ← x * y

        // Main practice loop
        REPEAT
            DISPLAY "How much is ", x, " times ", y, " (enter -1 to exit)? "
            INPUT answer

            IF answer == product THEN
                CALL chatter(true)
                // Generate next question
                SET x ← random integer 0 to 9
                SET y ← random integer 0 to 9
                SET product ← x * y
            ELSE IF answer != -1 THEN
                CALL chatter(false)
                // same question continues (no new numbers generated)
            END IF

        UNTIL answer == -1

        // (program ends quietly when -1 is entered)
    END PROCEDURE


    // ────────────────────────────────────────────────
    // Main program (implied)
    // ────────────────────────────────────────────────
    MAIN
        INITIALIZE random number generator with current time
        CALL multiplication()
    END MAIN

END PROGRAM
-----------------------------------    End Pseudocode    -------------------------------------------
    
***************************************************************************************************/

#include "computerAssistedInstruction.hpp"//enable program to use function from computerAssistedInstruction

// function main begins program execution
int main(){
    // declaring and initializing variables

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    multiplication();

    return 0;// indicate that program ended successfully
}// end of main function