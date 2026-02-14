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
PROGRAM LearnMultiplicationWithChatter

    // Global or accessible random number generator is needed to be seeded 
    // the srand(time(NULL)) in main function

    // Returns a random one-digit integer (1 to 9)
    FUNCTION getRandomDigit() returns integer
        RETURN random integer between 1 and 9 (inclusive)
    END FUNCTION

    // Generates new multiplication question and returns the correct answer
    FUNCTION generateNewQuestion() returns integer
        DECLARE integer a ← getRandomDigit()
        DECLARE integer b ← getRandomDigit()
        DECLARE integer correct ← a * b
       
        DISPLAY "How much is ", a, " × ", b, " ? "
       
        RETURN correct
    END FUNCTION

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
        DECLARE integer x, y, correctAnswer, studentAnswer

        DISPLAY header:
            "    ++====********    LEARN MULTIPLICATION    ********====++"
            "--------------------------------------------------------------"

        // Generate first question
        SET x ← random integer 0 to 9
        SET y ← random integer 0 to 9
        SET correctAnswer ← x * y

        // Main practice loop
        REPEAT
            DISPLAY "How much is ", x, " times ", y, " (enter -1 to exit)? "
            INPUT studentAnswer

            IF studentAnswer == correctAnswer THEN
                CALL chatter(true)
                // Generate next question
                SET x ← random integer 0 to 9
                SET y ← random integer 0 to 9
                SET correctAnswer ← x * y
            ELSE IF studentAnswer != -1 THEN
                CALL chatter(false)
                // same question continues (no new numbers generated)
            END IF

        UNTIL studentAnswer == -1

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
