/***************************************************************************************************

File Name: ex06_61.cpp
     Date: 2026-02-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.61 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

    6.61 (Computer-Assisted Instruction: Varying the Types of Problems) Modify the program of
Exercise 6.60 to allow the user to pick a type of arithmetic problem to study. An option of 1 means
addition problems only, 2 means subtraction problems only, 3 means multiplication problems only,
4 means division problems only and 5 means a random mixture of all these types.

    6.60 (Computer-Assisted Instruction: Difficulty Levels) Exercises 6.57–6.59 developed a 
computer-assisted instruction program to help teach an elementary-school student multiplication. Modify 
the program to allow the user to enter a difficulty level. At a difficulty level of 1, the program
should use only single-digit numbers in the problems; at a difficulty level of 2, numbers as large as
two digits, and so on.

    6.59 (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
computer-assisted instruction systems monitor the student’s performance over a period of time. The
decision to begin a new topic is often based on the student’s success with previous topics. Modify
the program of Exercise 6.58 to count the number of correct and incorrect responses typed by the
student. After the student types 10 answers, your program should calculate the percentage that are
correct. If the percentage is lower than 75%, display "Please ask your teacher for extra help.",
then reset the program so another student can try it. If the percentage is 75% or higher, display
"Congratulations, you are ready to go to the next level!", then reset the program so another
student can try it.

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
    int choice;
    int difficulty;

    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));

    while(true){
        clearScreen();
        std::cout << "\nWhat type of math problem would you like to practice?\n";
        std::cout << "1 - Addition Problems\n";
        std::cout << "2 - Subtraction Problems\n";
        std::cout << "3 - Multiplication Problems\n";
        std::cout << "4 - Division Problems\n";
        std::cout << "5 - Random Mixture\n";
        std::cout << "Please enter a number between 1 and 5 (or -1 to quit): ";

        //reads and validates student's answer
        if (!(std::cin >> choice)) {
            // Handle bad input (letters, etc.)
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nPlease enter a number between 1 and 5  (or -1 to quit): ";
            continue;
        }//end if
        //checking for qutting option
        if(choice == -1) {
            clearScreen();
            std::cout << "\nGood bye!\n";
            break; // signal to exit the program
        }//end if

        else{
            std::cout << "\n\n";//printout new lines
            switch(choice){
                case 1:
                    std::cout << "Welcome to Addition Trainer!\n\n";
                    difficulty = difficultyLevel();
                    runAdditionSession(difficulty);//function call
                    break;

                case 2:
                    std::cout << "Welcome to Subtraction Trainer!\n\n";
                    difficulty = difficultyLevel();
                    runSubtractionSession(difficulty);//function call
                    break;
                
                case 3:
                    std::cout << "Welcome to Multiplication Trainer!\n\n";
                    difficulty = difficultyLevel();
                    runMultiplicationSession(difficulty);//function call 
                    break;
                
                case 4:
                    std::cout << "Welcome to Division Trainer!\n\n";
                    difficulty = difficultyLevel();
                    runDivisionSession(difficulty);//function call
                    break;
        
                case 5:
                    std::cout << "Welcome to Mix-Math Trainer!\n\n";
                    difficulty = difficultyLevel();
                    runMixMathSession(difficulty);
                    break;
                
                default:
                    if(choice != -1){
                        clearScreen();
                        std::cerr << "\nError: Incorrect choice.\n";
                        std::cout << "\nPlease enter a number between 1 and 5 or -1 to quit)\n";
                        dotsCountdown();    
                    }//end if
                    break;
            }//end of switch-case
        }//end else
    }//end while
    
    return 0;// indicate that program ended successfully
}// end of main function