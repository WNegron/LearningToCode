/***************************************************************************************************

File Name: computerAssisstedInstructions.hpp
     Date: 2026-02-14
   Author: Warren Negron
    Email: warren.negron@gmail.com

Note: 
My answer to exercise 6.59 using only the tools and methods taught up to Chapter 6.

This exercise is from the global Edition of C++ How to Program, 10/e 

Description:

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
PROGRAM ComputerAssistedMultiplicationTutor

    // Global or accessible random number generator is assumed to be seeded 
    // (equivalent to srand(time(NULL)) in main)

    // ────────────────────────────────────────────────
    // FUNCTION: chatter
    // Displays a random encouraging message depending on whether the answer was correct
    // ────────────────────────────────────────────────
    FUNCTION chatter(boolean answeredCorrectly)
        //
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
    END FUNCTION

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
    // FUNCTION: multiplication tutor loop
    // ────────────────────────────────────────────────
    FUNCTION runMultiplicationSession()
        DECLARE correctCount ← 0
        DECLARE totalAnswers ← 0
        DECLARE correctAnswer ← 0
        DECLARE studentAnswer ← 0

        Display header:
            "_____________________________________________________________"
            "    ++====********    LEARN MULTIPLICATION    ********====++"
            "_____________________________________________________________"

        SET correctAnswer ← generateNewQuestion()

        WHILE totalAnswers < 10 DO
            READ studentAnswer

            IF input failed (not a number) THEN
                Clear input error
                Ignore rest of line
                Display "Please enter a number (or -1 to quit): "
                CONTINUE to next loop iteration
            END-IF

            IF studentAnswer = -1 THEN
                Display "Goodbye! Come back soon!"
                EXIT procedure (end session)
            END-IF

            INCREMENT totalAnswers

            IF studentAnswer = correctAnswer THEN
                INCREMENT correctCount
                CALL correctMessage()        // random positive message
            ELSE
                CALL incorrectMessage()      // random try again message
            END-IF

            // Special point: after exactly 10 answers
            IF totalAnswers = 10 THEN
                CALCULATE percentage ← (correctCount * 100) / totalAnswers

                Display "You answered " + totalAnswers + " questions."
                Display "Correct answers: " + correctCount + " (" + percentage + "%)"
                Display blank line

                IF percentage ≥ 75 THEN
                    Display "Congratulations, you are ready to go to the next level!"
                ELSE
                    Display "Please ask your teacher for extra help."
                END-IF

                Display separator line
                Display "       Starting new student"
                Display separator line
                Display blank line

                // Reset for new student / new session
                SET correctCount ← 0
                SET totalAnswers ← 0
                SET correctAnswer ← generateNewQuestion()

                CONTINUE   // go back to beginning of while loop for new set
            END-IF

            // Normal flow: next question
            SET correctAnswer ← generateNewQuestion()

        END-WHILE
    END FUNCTION

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
//correctMessage function; will display a message after every answer from the student 
void correctMessage(){
    // declaring and initializing variables
    std::string correctMessage[] = {
            "Very good!",
            "Excellent!",
            "Nice work!",
            "Keep up the good work!"
        };
    //pick message at random
    //printouts message
    std::cout << correctMessage[rand()%4] << std::endl;
}//end correctMessage function

//incorrectMessage function; will display a message after every answer from the student 
void incorrectMessage(){
    // declaring and initializing variables
    std::string incorrectMessage[] = {
            "No. Please try again.",
            "Wrong. Try once more.",
            "Don't give up!",
            "No. Keep trying."
        };
    //pick message at random
    //printouts message
    std::cout << incorrectMessage[rand()%4] << std::endl;
}//end incorrectMessage function

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
void runMultiplicationSession(){
    // declaring and initializing variables
    int correctAnswer = 0;
    int studentAnswer = 0;
    int correctCount  = 0;
    int totalAnswers  = 0;

    std::cout << "_____________________________________________________________\n";
    std::cout << "  ++====********    LEARN MULTIPLICATION    ********====++\n";
    std::cout << "_____________________________________________________________\n" << std::endl;

    correctAnswer = generateNewQuestion();//use to compare and check student's answers

    //while loop
    //it loops forever; to break loop student must enter -1
    while (totalAnswers < 10){
        //reads and validates student's answer
        if (!(std::cin >> studentAnswer)) {
            // Handle bad input (letters, etc.)
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Please enter a number (or -1 to quit): ";
            continue;
        }//end if

        //terminates loop when student enters -1
        if (studentAnswer == -1) {
            std::cout << "Goodbye! Come back soon!\n";
            break;  // exit session (and program)
        }//end if

        totalAnswers++;

        //check student's answers to see if it's correct
        if(studentAnswer == correctAnswer){
            correctCount++;
            correctMessage();//will display a message after every answer from the student 
            //correctAnswer = generateNewQuestion();//use to compare and check student's answers
        }//end if
        else if(studentAnswer != -1){
            incorrectMessage();//will display a message after every answer from the student
            //new question is not generated yet; let's them try again  
        }//end else

        // After 10 answers → evaluate and reset
        if (totalAnswers == 10) {
            int percentage = (correctCount * 100) / totalAnswers;

            std::cout << "\nYou answered " << totalAnswers << " questions.\n";
            std::cout << "Correct answers: " << correctCount << " (" << percentage << "%)\n\n";

            if (percentage >= 75) {
                std::cout << "Congratulations, you are ready to go to the next level!\n";
            } else {
                std::cout << "Please ask your teacher for extra help.\n";
            }//end if...else

            std::cout << "\n───────────────────────────────\n";
            std::cout << "       Starting new student\n";
            std::cout << "───────────────────────────────\n\n";

            // Reset counters and start fresh session
            correctCount = 0;
            totalAnswers = 0;
            correctAnswer = generateNewQuestion();
            continue;
        }//end if

        // Next question
        correctAnswer = generateNewQuestion();//use to compare and check student's answers
    }//end while loop
}//end multiplication function
